//*************************************************************************************
//*************************************************************************************
//**                                                                                 **
//**     Copyright (c) 2015 Shanghai Zhaoxin Semiconductor Co., Ltd.                 **
//**    
//**     Author: ChrisJWang    Date:07/10/18                                           **
//*************************************************************************************
//*************************************************************************************

#include "Header/Eye_monitor.h"
#include "Header/Eye_monitor2.h"
#include "stdio.h"



#if DBG1400
volatile unsigned char xdata EM_DEBUG_1400[PORT_COUNT][DBG_BUFF_LINES][DBG_BUFF_COLS] _at_ 0x1400;
#endif
#if DBG1200
volatile unsigned char xdata ERR_DEBUG_1200[16][16] _at_ 0x1200;
//extern  unsigned char ERR_DEBUG_1200[16][16]; 
#endif
#if DBG1300
extern  unsigned char EQ_DEBUG_1300[16][16]; 	
#endif

volatile unsigned char xdata EYE_SCAN_DONE _at_ 0xE902;  //bit6

unsigned gEyeScanTime = 0xFF; // 2.41 us per point


extern EyeMonInPa_FB EyeMonInParaResult;
extern EyeMonInPa_9D8 EyeMonInParaEyeInf;
extern EyeMonInPa_F8 EyeMonInParaPointXY;
extern UCHAR Lane_Num;
extern UCHAR Eye_Monitor_stage;
extern volatile UCHAR EQ_FS;
extern volatile UCHAR EQ_Pre_Cursor;
extern volatile UCHAR EQ_Cursor;
extern volatile UCHAR EQ_Post_Cursor;

extern unsigned short Millisecond ;
extern unsigned short Tick;

UCHAR FAREND_EQ_PreCursor = 0;
UCHAR FAREND_EQ_Cursor = 0;
UCHAR FAREND_EQ_PostCursor = 0;


const unsigned char EWth = 40;

#define  MAX_LANE_COUNT  8

CURSOR_EW BestCursorEw[MAX_LANE_COUNT] = {0};
//PRESET_EW BestPresetEw[MAX_LANE_COUNT] = {0};

volatile unsigned char AdjustStage = NotStart;
unsigned char CursorAdjustStep = 1;
	
//
// {0 , 0, 6 means Preset0 : PreCursor = FS*(0/24),  PostCursor = FS*(6/24)   }
//
unsigned char PesetCursorMappingTable[10][3] = {
	{0, 0, 6},
	{1, 0, 4},
	{2, 0, 5},
	{3, 0, 3},
	{4, 0, 0},
	{5, 2, 0},
	{6, 3, 0},
	{7, 2, 5},
	{8, 3, 3},
	{9, 4, 0} 
};



void
Eye_PresetTranstoCursor(
	unsigned char xFS, 
	unsigned char *pPreset,
	unsigned char *pPre,
	unsigned char *pCur,
	unsigned char *pPost)
{

	*pPre = (xFS * PesetCursorMappingTable[*pPreset][1])/24;
	*pPost = (xFS * PesetCursorMappingTable[*pPreset][2])/24;
	*pCur = xFS - *pPre- *pPost ;
//	if(xFS == 63){   //Remove -20180813
//		*pPre += 1;
//		*pPost += 1;
//		*pCur -= 2;
//	}	
}

#if 0
void
Eye_Delay(unsigned short RegReadCount,unsigned char ScanTime)
{
	// TODO: need to use Internal Timer to do..
	unsigned short i;
	for(i = 0; i< 100; i++)
		_nop_(); //100-200ns

}
#endif


void
Eye_WaitEyeScanDone(void)
{
	unsigned short LMillisecond = Millisecond;

	//case 1: millisecond not encounter 1000->0
	//csee 2: millisecond encounter 1000->0
	while(!(EYE_SCAN_DONE&BIT6)){

		if((Millisecond >= (LMillisecond+6))||((Millisecond<LMillisecond)&&(Millisecond>=5))){
#if DBG1200
			ERR_DEBUG_1200[1][0] = 1;
#endif
			break; //error - wait eye scan done timeout  - over 5ms	
		}		
	}
	EYE_SCAN_DONE |= BIT6;  //clear the EYE SCAN DONE bit

}


//
//@param: 
//		WidthonWhichLine : the line to be calculated (eye width)    0.1.2.3.4....
//		Xstart: 
//		Xend:
//		YLength: Y2-Y1+1 , can be 1,2,3,4..... , but CAN NOT be 0
//
unsigned short
Eye_GetEyeWidth(
	unsigned char WidthonWhichLine,
	unsigned char Xstart,
	unsigned char Xend,
	unsigned char YLength
)
{

	unsigned char mask = 0;
	unsigned char tempx = 0;
	unsigned short PointID = 0;  //0.1.2.3.4....
	unsigned short RegByte = 0;
	unsigned char LineID = 0;
	unsigned char PassPointOnThisLine = 0;  // this used to calculate the number of pass point on each line 
	unsigned char PointIdOnThisLine = 0;  //point ID for each line, when it come to a new line, this valie will be reset, point ID is : 0 1 2 3 4.... 
	unsigned char PHx_neg = 0xff, PHx_pos = 0xff;

	unsigned short RegReadCount = (((127-Xstart)+Xend)*YLength)>>3;  // (total point count )/ 8

	//
	// Wait for EyeScan Done
	//
	//Eye_Delay(RegReadCount, EyeMonInParaResult.Scan_Time);
	//Eye_WaitEyeScanDone();

	//
	// Calculate the EyeWidth for specific line(0,1,2,3....)
	//
	for(RegByte = 0; RegByte<= RegReadCount; RegByte++){
		tempx= XBYTE(MCU_PCIE_BASE + REG_OFFSET_BERVAL + RegByte);
		for(mask = 0 ; mask < 8; mask++){

			if((1<<mask)&tempx){   		//this point is a 'pass' point
				PassPointOnThisLine++;       //pass point counter ++
				if((LineID == WidthonWhichLine)&&(PassPointOnThisLine == 1)){   //found PHx_neg!!! record it
					PHx_neg = PointIdOnThisLine;
				}
				if(LineID == WidthonWhichLine){  //record every pass point into PHx_pos, flush it when a new pass point found. till the end 
					PHx_pos = PointIdOnThisLine;
				}
				
			}






			PointID++;  
			PointIdOnThisLine++;
			if(PointID%XLen == 0){
				LineID++;
				PassPointOnThisLine = 0;  //reset the LinePassCounter
				PointIdOnThisLine=0; //reset the point ID for this line
			}
	
		}
	}

	//
	// either the PHx_neg or PHx_pos NOT have a valid value, then return FF
	//
	if((PHx_neg == 0xff)||(PHx_pos == 0xff)){
#if DBG1200
		ERR_DEBUG_1200[0][1] = 0x1;
#endif		
		return 0;
	}
	return  ((PHx_pos-PHx_neg)+1);

}




#define REPEAT_LOOPS  3

unsigned short
Eye_DoEyeMonitorThenGetData(unsigned char PortNum, unsigned char LaneNum)
{
	unsigned char LastBestEyeWidth= 0;
	unsigned char EyeWidth[REPEAT_LOOPS] = 0;
	unsigned char ix;
	
	EyeMonInParaPointXY.Bits.MCU_PH_OS = EYEX1;
	EyeMonInParaPointXY.Bits.MCU_EQTNVTH =  EYEY1;
	EyeMonInParaPointXY.Bits.MCU_PH_OS_2 =  EYEX2;
	EyeMonInParaPointXY.Bits.MCU_EQTNVTH_2 =  EYEY2;

	EyeMonInParaEyeInf.Bits.EyeMonitorMethod = 2;  //by port/by lane
	EyeMonInParaEyeInf.Bits.PciePortNum = PortNum; 	//PEx   PE0

	EyeMonInParaEyeInf.Bits.EyeErrorThreshold = 0; //
	EyeMonInParaResult.Scan_Time = gEyeScanTime;   

	Lane_Num = LaneNum;
	
	//
	// loop to scan the Eye by using the same group of cursor
	//
#if DBG1300	
	EQ_DEBUG_1300[10][0] = Millisecond;
	EQ_DEBUG_1300[12][0] =Tick;
#endif	
	for(ix = 0; ix < REPEAT_LOOPS; ix++){	
		//DO Eye monitor
		Eye_Monitor_stage = 1;
		EyeMonMode1or2(&Eye_Monitor_stage);

		//wait eye scan done
		Eye_WaitEyeScanDone();
#if DBG1300	
		EQ_DEBUG_1300[10][1+ix] = Millisecond;
		EQ_DEBUG_1300[12][1+ix] =Tick;
#endif		
		//Get Eye width
		EyeWidth[ix] = Eye_GetEyeWidth(0,EyeMonInParaPointXY.Bits.MCU_PH_OS,
							EyeMonInParaPointXY.Bits.MCU_PH_OS_2,
							EyeMonInParaPointXY.Bits.MCU_EQTNVTH_2-EyeMonInParaPointXY.Bits.MCU_EQTNVTH+1);
#if DBG1300	
		EQ_DEBUG_1300[11][1+ix] = Millisecond;
		EQ_DEBUG_1300[13][1+ix] =Tick;
#endif		
		if(EyeWidth[ix] == 0){
#if DBG1200
			ERR_DEBUG_1200[0][0] = 0x1;
#endif
			return 0;
		}
	}
#if DBG1300	
	EQ_DEBUG_1300[10][1+REPEAT_LOOPS] = Millisecond;
	EQ_DEBUG_1300[12][1+REPEAT_LOOPS] =Tick;
#endif

	//
	//loop to calculate the average value of those scan reslut
	//
	for(ix = 1; ix < REPEAT_LOOPS; ix++){	
		EyeWidth[0] += EyeWidth[ix];
	}
	EyeWidth[0] = EyeWidth[0]/REPEAT_LOOPS;


	return EyeWidth[0];
}


void
Eye_DecideCursorAdjustStep(
	SAVE_LANE_PARAM *PEx_SAVE
)
{
/* Remove -20180813 - this method not improve the EMEQ tuning result
	if(PEx_SAVE[0].FS <= 24){
		CursorAdjustStep = 1;
	}else if(PEx_SAVE[0].FS <= 48){
		CursorAdjustStep = 2;
	}else if(PEx_SAVE[0].FS <63){
		CursorAdjustStep = 3;
	}else if(PEx_SAVE[0].FS == 63){
		CursorAdjustStep = 4;
	}else{
		CursorAdjustStep = 1;
	}
*/
	if(PEx_SAVE[0].FS <= 24){
		CursorAdjustStep = 1;
	}else if(PEx_SAVE[0].FS <= 48){
		CursorAdjustStep = 2;
	}else if(PEx_SAVE[0].FS <= 63){
		CursorAdjustStep = 3;
	}else{
		CursorAdjustStep = 1;
	}

	return;
}


//
//C-1 : PreCursor
//C+1:  PostCusor
//
//@Param:
//		Pre: [Input/Output]  pre-cursor
//		Cur: [Input/Output]  cursor
//		Post: [Input/Output] post-cursor
//		AdjustType: [Input] adjust type, can be 
//				ADJUST_TYPE_PRE_DOWN
//				ADJUST_TYPE_PRE_UP
//				ADJUST_TYPE_POST_DOWN 
//				ADJUST_TYPE_POST_UP 
//
void 
Eye_CursorAdjust(
	unsigned char *Pre, 
	unsigned char *Cur, 
	unsigned char *Post,
	unsigned char AdjustType)
{
	unsigned char *pPre = Pre;
	unsigned char *pCur = Cur; 
	unsigned char *pPost = Post;

//	pPre = Pre;
//	pCur = Cur;
//	pPost = Post;
	switch(AdjustType){
		case ADJUST_TYPE_PRE_DOWN:
			(*pPre)-=CursorAdjustStep;
			(*pCur)+=CursorAdjustStep;
			break;
		case ADJUST_TYPE_PRE_UP:
			(*pPre)+=CursorAdjustStep;
			(*pCur)-=CursorAdjustStep;			
			break;
		case ADJUST_TYPE_POST_DOWN:
			(*pPost)-=CursorAdjustStep;
			(*pCur)+=CursorAdjustStep;
			break;
		case ADJUST_TYPE_POST_UP:
			(*pPost)+=CursorAdjustStep;
			(*pCur)-=CursorAdjustStep;
			break;
		default:
			break;
	}

	return;
}



#if 0
	
unsigned short
Eye_GetEyeWidthAverage()
{




}
#endif	

void
Eye_LoopToConfirmFarendParam(	
	UCHAR *PEx_config, 
	SAVE_LANE_PARAM *PEx_SAVE)
{
	Read_default_TxRxParam(PEx_config, PEx_SAVE); 

	//check the value of lane 0
	//we assume the Lane0 represent all other lanes on this port
	FAREND_EQ_PreCursor = PEx_SAVE[0].PRE_CURSOR;
	FAREND_EQ_Cursor = PEx_SAVE[0].CURSOR;
	FAREND_EQ_PostCursor = PEx_SAVE[0].POST_CURSOR;

}


void 
Eye_PEx_GetBestParam(
	UCHAR PEx, 
	UCHAR *PEx_config, 
	SAVE_LANE_PARAM *PEx_SAVE
)
{
			unsigned short i = 0;
			unsigned char PortNum = 0xFF;
			unsigned short CurrentEyeWidth = 0;
#if DBG1400
			unsigned char Cid = 2;
			unsigned char  LStart = 5;
#endif
			switch(PEx){
				case PE0_P0: PortNum = 0; break;
				case PE1_P1: PortNum = 1; break;
				case PE2_P2: PortNum = 2; break;
				case PE3_P3: PortNum = 3; break;
				case PE4_P4: PortNum = 4; break;
				case PE5_P5: PortNum = 5; break;
				case PE6_P6: PortNum = 6; break;
				case PE7_P7: PortNum = 7; break;
				default:
				 break;
			}
			//
			// Save Original Preset Value(this is Preset in EQTS2 ) 
			//
			Read_default_TxRxParam(PEx_config, PEx_SAVE);  //get FS and Current EP Tx Preset
#if DBG1400
			EM_DEBUG_1400[PortNum][0][0] = PEx_SAVE[0].FS;
			EM_DEBUG_1400[PortNum][0][1] = PEx_SAVE[0].LF;
			EM_DEBUG_1400[PortNum][0][2] = PEx_SAVE[0].TX_PRESET;
			EM_DEBUG_1400[PortNum][0][3] = PEx_SAVE[0].PRE_CURSOR;
			EM_DEBUG_1400[PortNum][0][4] = PEx_SAVE[0].CURSOR;
			EM_DEBUG_1400[PortNum][0][5] = PEx_SAVE[0].POST_CURSOR;
#endif

#if 0  //  20181107 update code:  get cursor directly
			for(i = 0; i<PEx_config[0];i++){		
				BestPresetEw[i].xPreset = PEx_SAVE[i].TX_PRESET;
				BestPresetEw[i].xEyeWidth = Eye_DoEyeMonitorThenGetData(PortNum, i);  //record the Original EyeWidth
				
#if L0STD
				break;		
#endif	

			}
#if DBG1400
			EM_DEBUG_1400[PortNum][1][0] = BestPresetEw[0].xEyeWidth;
#endif
			//
			// Get the Cursor Group coresponding to Original Preset
			// Special Note: assume the Preset on Lane0 same with others 
			Eye_PresetTranstoCursor(EQ_FS, &(BestPresetEw[0].xPreset), &EQ_Pre_Cursor, &EQ_Cursor, &EQ_Post_Cursor); 
			


			//
			// Adjust Cursor and Save the EyeWidth of Original Cursor Value
			// All lanes use the same Cursor Group
			//
			Set_Cursor_Param(PEx, PEx_config);	 //use the Cursor  to get eye scan result
    			
			WAIT_DONE();
#if DBG1200
			if(i == 100){
				ERR_DEBUG_1200[0][2] = 0x1;
			}
#endif

			//>> Get EyeWidth
			for(i = 0; i<PEx_config[0];i++){
				BestCursorEw[i].xEyeWidth = Eye_DoEyeMonitorThenGetData(PortNum, i);
				BestCursorEw[i].xPreCursor = EQ_Pre_Cursor;
				BestCursorEw[i].xCursor = EQ_Cursor;
				BestCursorEw[i].xPostCursor = EQ_Post_Cursor;
#if DBG1400
				EM_DEBUG_1400[PortNum][1][LStart+i] = BestCursorEw[i].xEyeWidth;
#endif		
#if L0STD
				break;		
#endif	
			}
#else
			for(i = 0; i<PEx_config[0];i++){	
				EQ_Cursor = PEx_SAVE[i].CURSOR;
				EQ_Pre_Cursor = PEx_SAVE[i].PRE_CURSOR;
				EQ_Post_Cursor = PEx_SAVE[i].POST_CURSOR;				
#if L0STD
				break;		
#endif	
			}

			//>> Get EyeWidth
			for(i = 0; i<PEx_config[0];i++){
				BestCursorEw[i].xEyeWidth = Eye_DoEyeMonitorThenGetData(PortNum, i);
				BestCursorEw[i].xPreCursor = EQ_Pre_Cursor;
				BestCursorEw[i].xCursor = EQ_Cursor;
				BestCursorEw[i].xPostCursor = EQ_Post_Cursor;
#if DBG1400
				EM_DEBUG_1400[PortNum][1][LStart+i] = BestCursorEw[i].xEyeWidth;
#endif		
#if L0STD
				break;		
#endif	
			}

#endif


			
#if DBG1400
			EM_DEBUG_1400[PortNum][1][1] = EQ_Pre_Cursor;
			EM_DEBUG_1400[PortNum][1][2] = EQ_Cursor;
			EM_DEBUG_1400[PortNum][1][3] = EQ_Post_Cursor;
#endif			

			//
			//decide the cursor adjust step &  begain to adjust 
			//
			Eye_DecideCursorAdjustStep(PEx_SAVE);  
			AdjustStage = PreCursorDown;
			/********************************************************************************/
			//
			// if(eye become smaller)||(PreCursor = 0)
			//  	then exit
			//
			while(1){
				
				if(AdjustStage!=PreCursorDown){
					//now we just use parameter of lane0 to continue 
					EQ_Pre_Cursor = BestCursorEw[0].xPreCursor;
					EQ_Cursor = BestCursorEw[0].xCursor;
					EQ_Post_Cursor = BestCursorEw[0].xPostCursor;
					break;
				}				
				//
				// First, adjust the PreCusor
				//
				if(EQ_Pre_Cursor >= CursorAdjustStep){
					Eye_CursorAdjust(&EQ_Pre_Cursor, &EQ_Cursor, &EQ_Post_Cursor, ADJUST_TYPE_PRE_DOWN);

				
					Set_Cursor_Param(PEx, PEx_config);	 //use the Cursor  to get eye scan result
					WAIT_DONE();
#if DBG1200
					if(i == 100){
						ERR_DEBUG_1200[0][3] = 0x1;
					}
#endif
					for(i = 0; i<PEx_config[0];i++){
						CurrentEyeWidth = Eye_DoEyeMonitorThenGetData(PortNum, i);
#if DBG1400
						if(Cid<DBG_BUFF_LINES){ //show eye width for each lanes
							EM_DEBUG_1400[PortNum][Cid][LStart+i] = CurrentEyeWidth;
						}
						if((Cid<DBG_BUFF_LINES)&&(i==0)){   //only show Cursor Once(on first round)
							EM_DEBUG_1400[PortNum][Cid][1] = EQ_Pre_Cursor;
							EM_DEBUG_1400[PortNum][Cid][2] = EQ_Cursor;
							EM_DEBUG_1400[PortNum][Cid][3] = EQ_Post_Cursor;
						}
						if(i==(PEx_config[0]-1)){ //change the debug message line to next line(on the last round)
							Cid++;  
						}
						
#endif
						
						if(BestCursorEw[i].xEyeWidth <= CurrentEyeWidth){
							BestCursorEw[i].xEyeWidth = CurrentEyeWidth;
							BestCursorEw[i].xPreCursor = EQ_Pre_Cursor;
							BestCursorEw[i].xCursor = EQ_Cursor;
							BestCursorEw[i].xPostCursor = EQ_Post_Cursor;			
						}else{
							// TODO: flow update 1
							AdjustStage = PreCursorUp;
						}
							
						if(CurrentEyeWidth >= EWth){   // TODO:  if only one lane EW >=40, then stop and go ahead
							AdjustStage = Summary;
						}	
#if L0STD
#if DBG1400
						if(PEx_config[0]!=1){  //if this port was a multi-lane port, then we need to supplement a extra Cid for debug
							Cid++; 
						}
#endif
						break;		
#endif								
					}
		
				}else{
					AdjustStage = PreCursorUp;
						
				}
					
			}


			/********************************************************************************/
			while(1){
				if(AdjustStage!=PreCursorUp){
					//now we just use parameter of lane0 to continue 
					EQ_Pre_Cursor = BestCursorEw[0].xPreCursor;
					EQ_Cursor = BestCursorEw[0].xCursor;
					EQ_Post_Cursor = BestCursorEw[0].xPostCursor;
					break;
				}
				//
				// First, adjust the PreCusor
				//
				if(EQ_Pre_Cursor <= (EQ_Cursor-EQ_Post_Cursor-PEx_SAVE[0].LF)){
					Eye_CursorAdjust(&EQ_Pre_Cursor, &EQ_Cursor, &EQ_Post_Cursor, ADJUST_TYPE_PRE_UP);

				
					Set_Cursor_Param(PEx, PEx_config);	 //use the Cursor  to get eye scan result
					WAIT_DONE();
#if DBG1200
					if(i == 100){
						ERR_DEBUG_1200[0][4] = 0x1;
					}
#endif
					for(i = 0; i<PEx_config[0];i++){
						CurrentEyeWidth = Eye_DoEyeMonitorThenGetData(PortNum, i);
#if DBG1400
						if(Cid<DBG_BUFF_LINES){
							EM_DEBUG_1400[PortNum][Cid][LStart+i] = CurrentEyeWidth;
						}
						if((Cid<DBG_BUFF_LINES)&&(i==0)){
							EM_DEBUG_1400[PortNum][Cid][1] = EQ_Pre_Cursor;
							EM_DEBUG_1400[PortNum][Cid][2] = EQ_Cursor;
							EM_DEBUG_1400[PortNum][Cid][3] = EQ_Post_Cursor;
						}
						if(i==(PEx_config[0]-1)){
							Cid++;
						}
						
#endif
						if(BestCursorEw[i].xEyeWidth < CurrentEyeWidth){
							BestCursorEw[i].xEyeWidth = CurrentEyeWidth;
							BestCursorEw[i].xPreCursor = EQ_Pre_Cursor;
							BestCursorEw[i].xCursor = EQ_Cursor;
							BestCursorEw[i].xPostCursor = EQ_Post_Cursor;	
								
						}else{
							// TODO: flow update 1
							AdjustStage = PostCursorDown;
						}
							
						if(CurrentEyeWidth >= EWth){
							AdjustStage = Summary;
						}	
#if L0STD
#if DBG1400
						if(PEx_config[0]!=1){  //if this port was a multi-lane port, then we need to supplement a extra Cid for debug
							Cid++; 
						}
#endif
						break;		
#endif								
					}
	
				}else{
					AdjustStage = PostCursorDown;
				}
			}

			/********************************************************************************/
			while(1){
				if(AdjustStage!=PostCursorDown){
					//now we just use parameter of lane0 to continue 
					EQ_Pre_Cursor = BestCursorEw[0].xPreCursor;
					EQ_Cursor = BestCursorEw[0].xCursor;
					EQ_Post_Cursor = BestCursorEw[0].xPostCursor;
					break;
				}
				//
				// First, adjust the PreCusor
				//
				if(EQ_Post_Cursor >= CursorAdjustStep){
					Eye_CursorAdjust(&EQ_Pre_Cursor, &EQ_Cursor, &EQ_Post_Cursor, ADJUST_TYPE_POST_DOWN);

				
					Set_Cursor_Param(PEx, PEx_config);	 //use the Cursor  to get eye scan result
					WAIT_DONE();
#if DBG1200
					if(i == 100){
						ERR_DEBUG_1200[0][5] = 0x1;
					}
#endif
					for(i = 0; i<PEx_config[0];i++){
						CurrentEyeWidth = Eye_DoEyeMonitorThenGetData(PortNum, i);
#if DBG1400
						if(Cid<DBG_BUFF_LINES){
							EM_DEBUG_1400[PortNum][Cid][LStart+i] = CurrentEyeWidth;
						}
						if((Cid<DBG_BUFF_LINES)&&(i==0)){
							EM_DEBUG_1400[PortNum][Cid][1] = EQ_Pre_Cursor;
							EM_DEBUG_1400[PortNum][Cid][2] = EQ_Cursor;
							EM_DEBUG_1400[PortNum][Cid][3] = EQ_Post_Cursor;
						}
						if(i==(PEx_config[0]-1)){
							Cid++;
						}
						
#endif
						if(BestCursorEw[i].xEyeWidth <= CurrentEyeWidth){
							BestCursorEw[i].xEyeWidth = CurrentEyeWidth;
							BestCursorEw[i].xPreCursor = EQ_Pre_Cursor;
							BestCursorEw[i].xCursor = EQ_Cursor;
							BestCursorEw[i].xPostCursor = EQ_Post_Cursor;	
								
						}else{
							// TODO: flow update 1
							AdjustStage = PostCursorUp;
						}
							
						if(CurrentEyeWidth >= EWth){
							AdjustStage = Summary;
						}	
#if L0STD
#if DBG1400
						if(PEx_config[0]!=1){  //if this port was a multi-lane port, then we need to supplement a extra Cid for debug
							Cid++; 
						}
#endif
						break;		
#endif								
					}
	
				}else{
					AdjustStage = PostCursorUp;
				}
			}

			/********************************************************************************/
			while(1){
				if(AdjustStage!=PostCursorUp){
					//now we just use parameter of lane0 to continue 
					EQ_Pre_Cursor = BestCursorEw[0].xPreCursor;
					EQ_Cursor = BestCursorEw[0].xCursor;
					EQ_Post_Cursor = BestCursorEw[0].xPostCursor;
					break;
				}
				//
				// First, adjust the PreCusor
				//
				if(EQ_Post_Cursor <= (EQ_Cursor-EQ_Pre_Cursor-PEx_SAVE[0].LF)){
					Eye_CursorAdjust(&EQ_Pre_Cursor, &EQ_Cursor, &EQ_Post_Cursor, ADJUST_TYPE_POST_UP);

				
					Set_Cursor_Param(PEx, PEx_config);	 //use the Cursor  to get eye scan result
					WAIT_DONE();
#if DBG1200
					if(i == 100){
						ERR_DEBUG_1200[0][6] = 0x1;
					}
#endif
					for(i = 0; i<PEx_config[0];i++){
						CurrentEyeWidth = Eye_DoEyeMonitorThenGetData(PortNum, i);
#if DBG1400
						if(Cid<DBG_BUFF_LINES){
							EM_DEBUG_1400[PortNum][Cid][LStart+i] = CurrentEyeWidth;
						}
						if((Cid<DBG_BUFF_LINES)&&(i==0)){
							EM_DEBUG_1400[PortNum][Cid][1] = EQ_Pre_Cursor;
							EM_DEBUG_1400[PortNum][Cid][2] = EQ_Cursor;
							EM_DEBUG_1400[PortNum][Cid][3] = EQ_Post_Cursor;
						}
						if(i==(PEx_config[0]-1)){
							Cid++;
						}
#endif
						if(BestCursorEw[i].xEyeWidth < CurrentEyeWidth){  
							BestCursorEw[i].xEyeWidth = CurrentEyeWidth;
							BestCursorEw[i].xPreCursor = EQ_Pre_Cursor;
							BestCursorEw[i].xCursor = EQ_Cursor;
							BestCursorEw[i].xPostCursor = EQ_Post_Cursor;	
								
						}else{
							// TODO: flow update 1
							AdjustStage = Summary;
						}
							
						if(CurrentEyeWidth >= EWth){
							AdjustStage = Summary;
						}	
#if L0STD
#if DBG1400
						if(PEx_config[0]!=1){  //if this port was a multi-lane port, then we need to supplement a extra Cid for debug
							Cid++; 
						}
#endif
						break;		
#endif								
					}
	
				}else{
					AdjustStage = Summary;
				}
			}


#if DBG1400
			i= 0;  //just show the param of lane 0
			if(Cid<DBG_BUFF_LINES){
				EM_DEBUG_1400[PortNum][Cid][0] = 0xA5;
				EM_DEBUG_1400[PortNum][Cid][1] = BestCursorEw[i].xPreCursor;
				EM_DEBUG_1400[PortNum][Cid][2] = BestCursorEw[i].xCursor;
				EM_DEBUG_1400[PortNum][Cid][3] = BestCursorEw[i].xPostCursor;
				EM_DEBUG_1400[PortNum][Cid][LStart+i] = BestCursorEw[i].xEyeWidth;
				Cid++;
			}
#endif				
			//
			// summary
			//
#if L0STD   //all other lanes will use the parameter of lane0
			for (i = 1; i < PEx_config[0]; i++){
				BestCursorEw[i].xPreCursor 	= BestCursorEw[0].xPreCursor;
				BestCursorEw[i].xCursor 	= BestCursorEw[0].xCursor;
				BestCursorEw[i].xPostCursor = BestCursorEw[0].xPostCursor;
			}
#endif
			Set_Cursor_Param2(PEx, PEx_config);
		

			EQ_Done(PEx);

}
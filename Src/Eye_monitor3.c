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
#include "Header/Eye_monitor3.h"
#include "stdio.h"


#if DEBUG_TRACE 
volatile unsigned char xdata DEBUG_RXEQ_INTER_2100[16][16] _at_ 0x2100;
#endif

#if DEBUG_DATA1 
volatile unsigned char xdata DEBUG_RXEQ_INTER_2200[16][16] _at_ 0x2200;
#endif

#if DEBUG_DATA2 
volatile unsigned char xdata DEBUG_RXEQ_INTER_2300[16][16] _at_ 0x2300;	//dump some cfg setting in EPHY 
#endif

#if DEBUG_DATA3
volatile unsigned char xdata DEBUG_RXEQ_INTER_2400[16][16] _at_ 0x2400;
#endif

#if DEBUG_DATA4
volatile unsigned char xdata DEBUG_RXEQ_INTER_3000[160][16] _at_ 0x2600;
#endif







unsigned int EPHY_Block[] = {
	0x200,
	0x280,
	0x300,
	0x380,
	0x400,
	0x480,
	0x500,
	0x580,
	0x600,
	0x680,
	0x700,
	0x780,
	0x800,
	0x880,
	0x3000,
	0x3080
};

unsigned int EPHY_Out[] = {
	0xA00,
	0xA10,
	0xA20,
	0xA30,
	0xA40,
	0xA50,
	0xA60,
	0xA70,
	0xA80,
	0xA90,
	0xAA0,
	0xAB0,
	0xAC0,
	0xAD0,
	0xAE0,
	0xAF0
};




// TODO:  need to check the LinkWidth built by this port
void
RxAutoEQ_Ctrl(	UCHAR PEx, 
	UCHAR *PEx_config, 
	SAVE_LANE_PARAM *PEx_SAVE)
{
	unsigned char temp8;
	unsigned char i;
	unsigned char flag;
	unsigned char rank;

	unsigned char result1;
	unsigned char result2;
	unsigned char result3;
	unsigned char result4;

	unsigned char LaneNumx;

	unsigned short xEW;

	unsigned char PortNum = 0xFF;

	//unsigned short FS;
	//unsigned char Pre, Cur, Post,Presetx;

	unsigned char kloop = 0;
	
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







	
//1 Step1 : RP DOEQ	
	//LPn_EQTNVTH<4:0> =10001h   (lane2-352[4:0])
	for(i=1; i<=PEx_config[0];i++){
		temp8 = XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_LPn_EQTNVTH);	//EPHY 'LANE PEx_config[1]' is the lane0 for this port
		XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_LPn_EQTNVTH) 
			= REGSET(temp8,OFFSET_LPn_EQTNVTH_BITS,OFFSET_LPn_EQTNVTH_BITE,0x11);  

		//
		//XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_LPn_EQTNVTH) = 0x5A;
	}
	
	//LPn_RCV_HBW<2:0>=100b    (lane2-348[4:2])
	for(i=1; i<=PEx_config[0];i++){
		temp8 = XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_LPn_RCV_HBW);	
		XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_LPn_RCV_HBW) 
			= REGSET(temp8,OFFSET_LPn_RCV_HBW_BITS,OFFSET_LPn_RCV_HBW_BITE,0x4); 

	}

	//FHPn_CDR_UGB_HBW=1b   (lane2-301[2])
	for(i=1; i<=PEx_config[0];i++){
		temp8 = XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_FHPn_CDR_UGB_HBW);	
		XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_FHPn_CDR_UGB_HBW) 
			= REGSET(temp8,OFFSET_FHPn_CDR_UGB_HBW_BITS,OFFSET_FHPn_CDR_UGB_HBW_BITE,0x1); 

	}



	//LPn_KIPRSEL<1:0>=10b  (lane2-34C[3:2])
	for(i=1; i<=PEx_config[0];i++){
		temp8 = XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_LPn_KIPRSEL);	
		XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_LPn_KIPRSEL) 
			= REGSET(temp8,OFFSET_LPn_KIPRSEL_BITS,OFFSET_LPn_KIPRSEL_BITE,0x2); 

	}

	//LPn_KIPCSEL<1:0>=01b  (lane2-34C[7:6])
	for(i=1; i<=PEx_config[0];i++){
		temp8 = XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_LPn_KIPCSEL);	
		XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_LPn_KIPCSEL) 
			= REGSET(temp8,OFFSET_LPn_KIPCSEL_BITS,OFFSET_LPn_KIPCSEL_BITE,0x1); 

	}

	//FHPn_CKBUFSEL_CDR=10b    (lane2-340[5:4])
	for(i=1; i<=PEx_config[0];i++){
		temp8 = XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_FHPn_CKBUFSEL_CDR);	
		XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_FHPn_CKBUFSEL_CDR) 
			= REGSET(temp8,OFFSET_FHPn_CKBUFSEL_CDR_BITS,OFFSET_FHPn_CKBUFSEL_CDR_BITE,0x2); 

	}

	//LPn_EQTNMODE<6>=b1
	//LPn_EQTNMODE<5>=b1   (lane2-34E[6:5])
	for(i=1; i<=PEx_config[0];i++){
		temp8 = XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_LPn_EQTNMODE);	
		XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_LPn_EQTNMODE) 
			= REGSET(temp8,5,6,0x3); 

	}

	//FHPn_ABCSEL_CDR<1:0>=00b (lane2-340[3:2])
	for(i=1; i<=PEx_config[0];i++){
		temp8 = XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_FHPn_ABCSEL_CDR);	
		XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_FHPn_ABCSEL_CDR) 
			= REGSET(temp8,OFFSET_FHPn_ABCSEL_CDR_BITS,OFFSET_FHPn_ABCSEL_CDR_BITE,0x0); 

	}
#if 0
	//LPn_EQTNDFE<1:0>=00b    (lane2-351[5:4])
	for(i=1; i<=PEx_config[0];i++){
		temp8 = XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_FRP00_EQTNDFE_G3);	
		XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_FRP00_EQTNDFE_G3) 
			= REGSET(temp8,OFFSET_FRP00_EQTNDFE_G3_BITS,OFFSET_FRP00_EQTNDFE_G3_BITE,0x0); 
	}
#endif


	//LPn_DC/HF/W1/W2SETEN=0    (lane2-353/354/356/357[7])
	for(i=1; i<=PEx_config[0];i++){
		temp8 = XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_LPn_DCSETEN);	
		XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_LPn_DCSETEN) 
			= REGSET(temp8,OFFSET_LPn_DCSETEN_BITS,OFFSET_LPn_DCSETEN_BITE,0); 

		

		temp8 = XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_LPn_HFSETEN);	
		XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_LPn_HFSETEN) 
			= REGSET(temp8,OFFSET_LPn_HFSETEN_BITS,OFFSET_LPn_HFSETEN_BITE,0);


		//temp8 = XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_LPn_OSSETEN);	
		//XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_LPn_OSSETEN) 
			//= REGSET(temp8,OFFSET_LPn_OSSETEN_BITS,OFFSET_LPn_OSSETEN_BITE,0); 


		temp8 = XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_LPn_W1SETEN);	
		XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_LPn_W1SETEN) 
			= REGSET(temp8,OFFSET_LPn_W1SETEN_BITS,OFFSET_LPn_W1SETEN_BITE,0);


		temp8 = XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_LPn_W2SETEN);	
		XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_LPn_W2SETEN) 
			= REGSET(temp8,OFFSET_LPn_W2SETEN_BITS,OFFSET_LPn_W2SETEN_BITE,0);

	}		



#if 0
	for(i=1; i<=PEx_config[0];i++){
		for (j = 0; j < 10; j++);	//1.07us
		temp8 = XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_LPn_EQTNVTH);
#if DEBUG_DATA2
		DEBUG_RXEQ_INTER_2300[PEx_config[i]][0] = temp8;
#endif
		//XBYTE(0xB000) = 0xBB;
		//XBYTE(0xB000) = temp8;


		//XBYTE(0xB000) = 0xAA;
		//XBYTE(0xC352) =  0xAA;
		//temp8 = XBYTE(0xC352);
		//XBYTE(0xB000) = temp8;

			
		for (j = 0; j < 10; j++);	//1.07us
		temp8 = XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_LPn_RCV_HBW);	
#if DEBUG_DATA2
		DEBUG_RXEQ_INTER_2300[PEx_config[i]][1] = temp8;	
#endif
		XBYTE(0xB000) = 0xCC;
		XBYTE(0xB000) = temp8;



		for (j = 0; j < 10; j++);	//1.07us
		temp8 = XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_FHPn_CKBUFSEL_CDR);	
#if DEBUG_DATA2
		DEBUG_RXEQ_INTER_2300[PEx_config[i]][2] = temp8;	
#endif	
		XBYTE(0xB000) = 0xDD;
		XBYTE(0xB000) = temp8;
		
		for (j = 0; j < 10; j++);	//1.07us
		temp8 = XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_LPn_EQTNMODE); 
#if DEBUG_DATA2
		DEBUG_RXEQ_INTER_2300[PEx_config[i]][3] = temp8;	
#endif	

		for (j = 0; j < 10; j++);	//1.07us
		temp8 = XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_LPn_DCSETEN);
#if DEBUG_DATA2
		DEBUG_RXEQ_INTER_2300[PEx_config[i]][4] = temp8;	
#endif	

		for (j = 0; j < 10; j++);	//1.07us
		temp8 = XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_LPn_HFSETEN);	
#if DEBUG_DATA2
		DEBUG_RXEQ_INTER_2300[PEx_config[i]][5] = temp8;	
#endif	

		for (j = 0; j < 10; j++);	//1.07us
		temp8 = XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_LPn_OSSETEN);
#if DEBUG_DATA2
		DEBUG_RXEQ_INTER_2300[PEx_config[i]][6] = temp8;	
#endif	


		for (j = 0; j < 10; j++);	//1.07us
		temp8 = XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_LPn_W1SETEN);	
#if DEBUG_DATA2
		DEBUG_RXEQ_INTER_2300[PEx_config[i]][7] = temp8;	
#endif	

		for (j = 0; j < 10; j++);	//1.07us
		temp8 = XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_LPn_W2SETEN);
#if DEBUG_DATA2
		DEBUG_RXEQ_INTER_2300[PEx_config[i]][8] = temp8;	
#endif		
	}
#endif
	// TODO: enable AutoEQ
	Rx_DoEQ(PEx);

//2 Step2
	LaneNumx = 0;
	for(i=1; i<=PEx_config[0];i++){
#if FOR_LA_TRIGGER		
		XBYTE(0xB000) = PEx_config[i];
#endif

#if DEBUG_TRACE
		DEBUG_RXEQ_INTER_2100[PEx_config[i]][0] = 1;

		//dump DC/HF/OS/W1/W2out/value After RxEQ
		flag = 0;
		rank = PEx_config[i];
		 DEBUG_OUT_VAL(rank, flag);

#endif
		//2  2.1
		//read HFOUT
		result1 = XBYTE(MCU_PCIE_BASE+EPHY_Out[PEx_config[i]]+OFFSET_Epn_HFOUT);	
		result2 = GETVAL(result1,OFFSET_Epn_HFOUT_BITS,OFFSET_Epn_HFOUT_BITE);
#if DEBUG_DATA2
				DEBUG_RXEQ_INTER_2300[PEx_config[i]][9] = result2;	
#endif

		if(result2 == 0){
#if DEBUG_TRACE
					DEBUG_RXEQ_INTER_2100[PEx_config[i]][1] = 1;
#endif

			//2.1.1 set P4 and Rx DOEQ
			Try_Preset_Value_and_DoRxEQ(PEx,4,PEx_config); 
		
			//2.1.1.1 whether HFOUT still be 0
			result1 = XBYTE(MCU_PCIE_BASE+EPHY_Out[PEx_config[i]]+OFFSET_Epn_HFOUT);	
			result2 = GETVAL(result1,OFFSET_Epn_HFOUT_BITS,OFFSET_Epn_HFOUT_BITE);
#if DEBUG_DATA2
					DEBUG_RXEQ_INTER_2300[PEx_config[i]][0xA] = result2;	

					//dump DC/HF/OS/W1/W2out/value After RxEQ
					flag = 1;
					rank = PEx_config[i];
 					DEBUG_OUT_VAL(rank, flag);

#endif

			//read W1OUT
			result3 = XBYTE(MCU_PCIE_BASE+EPHY_Out[PEx_config[i]]+OFFSET_Epn_W1OUT);
			result4 = GETVAL(result3,OFFSET_Epn_W1OUT_BITS,OFFSET_Epn_W1OUT_BITE);
#if DEBUG_DATA2
			DEBUG_RXEQ_INTER_2300[PEx_config[i]][0xB] = result2; 
#endif

			//2.1.1.1.1HFOUT==0 && W1OUT<=A
			if(result2 == 0 && result4 <= 0xA){
#if DEBUG_TRACE
						DEBUG_RXEQ_INTER_2100[PEx_config[i]][2] = 1;
#endif

				goto _Flag_2_3;
#if 0				
				// 2.1.1.1.1 change  LPn_RCV_HBW<2:0>=100b, Enable Auto EQ;   
				/*temp8 = XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_LPn_RCV_HBW); 
				XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_LPn_RCV_HBW) 
					= REGSET(temp8,OFFSET_LPn_RCV_HBW_BITS,OFFSET_LPn_RCV_HBW_BITE,4); 
		
				Rx_DoEQ(PEx);
						
				result1 = XBYTE(MCU_PCIE_BASE+EPHY_Out[PEx_config[i]]+OFFSET_Epn_HFOUT);	
				result2 = GETVAL(result1,OFFSET_Epn_HFOUT_BITS,OFFSET_Epn_HFOUT_BITE);
#if DEBUG_DATA2
				DEBUG_RXEQ_INTER_2300[PEx_config[i]][0xB] = result2; 
#endif

				if(result2 == 0){
#if DEBUG_TRACE
							DEBUG_RXEQ_INTER_2100[PEx_config[i]][3] = 1;
#endif

					//2.1.1.1.1.1 no matter HFOUT is o OR not, goto 2.3!
					goto _Flag_2_3;
				}*/
#endif
			}
		
			//2.1.1.1.2HFOUT==0 && W1OUT>A
			else 
			{
#if DEBUG_TRACE
				DEBUG_RXEQ_INTER_2100[PEx_config[i]][3] = 1;
#endif

				//set P8 and Rx DOEQ
				Try_Preset_Value_and_DoRxEQ(PEx,8,PEx_config);


				//dump DC/HF/OS/W1/W2out/value After RxEQ
				flag = 2;
				rank = PEx_config[i];
		 		DEBUG_OUT_VAL(rank, flag);
		
				goto _Flag_2_3;
			}
		
			//
					
		}


		//2 2.2
#if DEBUG_TRACE
		DEBUG_RXEQ_INTER_2100[PEx_config[i]][4] = 1;
#endif

		result1 = XBYTE(MCU_PCIE_BASE+EPHY_Out[PEx_config[i]]+OFFSET_Epn_HFOUT);
		result2 = GETVAL(result1,OFFSET_Epn_HFOUT_BITS,OFFSET_Epn_HFOUT_BITE);
#if DEBUG_DATA2
				DEBUG_RXEQ_INTER_2300[PEx_config[i]][0xC] = result2;	
#endif

		//Epn_HFOUT>=E ?
		if((result2>=0xE)){
#if DEBUG_TRACE
			DEBUG_RXEQ_INTER_2100[PEx_config[i]][5] = 1;
#endif


			temp8 = XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_LPn_RCV_HBW); 
			XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_LPn_RCV_HBW) 
								= REGSET(temp8,OFFSET_LPn_RCV_HBW_BITS,OFFSET_LPn_RCV_HBW_BITE,0x5); 
							
			Rx_DoEQ(PEx);

			//2.2.1.1 Epn_HFOUT>=E ?       
			result1 = XBYTE(MCU_PCIE_BASE+EPHY_Out[PEx_config[i]]+OFFSET_Epn_HFOUT);
			result2 = GETVAL(result1,OFFSET_Epn_HFOUT_BITS,OFFSET_Epn_HFOUT_BITE);
#if DEBUG_DATA2
			DEBUG_RXEQ_INTER_2300[PEx_config[i]][0xD] = result2;	
#endif

#if 0			
			//result3 = XBYTE(MCU_PCIE_BASE+EPHY_Out[PEx_config[i]]+OFFSET_Epn_W1OUT);
			//result4 = GETVAL(result3,OFFSET_Epn_W1OUT_BITS,OFFSET_Epn_W1OUT_BITE);
#if DEBUG_DATA2
			DEBUG_RXEQ_INTER_2300[PEx_config[i]][0xE] = result2;	
#endif

#endif
			//2.2.1.1 Epn_HFOUT>=E ?    
			if(result2>=0xE){
				//2.2.1.1.1 Yes: Set LPn_EQTNDFE<1:0>=10b  , LPn_RCV_HBW<2:0>=101b,  enable Auto EQ      
#if DEBUG_TRACE
				DEBUG_RXEQ_INTER_2100[PEx_config[i]][6] = 1;
#endif


				temp8 = XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_FRP00_EQTNDFE_G3);	
				XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_FRP00_EQTNDFE_G3) 
					= REGSET(temp8,OFFSET_FRP00_EQTNDFE_G3_BITS,OFFSET_FRP00_EQTNDFE_G3_BITE,0x2); 	
				
				temp8 = XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_LPn_RCV_HBW);	
				XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_LPn_RCV_HBW) 
					= REGSET(temp8,OFFSET_LPn_RCV_HBW_BITS,OFFSET_LPn_RCV_HBW_BITE,0x5); 	

				Rx_DoEQ(PEx);

				//dump DC/HF/OS/W1/W2out/value After RxEQ
				flag = 3;
				rank = PEx_config[i];
		 		DEBUG_OUT_VAL(rank, flag);


				//2.2.1.1.1  Epn_HFOUT>=E && Epn_W1OUT>A ?               
				result1 = XBYTE(MCU_PCIE_BASE+EPHY_Out[PEx_config[i]]+OFFSET_Epn_HFOUT);
				result2 = GETVAL(result1,OFFSET_Epn_HFOUT_BITS,OFFSET_Epn_HFOUT_BITE);

				result3 = XBYTE(MCU_PCIE_BASE+EPHY_Out[PEx_config[i]]+OFFSET_Epn_W1OUT);
				result4 = GETVAL(result3,OFFSET_Epn_W1OUT_BITS,OFFSET_Epn_W1OUT_BITE);
				if((result2>=0xE)&&(result4>0xA)){
					//2.2.1.1.1.1 Yes: change TX preset P7  , LPn_EQTNDFE<1:0>=10b, LPn_RCV_HBW<2:0>=101b,  enable Auto EQ                                                        
			     	//keep current TX preset P7  , LPn_EQTNDFE<1:0>=10b, LPn_RCV_HBW<2:0>=101b,  2.3       
					Try_Preset_Value_and_DoRxEQ(PEx,7,PEx_config);

					//dump DC/HF/OS/W1/W2out/value After RxEQ
					flag = 4;
					rank = PEx_config[i];
		 			DEBUG_OUT_VAL(rank, flag);
					
					temp8 = XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_FRP00_EQTNDFE_G3); 
					XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_FRP00_EQTNDFE_G3) 
						= REGSET(temp8,OFFSET_FRP00_EQTNDFE_G3_BITS,OFFSET_FRP00_EQTNDFE_G3_BITE,0x2); 
					temp8 = XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_LPn_RCV_HBW);	
					XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_LPn_RCV_HBW) 
						= REGSET(temp8,OFFSET_LPn_RCV_HBW_BITS,OFFSET_LPn_RCV_HBW_BITE,0x5); 

					goto _Flag_2_3;
					
				}else{
					goto _Flag_2_3;

				}
			
#if 0				
				//2.2.1.1.1 Yes: change C+1=7(FS=24), enable Auto EQ,    jump 2.3  
				//Presetx = 7;
				//Eye_PresetTranstoCursor(FS, &Presetx,&Pre,&Cur,&Post);
				//Pre = (FS*7)/24;
				//Post = FS-Cur-Pre ;
				//Try_Cursor_Value_and_DoRxEQ(PEx, Pre, Cur, Post,PEx_config);
				//DEBUG_RXEQ_INTER_DATA1[PEx_config[i]][5] = Pre;
				//DEBUG_RXEQ_INTER_DATA1[PEx_config[i]][6] = Cur;
				//DEBUG_RXEQ_INTER_DATA1[PEx_config[i]][7] = Post;

				
				//2.2.1 Yes:  change TX preset P7, enable Auto EQ	 
				Try_Preset_Value_and_DoRxEQ(PEx,7,PEx_config); 

				temp8 = XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_LPn_RCV_HBW); 
				XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_LPn_RCV_HBW) 
					= REGSET(temp8,OFFSET_LPn_RCV_HBW_BITS,OFFSET_LPn_RCV_HBW_BITE,0x5); 
											
				Rx_DoEQ(PEx);

				
				goto _Flag_2_3;

#endif
			}else{
				//2.2.1.1.2 No                                                                        
				//     keep current  LPn_RCV_HBW<2:0>=101b, 2.3    
				goto _Flag_2_3;	
			}
			
		}

_Flag_2_3:

#if DEBUG_TRACE
		DEBUG_RXEQ_INTER_2100[PEx_config[i]][7] = 1;
#endif


		//2  2.3 EM check
		//set FHPn_ABCSEL_CDR<1:0>=10b, check eye.
		temp8 = XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_FHPn_ABCSEL_CDR); 
		XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_FHPn_ABCSEL_CDR) 
			= REGSET(temp8,OFFSET_FHPn_ABCSEL_CDR_BITS,OFFSET_FHPn_ABCSEL_CDR_BITE,0x2); 		

#if DEBUG_TRACE
		DEBUG_RXEQ_INTER_2100[PEx_config[i]][8] = 1;
#endif

		xEW = Eye_DoEyeMonitorThenGetData(PortNum, LaneNumx);
#if DEBUG_DATA1
		DEBUG_RXEQ_INTER_2200[PEx_config[i]][8] = xEW;
#endif

		//2 2.3
		/*result1 = XBYTE(MCU_PCIE_BASE+EPHY_Out[PEx_config[i]]+OFFSET_Epn_OSOUT);
		result2 = GETVAL(result1,OFFSET_Epn_OSOUT_BITS,OFFSET_Epn_OSOUT_BITE);		
		DEBUG_RXEQ_INTER_DATA3[PEx_config[i]][0] =  result2;
		//Epn_OSOUT==0?   
		if(result2 == 0){
#if DEBUG_TRACE
		DEBUG_RXEQ_INTER_2100[PEx_config[i]][8] = 1;
#endif

			//2.3.1 Yes: Report EW,  Exit EQ;          
			xEW = Eye_DoEyeMonitorThenGetData(PortNum, LaneNumx);
			DEBUG_RXEQ_INTER_DATA1[PEx_config[i]][8] = xEW;
		}else{
#if DEBUG_TRACE
			DEBUG_RXEQ_INTER_2100[PEx_config[i]][9] = 1;
#endif

			//2.3.2 No:      OSSETEN=1，  decrease LPn_OSSET<2:0> from current Epn_OSOUT, check EW, until EW decrease or LPn_OSSET<2:0>=0;      		
			temp8 = XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_LPn_OSSETEN); 
			XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_LPn_OSSETEN) 
				= REGSET(temp8,OFFSET_LPn_OSSETEN_BITS,OFFSET_LPn_OSSETEN_BITE,1); 

			xEW = Eye_DoEyeMonitorThenGetData(PortNum, LaneNumx);
			DEBUG_RXEQ_INTER_DATA1[PEx_config[i]][9] = xEW;

			//result1 = XBYTE(MCU_PCIE_BASE+EPHY_Out[PEx_config[i]]+OFFSET_Epn_OSOUT);   //why OSOUT come to 0 after set OSSETEN=1?
			//result2 = GETVAL(result1,OFFSET_Epn_OSOUT_BITS,OFFSET_Epn_OSOUT_BITE);				

#if DEBUG_TRACE
			DEBUG_RXEQ_INTER_2100[PEx_config[i]][0xA] = 1;
#endif

			while(1){
				DEBUG_RXEQ_INTER_TRACE[PEx_config[i]][0xA] = DEBUG_RXEQ_INTER_TRACE[PEx_config[i]][0xA] + 1;
				temp8 = XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_LPn_OSSET); 
				XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_LPn_OSSET) 
					= REGSET(temp8,OFFSET_LPn_OSSET_BITS,OFFSET_LPn_OSSET_BITE,result2); 
				DEBUG_RXEQ_INTER_DATA3[PEx_config[i]][1] =  XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_LPn_OSSET); ;

				if(result2 == 0){
#if DEBUG_TRACE
					DEBUG_RXEQ_INTER_2100[PEx_config[i]][0xB] = 1;
#endif

					DEBUG_RXEQ_INTER_DATA3[PEx_config[i]][2+kloop+2] =  kloop;
					kloop = 0;
					break;
				}
				
				xEWnew = Eye_DoEyeMonitorThenGetData(PortNum, LaneNumx);
				DEBUG_RXEQ_INTER_DATA1[PEx_config[i]][0xA] = xEWnew;
				DEBUG_RXEQ_INTER_DATA3[PEx_config[i]][2+kloop] =  xEWnew;
				DEBUG_RXEQ_INTER_DATA3[PEx_config[i]][2+kloop+1] =  0xEE;
	

				
				if(xEWnew < xEW){
#if DEBUG_TRACE
					DEBUG_RXEQ_INTER_2100[PEx_config[i]][0xC] = 1;
#endif

					DEBUG_RXEQ_INTER_DATA3[PEx_config[i]][2+kloop+2] =  kloop;
					kloop = 0;
					break;
				}else{
					xEW = xEWnew;
					result2--;
				}


				if(kloop!=11){
					kloop++;
				}

			}
#if DEBUG_TRACE
			DEBUG_RXEQ_INTER_2100[PEx_config[i]][0xD] = 1;
#endif
		}
		*/
//1 Step3
		//Disable Eye-monitor:         
		//3.1 report final:  PH0_neg,PH0_pos, EW, DCout,HFout,OSout,W1out,W2out, LPn_RCV_HBW, 
#if DEBUG_TRACE
		DEBUG_RXEQ_INTER_2100[PEx_config[i]][0xE] = 1;
#endif




		//	3.1 report final:  PH0_neg,PH0_pos, EW, DCout,HFout,OSout,W1out,W2out , TX cursor										
		//* report 每一次的TX cursor以及Epn_DC/HF/OS/W1/W2out/LPn_RCV_HBW	
		
		result1 = XBYTE(MCU_PCIE_BASE+EPHY_Out[PEx_config[i]]+OFFSET_Epn_DCOUT);	
		result2 = GETVAL(result1,OFFSET_Epn_DCOUT_BITS,OFFSET_Epn_DCOUT_BITE);
#if DEBUG_DATA3
		DEBUG_RXEQ_INTER_2400[PEx_config[i]][0] = result2;
#endif

		result1 = XBYTE(MCU_PCIE_BASE+EPHY_Out[PEx_config[i]]+OFFSET_Epn_HFOUT);	
		result2 = GETVAL(result1,OFFSET_Epn_HFOUT_BITS,OFFSET_Epn_HFOUT_BITE);
#if DEBUG_DATA3
		DEBUG_RXEQ_INTER_2400[PEx_config[i]][1] = result2;
#endif


		result1 = XBYTE(MCU_PCIE_BASE+EPHY_Out[PEx_config[i]]+OFFSET_Epn_OSOUT);	
		result2 = GETVAL(result1,OFFSET_Epn_OSOUT_BITS,OFFSET_Epn_OSOUT_BITE);
#if DEBUG_DATA3
		DEBUG_RXEQ_INTER_2400[PEx_config[i]][2] = result2;
#endif


		result1 = XBYTE(MCU_PCIE_BASE+EPHY_Out[PEx_config[i]]+OFFSET_Epn_W1OUT);	
		result2 = GETVAL(result1,OFFSET_Epn_W1OUT_BITS,OFFSET_Epn_W1OUT_BITE);
#if DEBUG_DATA3
		DEBUG_RXEQ_INTER_2400[PEx_config[i]][3] = result2;
#endif


		result1 = XBYTE(MCU_PCIE_BASE+EPHY_Out[PEx_config[i]]+OFFSET_Epn_W2OUT);	
		result2 = GETVAL(result1,OFFSET_Epn_W2OUT_BITS,OFFSET_Epn_W2OUT_BITE);
#if DEBUG_DATA3
		DEBUG_RXEQ_INTER_2400[PEx_config[i]][4] = result2;
#endif


		result1 = XBYTE(MCU_PCIE_BASE+EPHY_Block[PEx_config[i]]+OFFSET_LPn_RCV_HBW);	
		result2 = GETVAL(result1,OFFSET_LPn_RCV_HBW_BITS,OFFSET_LPn_RCV_HBW_BITE);
#if DEBUG_DATA3
		DEBUG_RXEQ_INTER_2400[PEx_config[i]][5] = result2;
#endif

		




		result1 = XBYTE(MCU_PCIE_BASE+EPHY_Out[PEx_config[i]]+OFFSET_FAREND_TX_PRESET);	
		result2 = GETVAL(result1,OFFSET_FAREND_TX_PRESET_BITS,OFFSET_FAREND_TX_PRESET_BITE);
#if DEBUG_DATA3
		DEBUG_RXEQ_INTER_2400[PEx_config[i]][6] = result2;
#endif


		result1 = XBYTE(MCU_PCIE_BASE+EPHY_Out[PEx_config[i]]+OFFSET_FAREND_PRE_CURSOR);	
		result2 = GETVAL(result1,OFFSET_FAREND_PRE_CURSOR_BITS,OFFSET_FAREND_PRE_CURSOR_BITE);
#if DEBUG_DATA3
		DEBUG_RXEQ_INTER_2400[PEx_config[i]][7] = result2;
#endif


		result1 = XBYTE(MCU_PCIE_BASE+EPHY_Out[PEx_config[i]]+OFFSET_FAREND_CURSOR);	
		result2 = GETVAL(result1,OFFSET_FAREND_CURSOR_BITS,OFFSET_FAREND_CURSOR_BITE);
#if DEBUG_DATA3
		DEBUG_RXEQ_INTER_2400[PEx_config[i]][8] = result2;
#endif

		
		result1 = XBYTE(MCU_PCIE_BASE+EPHY_Out[PEx_config[i]]+OFFSET_FAREND_POST_CURSOR);	
		result2 = GETVAL(result1,OFFSET_FAREND_POST_CURSOR_BITS,OFFSET_FAREND_POST_CURSOR_BITE);
#if DEBUG_DATA3
		DEBUG_RXEQ_INTER_2400[PEx_config[i]][9] = result2;
#endif

		


		
		LaneNumx++;
	}

	XBYTE(0xB000) = 0xEE;

	
}






void DEBUG_OUT_VAL( UCHAR rank, UCHAR flag)

{
	unsigned char result5;
	unsigned char result6; 
	
	
			//	3.1 report final:  PH0_neg,PH0_pos, EW, DCout,HFout,OSout,W1out,W2out , TX cursor										
			//* report 每一次的TX cursor以及Epn_DC/HF/OS/W1/W2out/LPn_RCV_HBW 
			DEBUG_RXEQ_INTER_3000[16*flag+15][0] = 1;
			result5 = XBYTE(MCU_PCIE_BASE+EPHY_Out[rank]+OFFSET_Epn_DCOUT);	
			result6 = GETVAL(result5,OFFSET_Epn_DCOUT_BITS,OFFSET_Epn_DCOUT_BITE);
#if DEBUG_DATA4
			DEBUG_RXEQ_INTER_3000[16*flag+rank][0] = result6;
			
#endif

#if 1	
			result5 = XBYTE(MCU_PCIE_BASE+EPHY_Out[rank]+OFFSET_Epn_HFOUT);	
			result6 = GETVAL(result5,OFFSET_Epn_HFOUT_BITS,OFFSET_Epn_HFOUT_BITE);
#if DEBUG_DATA4
			DEBUG_RXEQ_INTER_3000[16*flag+rank][1] = result6;
#endif
	
	
			result5 = XBYTE(MCU_PCIE_BASE+EPHY_Out[rank]+OFFSET_Epn_OSOUT);	
			result6 = GETVAL(result5,OFFSET_Epn_OSOUT_BITS,OFFSET_Epn_OSOUT_BITE);
#if DEBUG_DATA4
			DEBUG_RXEQ_INTER_3000[16*flag+rank][2] = result6;
#endif
	
	
			result5 = XBYTE(MCU_PCIE_BASE+EPHY_Out[rank]+OFFSET_Epn_W1OUT);	
			result6 = GETVAL(result5,OFFSET_Epn_W1OUT_BITS,OFFSET_Epn_W1OUT_BITE);
#if DEBUG_DATA4
			DEBUG_RXEQ_INTER_3000[16*flag+rank][3] = result6;
#endif
	
	
			result5 = XBYTE(MCU_PCIE_BASE+EPHY_Out[rank]+OFFSET_Epn_W2OUT);	
			result6 = GETVAL(result5,OFFSET_Epn_W2OUT_BITS,OFFSET_Epn_W2OUT_BITE);
#if DEBUG_DATA4
			DEBUG_RXEQ_INTER_3000[16*flag+rank][4] = result6;
#endif
	
	
			result5 = XBYTE(MCU_PCIE_BASE+EPHY_Block[rank]+OFFSET_LPn_RCV_HBW);	
			result6 = GETVAL(result5,OFFSET_LPn_RCV_HBW_BITS,OFFSET_LPn_RCV_HBW_BITE);
#if DEBUG_DATA4
			DEBUG_RXEQ_INTER_3000[16*flag+rank][5] = result6;
#endif
	

	
			result5 = XBYTE(MCU_PCIE_BASE+EPHY_Out[rank]+OFFSET_FAREND_TX_PRESET); 
			result6 = GETVAL(result5,OFFSET_FAREND_TX_PRESET_BITS,OFFSET_FAREND_TX_PRESET_BITE);
#if DEBUG_DATA4
			DEBUG_RXEQ_INTER_3000[16*flag+rank][6] = result6;
#endif
	
	
			result5 = XBYTE(MCU_PCIE_BASE+EPHY_Out[rank]+OFFSET_FAREND_PRE_CURSOR);	
			result6 = GETVAL(result5,OFFSET_FAREND_PRE_CURSOR_BITS,OFFSET_FAREND_PRE_CURSOR_BITE);
#if DEBUG_DATA4
			DEBUG_RXEQ_INTER_3000[16*flag+rank][7] = result6;
#endif
	
	
			result5 = XBYTE(MCU_PCIE_BASE+EPHY_Out[rank]+OFFSET_FAREND_CURSOR);	
			result6 = GETVAL(result5,OFFSET_FAREND_CURSOR_BITS,OFFSET_FAREND_CURSOR_BITE);
#if DEBUG_DATA4
			DEBUG_RXEQ_INTER_3000[16*flag+rank][8] = result6;
#endif
	
			
			result5 = XBYTE(MCU_PCIE_BASE+EPHY_Out[rank]+OFFSET_FAREND_POST_CURSOR);	
			result6 = GETVAL(result5,OFFSET_FAREND_POST_CURSOR_BITS,OFFSET_FAREND_POST_CURSOR_BITE);
#if DEBUG_DATA4
			DEBUG_RXEQ_INTER_3000[16*flag+rank][9] = result6;
#endif
	
#endif			





}













void
DebugTest(void)
{
	unsigned char i;
	
	//debug code : to test the real time of those delay
	XBYTE(0xB001) = 0x01;
	for (i = 0; i < 5; i++);
	XBYTE(0xB001) = 0x02;
	for (i = 0; i < 10; i++);
	XBYTE(0xB001) = 0x03;
	for (i = 0; i < 20; i++);
	XBYTE(0xB001) = 0x04;
	for (i = 0; i < 50; i++);
	XBYTE(0xB001) = 0x05;
	for (i = 0; i < 200; i++);
	XBYTE(0xB001) = 0x06;
	_nop_();
	XBYTE(0xB001) = 0x07;
	_nop_();
	_nop_();
	_nop_();
	_nop_();
	_nop_();
	XBYTE(0xB001) = 0x08;
	_nop_();
	_nop_();
	_nop_();
	_nop_();
	_nop_();
	_nop_();
	_nop_();
	_nop_();
	_nop_();
	_nop_();
	XBYTE(0xB001) = 0x09;
	for(i=0;i<1;i++)
		_nop_();
	XBYTE(0xB001) = 0x0a;
	for(i=0;i<5;i++)
		_nop_();
	XBYTE(0xB001) = 0x0b;
	for(i=0;i<10;i++)
		_nop_();
	XBYTE(0xB001) = 0x0c;
	for(i=0;i<100;i++)
		_nop_();	
	XBYTE(0xB001) = 0x0d;
	

}



void
RxAutoEQ(	UCHAR PEx, 
	UCHAR *PEx_config, 
	SAVE_LANE_PARAM *PEx_SAVE)
{
#if FOR_LA_TRIGGER
	XBYTE(0xB000) = 0xA5;
#endif
	RxAutoEQ_Ctrl( PEx,  PEx_config,  PEx_SAVE);

	EQ_Done(PEx);



	//DebugTest();


}

















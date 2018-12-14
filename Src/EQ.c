 //*************************************************************************************
 //*************************************************************************************
 //**																				  **
 //**	  Copyright (c) 2015 Shanghai Zhaoxin Semiconductor Co., Ltd.				  **
 //**	 
 //**	  author: JennyChen    Date:04/26/18										  **
 //*************************************************************************************
 //*************************************************************************************

#include "Header/EQ.h"
#include "Header/Eye_monitor2.h"
#include "Header/Eye_monitor3.h"


//extern NCSIM_DEBUG_PORT xdata NCSIM_DEBUG;

PEMCU_INTERNAL xdata xrPEMCU_INTERNAL    			_at_    0xB004;

//PEMCU_EXTERNAL_VPI_INTERRUPT xdata xrPEMCU_EXTERNAL_VPI_INTERRUPT _at_ 0xB800; //;D7F0 Rx800
MCU_CTRL_VPI xdata xrMCU_CTRL_VPI _at_ 0xBF00;                                  //;D7F0 Rx800 base address RxB700

PEMCU_RV xdata xrPEMCU_RV    						_at_    0xC0E0;    				//; MMIO RxE0
PEMCU_OTHER_INTERRUPT     xdata xrOTHER_STS 		_at_    0xC9C0; 				//;MMIO Rx9C0
PEMCU2BIOS_scratch xdata xrPEMCU2BIOS_scratch 		_at_    0xC9C8; 				//;MMIO Rx9C8
PEMCU_EXTERNAL_INTERRUPT xdata xrEX_STS 			_at_    0xC9D4; 				//;MMIO Rx9D4
BIOS2PEMCU_scratch xdata xrBIOS2PEMCU_scratch 		_at_    0xC9D8; 				//;MMIO Rx9D8
LANE_PARAM xdata 	xrLane[16]    					_at_    0xCA00;  				//;MMIO RxA00
MCU_CTRL xdata xrMCU_CTRL[8] 						_at_    0xCC00;				//;MMIO RxC00
MCU_ADJ_PARAM xdata  xrMCUADJ[16]  				_at_    0xEB00;  				//;MMIO Rx2B00
MCU_ADJ_PARAM_VPI xdata xrMCUADJVPI[8]  _at_ 0xBE00;      //;D7F0 RX700 base address RXB700

#if DBG1300
extern unsigned short Millisecond;
volatile unsigned char xdata EQ_DEBUG_1300[16][16] _at_ 0x1300;
//extern  unsigned char ERR_DEBUG_1200[16][16]; 
#endif

extern CURSOR_EW BestCursorEw[];


unsigned gPcieDoEqMethod = 0xFF;   //0: TxAutoEQ   1:RxAutoEQ



#ifdef  POSTCODE
extern void trace0(UCHAR function_name);
extern void trace1(UCHAR function_name, UCHAR para1);
extern void trace2(UCHAR function_name, UCHAR para1, UCHAR para2);
extern void trace3(UCHAR function_name, UCHAR para1, UCHAR para2, UCHAR para3) ;
extern void returnN();
//extern void Failed_point(UCHAR para1);
//extern void returnD(UCHAR para1);
//extern void mark(UCHAR para1);
//extern void post(UCHAR para1);
extern void Rule(UCHAR para1);
extern void Mark(UCHAR para1);
extern void  post(UCHAR para1);

#endif
#ifdef  POSTCODE
#ifdef  MESSAGE
extern void msg0(UCHAR function_name);
extern void msg1(UCHAR function_name, UCHAR para1);
extern void msg2(UCHAR function_name, UCHAR para1, UCHAR para2);
extern void msg3(UCHAR function_name, UCHAR para1, UCHAR para2, UCHAR para3);
extern void msg4(UCHAR function_name, UCHAR para1, UCHAR para2, UCHAR para3, UCHAR para4);
extern void msg5(UCHAR function_name, UCHAR para1, UCHAR para2, UCHAR para3, UCHAR para4, UCHAR para5);
extern void msg6(UCHAR function_name, UCHAR para1, UCHAR para2, UCHAR para3, UCHAR para4, UCHAR para5, UCHAR para6);
extern void msg7(UCHAR function_name, UCHAR para1, UCHAR para2, UCHAR para3, UCHAR para4, UCHAR para5, UCHAR para6, UCHAR para7);
extern void msg8(UCHAR function_name, UCHAR para1, UCHAR para2, UCHAR para3, UCHAR para4, UCHAR para5, UCHAR para6, UCHAR para7, UCHAR para8);
extern void msg9(UCHAR function_name, UCHAR para1, UCHAR para2, UCHAR para3, UCHAR para4, UCHAR para5, UCHAR para6, UCHAR para7, UCHAR para8, UCHAR para9);

#endif
#endif

#ifdef DBGINTERRUPT

extern void DBGINTERRUPT0();
//extern void DBGINTERRUPT1();
//extern void DBGINTERRUPT2();

#endif

//;{Lan num, Lanx, Lanx, .....}
//JNY-Porting PCIE-EQ for CHX002--s
unsigned char code PE0[12][5] = {{4, 0x0A, 0x0B, 0x0C, 0x0D}, //;Configuration 0
			      {4, 0x0A, 0x0B, 0x0C, 0x0D},//;Configuration 1			      
			      {4, 0x0A, 0x0B, 0x0C, 0x0D},//;Configuration 2			      
			      {2, 0x0A, 0x0B, 0, 0},//;Configuration 3

			      {1, 0x0A, 0, 0, 0},//;Configuration 4
			      {1, 0x0A, 0, 0, 0},//;Configuration 5
			      {4, 0x0A, 0x0B, 0x0C, 0x0D},//;Configuration 6
			      {4, 0x0A, 0x0B, 0x0C, 0x0D},//;Configuration 7
			      
			      {1, 0x0A, 0, 0, 0},//;Configuration 8			      
			      {1, 0x0A, 0, 0, 0},//;Configuration 9			      
			      {4, 0x0A, 0x0B, 0x0C, 0x0D},//;Configuration 10		      
			      {4, 0x0A, 0x0B, 0x0C, 0x0D}};//;Configuration 11

unsigned char code PE1[12][2] = {{0, 0},//;Configuration 0
			      {0, 0},//;Configuration 1			      
			      {0, 0},//;Configuration 2			      
			      {0, 0},//;Configuration 3
			      
			      {1, 0x0B},//;Configuration 4
			      {1, 0x0B},//;Configuration 5
			      {0, 0},//;Configuration 6
			      {0, 0},//;Configuration 7
			      
			      {1, 0x0B},//;Configuration 8
			      {1, 0X0B},//;Configuration 9
			      {0, 0},//;Configuration 10
			      {0, 0}};//;Configuration 11
			     
unsigned char code PE2[12][3] = {{1, 0x0E, 0}, //;Configuration 0
			      {2, 0x0E, 0x0F},//;Configuration 1			      
			      {0, 0, 0},//;Configuration 2			      
			      {1, 0x0C,0},//;Configuration 3
			      
			      {1, 0x0C,0},//;Configuration 4
			      {1, 0x0C,0},//;Configuration 5
			      {0, 0,0},//;Configuration 6
			      {0, 0,0},//;Configuration 7
			      
			      {1, 0x0C,0},//;Configuration 8
			      {1, 0x0C,0},//;Configuration 9
			      {0, 0, 0},//;Configuration 10
			      {0, 0, 0}};//;Configuration 11



unsigned char code PE3[12][2] = {{1, 0x0F}, //;Configuration 0
			      {0, 0},//;Configuration 1			      
			      {0, 0},//;Configuration 2			      
			      {1, 0x0D},//;Configuration 3
			      
			      {1, 0x0D},//;Configuration 4
			      {1, 0x0D},//;Configuration 5
			      {0, 0},//;Configuration 6
			      {0, 0},//;Configuration 7
			      
			      {1, 0x0D},//;Configuration 8
			      {1, 0X0D},//;Configuration 9
			      {0, 0},//;Configuration 10
			      {0, 0}};//;Configuration 11
			      
//PEG---PE4
unsigned char code PE4[12][9] = {{8, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09}, //;Configuration 0
			      {8, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09},//;Configuration 1
			      {4, 0x02, 0x03, 0x04, 0x05, 0, 0, 0, 0},//;Configuration 28, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09
			      {8, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09},//;Configuration 3
			      
			      {8, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09},//;Configuration 4
			      {4, 0x02, 0x03, 0x04, 0x05},//;Configuration 5
			      {1, 0x0E, 0, 0, 0, 0, 0, 0, 0},//;Configuration 6
			      {0, 0, 0, 0, 0, 0, 0, 0, 0},//;Configuration 7
			      
			      {1, 0x0E, 0, 0, 0, 0, 0, 0, 0},//;Configuration 8
			      {0, 0, 0, 0, 0, 0, 0, 0, 0},//;Configuration 9
			      {8, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09},//;Configuration 10
			      {8, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09}};//;Configuration11
			      
	//PEG0---PE5		      
unsigned char code  PE5[12][5] = {{0, 0, 0, 0, 0}, //;Configuration 0
			      {0, 0, 0, 0, 0},//;Configuration 1
			      {4, 0x06, 0x07, 0x08, 0x09},//;Configuration 2
			      {0, 0, 0, 0, 0},//;Configuration 3
			      
			      {0, 0, 0, 0, 0},//;Configuration 4
			      {4, 0x06, 0x07, 0x08, 0x09},//;Configuration 5
			      {1, 0x0F, 0, 0, 0},//;Configuration 6
			      {0, 0, 0, 0, 0},//;Configuration 7
			      
			      {1, 0x0F, 0, 0, 0},//;Configuration 8
			      {0, 0, 0, 0, 0},//;Configuration 9
			      {0, 0, 0, 0, 0},//;Configuration 10
			      {0, 0, 0, 0, 0}};//;Configuration 11
			     

//PEG1-PE6
unsigned char code PE6[12][3] = {{2, 0x00, 0x01}, //;Configuration 0
			      {1, 0x00, 0},//;Configuration 1
			      {1, 0, 0},//;Configuration 2
			      {1, 0, 0},//;Configuration 3
			      
			      {1, 0x00, 0},//;Configuration 4			      
			      {1, 0x00, 0},//;Configuration 5			      
			      {1, 0x00, 0},//;Configuration 6		      
			      {1, 0x00, 0},//;Configuration 7
			      
			      {2, 0x00, 0x01},//;Configuration 8			      
			      {2, 0x00, 0x01},//;Configuration 9			      
			      {1, 0x00, 0},//;Configuration 10		      
			      {2, 0x00, 0x01}};//;Configuration 11
			      
//PEG2--PE7
unsigned char code  PE7[12][2] = {{0, 0}, //;Configuration 0
			      {1, 0x01},//;Configuration 1
			      {1, 0x01},//;Configuration 2
			      {1, 0x01},//;Configuration 3
			      
			      {1, 0x01},//;Configuration 4
			      {1, 0x01},//;Configuration 5
			      {1, 0x01},//;Configuration 6
			      {1, 0x01},//;Configuration 7
			      
			      {0, 0},//;Configuration 8
			      {0, 0},//;Configuration 9
			      {1, 0x01},//;Configuration 10
			      {0, 0}};//;Configuration11

#ifdef DUAL_SOCKET_VPI_EQ
unsigned char code VPI[12][9] = {{0, 0, 0, 0, 0,0,0,0,0}, //;Configuration 0
			      {0, 0, 0, 0, 0, 0, 0, 0, 0},//;Configuration 1
			      {0, 0, 0, 0, 0, 0, 0, 0, 0},//;Configuration 2
			      {0, 0, 0, 0, 0, 0, 0, 0, 0},//;Configuration 3

			      {0, 0, 0, 0, 0, 0, 0, 0, 0},//;Configuration 4
			      {0, 0, 0, 0, 0, 0, 0, 0, 0},//;Configuration 5
			      {8, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09},//;Configuration 6
			      {8, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09},//;Configuration 7
			      
			      {8, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09},//;Configuration 8			      
			      {8, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09},//;Configuration 9			      
			      {0, 0, 0, 0, 0, 0, 0, 0, 0},//;Configuration 10		      
			      {0, 0, 0, 0, 0, 0, 0, 0, 0}};//;Configuration 11
#endif

volatile UCHAR  configuration;	
//;Lane, num
SAVE_LANE_PARAM PE0_SAVE[4];
SAVE_LANE_PARAM PE1_SAVE[1];
SAVE_LANE_PARAM PE2_SAVE[2];
SAVE_LANE_PARAM PE3_SAVE[1];
SAVE_LANE_PARAM PE4_SAVE[8];
SAVE_LANE_PARAM PE5_SAVE[4];
SAVE_LANE_PARAM PE6_SAVE[2];
SAVE_LANE_PARAM PE7_SAVE[1];
SAVE_LANE_PARAM VPI_SAVE[8];

//;{Lan num, Lanx, Lanx, .....}

volatile UCHAR PE0_config[5];
volatile UCHAR PE1_config[2];
volatile UCHAR PE2_config[3];
volatile UCHAR PE3_config[2];
volatile UCHAR PE4_config[9];
volatile UCHAR PE5_config[5];
volatile UCHAR PE6_config[3];
volatile UCHAR PE7_config[2];
volatile UCHAR VPI_config[9];

volatile UCHAR PE0_On = 0;
volatile UCHAR PE1_On = 0;
volatile UCHAR PE2_On = 0;
volatile UCHAR PE3_On = 0;
volatile UCHAR PE4_On = 0;
volatile UCHAR PE5_On = 0;
volatile UCHAR PE6_On = 0;
volatile UCHAR PE7_On = 0;
volatile UCHAR VPI_On = 0;




volatile UCHAR PE0_stage = 0;
volatile UCHAR PE1_stage = 0;
volatile UCHAR PE2_stage = 0;
volatile UCHAR PE3_stage = 0;
volatile UCHAR PE4_stage = 0;
volatile UCHAR PE5_stage = 0;
volatile UCHAR PE6_stage = 0;
volatile UCHAR PE7_stage = 0;
volatile UCHAR VPI_stage = 0;


volatile USHORT PExDelayFlag = 0;
volatile UCHAR VPIDelayFlag = 0;

volatile UCHAR PE0_Delay100us = 0;
volatile UCHAR PE1_Delay100us = 0;
volatile UCHAR PE2_Delay100us = 0;
volatile UCHAR PE3_Delay100us = 0;
volatile UCHAR PE4_Delay100us = 0;
volatile UCHAR PE5_Delay100us = 0;
volatile UCHAR PE6_Delay100us = 0;
volatile UCHAR PE7_Delay100us = 0;
volatile UCHAR VPI_Delay100us = 0;
UCHAR Eye_Monitor_stage = 0;

//PEx Main Loop FSM

volatile USHORT INT_PF_EQ_REQ = 0;   //JNY Modify for PCIE EQ
volatile USHORT INT_EP_EQ_REQ = 0;   //JNY Modify for PCIE EQ

//JNY add for VPI EQ INT---s
volatile UCHAR INT_PF_EQ_REQ_VPI = 0;
volatile UCHAR INT_EP_EQ_REQ_VPI = 0;
//JNY add for VPI EQ INT---e

volatile UCHAR STAGE = CMD_STAGE;
volatile UCHAR CMD = Tx_Preset;
volatile UCHAR Tx_Preset_Value = 0x05;
volatile UCHAR EQ_Pre_Cursor = 0;
volatile UCHAR EQ_Cursor = 0;
volatile UCHAR EQ_Post_Cursor = 0;
volatile UCHAR Test_Result = 0;
volatile UCHAR EQ_FS = 0;
volatile UCHAR EQ_LF = 0;

UCHAR Lane_Num = 0;// Eye Monitor


EyeMonInPa_9D8 EyeMonInParaEyeInf={0};
EyeMonInPa_F8 EyeMonInParaPointXY={0};
EyeMonInPa_FB EyeMonInParaResult={0};


//pEyeMonInPa_9D8 Eyemonitor;
//Eyemonitor=&EyeMonInParaEyeInf;
//extern void EyeMonMode1or2(EyeMonInPa_9D8 EyePraInf,EyeMonInPa_F8 EyeMonPointXY,EyeMonitorInputPara_FB Scantime) ;


enum
{
    WaitINT = 0,
    DoP5 ,
    DoPx,
    DoFineTune,
    EndFineTune
};


void EQ_INIT()
{

//; PEMCU Revision: MMIO RxF0
//	xrPEMCU_RV.PEMCU_REG_0[0] = 0x11;
//	xrPEMCU_RV.PEMCU_REG_0[1] = 0x22;
//	xrPEMCU_RV.PEMCU_REG_0[2] = 0x33;
//	xrPEMCU_RV.PEMCU_REG_0[3] = 0x44;	
//;Get Configuration;
	configuration = xrPEMCU_RV.RP_CFG & 0x1F;

#if DBG1300
	EQ_DEBUG_1300[8][0] = configuration;
#endif

	xrPEMCU2BIOS_scratch.PEMCU2BIOS_scratch[1] = 0x11; //; set MMIO Rx9D1 = 0x11 for bios to known FW is ready.


#ifdef  POSTCODE
	trace1(EQ_INIT_, configuration);
#endif

//;Save configuration in PEx.

	memcpy(PE0_config, PE0[configuration], sizeof(PE0_config));
	memcpy(PE1_config, PE1[configuration], sizeof(PE1_config));
	memcpy(PE2_config, PE2[configuration], sizeof(PE2_config));
	memcpy(PE3_config, PE3[configuration], sizeof(PE3_config));
	memcpy(PE4_config, PE4[configuration], sizeof(PE4_config));	
	memcpy(PE5_config, PE5[configuration], sizeof(PE5_config));
	memcpy(PE6_config, PE6[configuration], sizeof(PE6_config));
	memcpy(PE7_config, PE7[configuration], sizeof(PE7_config));	

#ifdef DUAL_SOCKET_VPI_EQ
	memcpy(VPI_config, VPI[configuration], sizeof(VPI_config));	
#endif

	

	if (PE0_config[0] != 0)
		PE0_On = 1;
	if (PE1_config[0] != 0)
		PE1_On = 1;
	if (PE2_config[0] != 0)
		PE2_On = 1;
	if (PE3_config[0] != 0)
		PE3_On = 1;
	if (PE4_config[0] != 0)
		PE4_On = 1;
	
	if (PE5_config[0] != 0)
		PE5_On = 1;
	if (PE6_config[0] != 0)
		PE6_On = 1;
	if (PE7_config[0] != 0)
		PE7_On = 1;
#ifdef DUAL_SOCKET_VPI_EQ

	if (VPI_config[0] != 0)
		VPI_On = 1;
#endif

#ifdef MESSAGE
//	msg5(EQ_INIT_, PE0_config[0], PE0_config[1], PE0_config[2], PE0_config[3], PE0_config[4]);
//	msg2(EQ_INIT_, PE1_config[0], PE1_config[1]);
//	msg2(EQ_INIT_, PE2_config[0], PE2_config[1]);
//	msg5(EQ_INIT_, PE3_config[0], PE3_config[1], PE3_config[2], PE3_config[3], PE3_config[4]);
   //    msg9(EQ_INIT_, PE4_config[0], PE4_config[1], PE4_config[2], PEG0_config[3], PEG0_config[4], PEG0_config[5], PEG0_config[6], PEG0_config[7], PEG0_config[8]);
	//msg5(EQ_INIT_, PEG1_config[0], PEG1_config[1], PEG1_config[2], PEG1_config[3], PEG1_config[4]);	   
#endif 	


#ifdef  POSTCODE	
	returnN();
#endif
	return;
}

void EQ_ISR()  interrupt 0 using 1
{

	USHORT INT_PF_EQ_REQ_temp;
	USHORT INT_EP_EQ_REQ_temp;
	
	UCHAR temp8;
	
	UCHAR scratch8;
	UCHAR Byte0;
	UCHAR Byte1;

#ifdef DUAL_SOCKET_VPI_EQ
	UCHAR VPI_Byte0;
#endif

	UCHAR i;

#ifdef  POSTCODE
	trace0(EQ_ISR_);
#endif	
	
#ifdef DBGINTERRUPT

	DBGINTERRUPT0();
#endif 
	DisableEQInt();


	Byte0 = xrEX_STS.PF_EQ_REQ_PEx_0; //;Read MMIO Rx9D4
	Byte1 = xrEX_STS.PF_EQ_REQ_PEx_1; //;Read MMIO Rx9D5 reserved Bit 8-15
	xrEX_STS.PF_EQ_REQ_PEx_0 = Byte0;  //write 1 to clear 
	//xrEX_STS.PF_EQ_REQ_PEx_1 = Byte1;

#ifdef DUAL_SOCKET_VPI_EQ
	VPI_Byte0 = xrMCU_CTRL_VPI.INT_TO_MCU_VPI;   //JNY add for  VPI EQ
	xrMCU_CTRL_VPI.INT_TO_MCU_VPI=VPI_Byte0;  //JNY add for VPI EQ
#endif
	//;Big endian
	INT_PF_EQ_REQ_temp = ((Byte1 << 8) | Byte0);


	Byte0 = xrEX_STS.EP_EQ_REQ_PEx_0; //;Read MMIO Rx9D6
	Byte1 = xrEX_STS.EP_EQ_REQ_PEx_1;//;Read MMIO Rx9D7

	xrEX_STS.EP_EQ_REQ_PEx_0 = Byte0;
	//xrEX_STS.EP_EQ_REQ_PEx_1 = Byte1;  //reserved bit in spec (RO)

	
	INT_EP_EQ_REQ_temp = ((Byte1 << 8) | Byte0);


	
#ifdef  POSTCODE
//	trace2(EQ_ISR_, INT_PF_EQ_REQ_temp, INT_EP_EQ_REQ_temp);
#endif

/////////////////PF_EQ_REQ_PEx///////////////////////

	if (INT_PF_EQ_REQ_temp & MCU_INT_PF_EQ_REQ_PE0) 
	{
		PE0_stage = DoFineTune;
#if DBG1300
		EQ_DEBUG_1300[0][0] = 1;
		EQ_DEBUG_1300[2][0] = (Millisecond>>8);
		EQ_DEBUG_1300[3][0] = Millisecond;
#endif
	}

	if (INT_PF_EQ_REQ_temp & MCU_INT_PF_EQ_REQ_PE1)
	{
		PE1_stage = DoFineTune;
#if DBG1300
		EQ_DEBUG_1300[0][1] = 1;
		EQ_DEBUG_1300[2][1] = (Millisecond>>8);
		EQ_DEBUG_1300[3][1] = Millisecond;

#endif
	}

	if (INT_PF_EQ_REQ_temp & MCU_INT_PF_EQ_REQ_PE2)
	{
		PE2_stage = DoFineTune;
#if DBG1300
		EQ_DEBUG_1300[0][2] = 1;
		EQ_DEBUG_1300[2][2] = (Millisecond>>8);
		EQ_DEBUG_1300[3][2] = Millisecond;

#endif
	}

	if (INT_PF_EQ_REQ_temp & MCU_INT_PF_EQ_REQ_PE3)
	{
		PE3_stage = DoFineTune;
#if DBG1300
		EQ_DEBUG_1300[0][3] = 1;
		EQ_DEBUG_1300[2][3] = (Millisecond>>8);
		EQ_DEBUG_1300[3][3] = Millisecond;

#endif
	}
	
//	post(0xAA);
	
	if (INT_PF_EQ_REQ_temp & MCU_INT_PF_EQ_REQ_PE4)
	{
		PE4_stage = DoFineTune;
		//Mark(PE4_stage);
#if DBG1300
		EQ_DEBUG_1300[0][4] = 1;
		EQ_DEBUG_1300[2][4] = (Millisecond>>8);
		EQ_DEBUG_1300[3][4] = Millisecond;

#endif
	}


	if (INT_PF_EQ_REQ_temp & MCU_INT_PF_EQ_REQ_PE5)
	{
		PE5_stage = DoFineTune;
#if DBG1300
		EQ_DEBUG_1300[0][5] = 1;
		EQ_DEBUG_1300[2][5] = (Millisecond>>8);
		EQ_DEBUG_1300[3][5] = Millisecond;

#endif
	}

	if (INT_PF_EQ_REQ_temp & MCU_INT_PF_EQ_REQ_PE6)
	{
		PE6_stage = DoFineTune;
#if DBG1300
		EQ_DEBUG_1300[0][6] = 1;
		EQ_DEBUG_1300[2][6] = (Millisecond>>8);
		EQ_DEBUG_1300[3][6] = Millisecond;

#endif
	}

	if (INT_PF_EQ_REQ_temp & MCU_INT_PF_EQ_REQ_PE7)
	{
		PE7_stage = DoFineTune;
#if DBG1300
		EQ_DEBUG_1300[0][7] = 1;
		EQ_DEBUG_1300[2][7] = (Millisecond>>8);
		EQ_DEBUG_1300[3][7] = Millisecond;

#endif
	}
	
#ifdef DUAL_SOCKET_VPI_EQ
	if (VPI_Byte0 & MCU_INT_PF_EQ_REQ_VPI)
	{
		VPI_stage = EndFineTune;
		
#if DBG1300
		EQ_DEBUG_1300[0][8] = 1;
		EQ_DEBUG_1300[2][8] = (Millisecond>>8);
		EQ_DEBUG_1300[3][8] = Millisecond;


#endif
	}
#endif
/////////////////EP_EQ_REQ_PEx ////////////////

	if (INT_EP_EQ_REQ_temp & MCU_INT_EP_EQ_REQ_PE0) 
	{
#if DBG1300	
		EQ_DEBUG_1300[6][0] = 1;
#endif
		xrMCU_CTRL[0].MCU_LINK_EQ_REQ_PEx = MCU_PCIE_EP_EQ_REQ;
		for (i = 0; i < 5; i++);
		xrMCU_CTRL[0].MCU_LINK_EQ_REQ_PEx = 0;  //JNY add for Redo-EQ PE0 RxC0B
	}

	if (INT_EP_EQ_REQ_temp & MCU_INT_EP_EQ_REQ_PE1) 
	{
#if DBG1300	
		EQ_DEBUG_1300[6][1] = 1;
#endif
		xrMCU_CTRL[1].MCU_LINK_EQ_REQ_PEx = MCU_PCIE_EP_EQ_REQ;
		for (i = 0; i < 5; i++);
		xrMCU_CTRL[0].MCU_LINK_EQ_REQ_PEx = 0;  //JNY add for Redo-EQ PE1 RxC1B
	}
	
	if (INT_EP_EQ_REQ_temp & MCU_INT_EP_EQ_REQ_PE2) 
	{
#if DBG1300	
		EQ_DEBUG_1300[6][2] = 1;
#endif
		xrMCU_CTRL[2].MCU_LINK_EQ_REQ_PEx = MCU_PCIE_EP_EQ_REQ;
		for (i = 0; i < 5; i++);
		xrMCU_CTRL[0].MCU_LINK_EQ_REQ_PEx = 0; //JNY add for Redo-EQ PE2 RxC2B
	}

	if (INT_EP_EQ_REQ_temp & MCU_INT_EP_EQ_REQ_PE3) 
	{
#if DBG1300	
		EQ_DEBUG_1300[6][3] = 1;
#endif
		xrMCU_CTRL[3].MCU_LINK_EQ_REQ_PEx = MCU_PCIE_EP_EQ_REQ;
		for (i = 0; i < 5; i++);
		xrMCU_CTRL[0].MCU_LINK_EQ_REQ_PEx = 0;  //JNY add for Redo-EQ PE3 RXC3B
	}
	if (INT_EP_EQ_REQ_temp & MCU_INT_EP_EQ_REQ_PE4) 
	{
#if DBG1300	
		EQ_DEBUG_1300[6][4] = 1;
#endif
		xrMCU_CTRL[4].MCU_LINK_EQ_REQ_PEx = MCU_PCIE_EP_EQ_REQ;
		for (i = 0; i < 5; i++);
		xrMCU_CTRL[0].MCU_LINK_EQ_REQ_PEx = 0;  //JNY add for Redo-EQ PE4  RxC4B
	}

	if (INT_EP_EQ_REQ_temp & MCU_INT_EP_EQ_REQ_PE5) 
	{
#if DBG1300	
		EQ_DEBUG_1300[6][5] = 1;
#endif
		xrMCU_CTRL[5].MCU_LINK_EQ_REQ_PEx = MCU_PCIE_EP_EQ_REQ; 
		for (i = 0; i < 5; i++);
		xrMCU_CTRL[0].MCU_LINK_EQ_REQ_PEx = 0;   //JNY add for Redo-EQ PE5 RxC5B
	}

	if (INT_EP_EQ_REQ_temp & MCU_INT_EP_EQ_REQ_PE6) 
	{
#if DBG1300	
		EQ_DEBUG_1300[6][6] = 1;
#endif
		xrMCU_CTRL[6].MCU_LINK_EQ_REQ_PEx = MCU_PCIE_EP_EQ_REQ;
		for (i = 0; i < 5; i++);
		xrMCU_CTRL[0].MCU_LINK_EQ_REQ_PEx = 0;  //JNY add for Redo-EQ PE6 RxC6B
	}

	if (INT_EP_EQ_REQ_temp & MCU_INT_EP_EQ_REQ_PE7) 
	{
#if DBG1300	
		EQ_DEBUG_1300[6][7] = 1;
#endif
		xrMCU_CTRL[7].MCU_LINK_EQ_REQ_PEx = MCU_PCIE_EP_EQ_REQ;
		for (i = 0; i < 5; i++);
		xrMCU_CTRL[0].MCU_LINK_EQ_REQ_PEx = 0;   //JNY add for Redo-EQ PE7 RxC7B
	}
	//JNY add for VPI eq INT --S
#ifdef DUAL_SOCKET_VPI_EQ

	if (VPI_Byte0 & MCU_INT_EP_EQ_REQ_VPI)
	{
#if DBG1300	
		EQ_DEBUG_1300[6][9] = 1;
#endif
		xrMCU_CTRL_VPI.MCU_LINK_EQ_REQ_VPI = MCU_VPI_EP_EQ_REQ; 
		for (i = 0; i < 5; i++);
		xrMCU_CTRL_VPI.MCU_LINK_EQ_REQ_VPI = 0;    //JNY add for Redo-EQ VPI Rx80B
	}	 

#endif
	//JNY add for VPI eq INT --E




	INT_PF_EQ_REQ = INT_PF_EQ_REQ | INT_PF_EQ_REQ_temp;
	//JNY add for VPI EQ---S
#ifdef DUAL_SOCKET_VPI_EQ

	INT_PF_EQ_REQ_VPI=INT_PF_EQ_REQ_VPI|VPI_Byte0;
#endif
    //JNY add for VPI EQ---E---20170712---s

#ifdef MESSAGE
	msg2(EQ_ISR_, INT_PF_EQ_REQ, INT_EP_EQ_REQ);
#endif	

//JNY-Porting for CHX002 Eye Monitor Function
/***********************************************************************
BIOS2PEMCU_scratch registers 0x9DB~9D8h  for BIOS to PEMCU in CMD cycle:
      Bit	    | 31:16|     |15:8|        |7:4|	   | 3:0|
Description:	|Reserved|   |Lane Number| |Reserved|  | CMD|

BIOS2PEMCU_scratch registers 0x9DB~9D8h  for BIOS to PEMCU in DATA cycle:
      Bit	    | 31:24|        |23:16|         |15:8|            |7:0|
Description:|PCIE Port number|  |PHYx|    |ERROR threshold|   |Monitor Method|

The Register for PEMCU 0xF8-0xFB for BIOS to PEMCU in DATA cycle
      Bit	   |31:24	|    |23:16	|         |15:8|          |7:0|
Description	  MCU_EQTNVTH_2	 MCU_PH_OS_2	 MCU_EQTNVTH	 MCU_PH_OS

The Register for PEMCU 0xFC-0xFF for BIOS to PEMCU in DATA cycle
      Bit	   | 31:8  |    |7:0|
Description	    Reserved	Scan Time
************************************************************************/

	XBYTE(0xc0f0)=0xaa;

	temp8 = xrPEMCU2BIOS_scratch.BIOS2PEMCU_DB;

	if (temp8 & MCU_BIOS2PEMCU_DB)
	{
		if (STAGE == CMD_STAGE) 
		{
			Test_Result = Failed;
				
			scratch8 = xrBIOS2PEMCU_scratch.BIOS2PEMCU_scratch[0];
			CMD = scratch8 & MCU_BIOS2PEMCU_CMD_MASK;
			if (CMD == Cursor) 	{
				
				EQ_Pre_Cursor = xrBIOS2PEMCU_scratch.BIOS2PEMCU_scratch[1];
			}else if(CMD == Eye_Monitor_CMD ){
			
			Lane_Num = xrBIOS2PEMCU_scratch.BIOS2PEMCU_scratch[1];
 
			}
			STAGE = DATA_STAGE;

		}else if (STAGE == DATA_STAGE) {

			if (CMD == Tx_Preset) {
				Tx_Preset_Value = xrBIOS2PEMCU_scratch.BIOS2PEMCU_scratch[0];				

			} else if (CMD == Cursor) {
				EQ_Cursor = xrBIOS2PEMCU_scratch.BIOS2PEMCU_scratch[0];
				EQ_Post_Cursor = xrBIOS2PEMCU_scratch.BIOS2PEMCU_scratch[1];

			}else if(CMD == Eye_Monitor_CMD){
				Eye_Monitor_stage = 1;
				EyeMonInParaEyeInf.BIOS2PEMCU_Scratch[0] = XBYTE(0xC9D8);
				EyeMonInParaEyeInf.BIOS2PEMCU_Scratch[1] = XBYTE(0xC9D9);			
				EyeMonInParaEyeInf.BIOS2PEMCU_Scratch[2] = XBYTE(0xC9DA);
				EyeMonInParaEyeInf.BIOS2PEMCU_Scratch[3] = XBYTE(0xC9DB);

				EyeMonInParaPointXY.BIOS2PEMCU_Scratch[0] = XBYTE(0xC0F8);
				EyeMonInParaPointXY.BIOS2PEMCU_Scratch[1] = XBYTE(0xC0F9);	
				EyeMonInParaPointXY.BIOS2PEMCU_Scratch[2] = XBYTE(0xC0FA);	
				EyeMonInParaPointXY.BIOS2PEMCU_Scratch[3] = XBYTE(0xC0FB);
				EyeMonInParaResult.Scan_Time = XBYTE(0xC0FC);
			}
						
			STAGE = CMD_STAGE;
	
			Test_Result = Success;

			//;MMIO Rx9D0
			xrPEMCU2BIOS_scratch.PEMCU2BIOS_scratch[0] = Test_Result;
		}
		
			//;Clear interrupt status, MMIO Rx9CC[0]
			xrPEMCU2BIOS_scratch.BIOS2PEMCU_DB = MCU_BIOS2PEMCU_DB;
	
	}


	EnableEQInt();
#ifdef  POSTCODE
	returnN();
#endif
	return;

}

void PE0_MainLoop()
{
#ifdef  POSTCODE
	trace1(PE0_MainLoop_,PE0_stage);
#endif	
	if (PE0_On == 0)
		return;
	if (PE0_stage == WaitINT)
		return;
	if (PE0_Delay100us > 0)
		return;
	
       PEx_State_Switch(PE0_P0, &PE0_stage, &PE0_Delay100us, PE0_config, PE0_SAVE);
#if DBG1300
		EQ_DEBUG_1300[4][0] = (Millisecond>>8);
		EQ_DEBUG_1300[5][0] = Millisecond;
		

#endif

#ifdef  POSTCODE
	returnN();
#endif	
	return;

}

void PE1_MainLoop()
{
#ifdef  POSTCODE
	trace1(PE1_MainLoop_,PE1_stage);
#endif

	if (PE1_On == 0)
		return;
	if (PE1_stage == WaitINT)
		return;
	if (PE1_Delay100us > 0)
		return;

       PEx_State_Switch(PE1_P1, &PE1_stage, &PE1_Delay100us, PE1_config, PE1_SAVE);
#if DBG1300
		 EQ_DEBUG_1300[4][1] = (Millisecond>>8);
		 EQ_DEBUG_1300[5][1] = Millisecond;

#endif

#ifdef  POSTCODE
	returnN();
#endif
	return;

}
void PE2_MainLoop()
{
#ifdef  POSTCODE
	trace1(PE2_MainLoop_,PE2_stage);
#endif	
	if (PE2_On == 0)
		return;
	if (PE2_stage == WaitINT)
		return;
	if (PE2_Delay100us > 0)
		return;
	
       PEx_State_Switch(PE2_P2, &PE2_stage, &PE2_Delay100us, PE2_config, PE2_SAVE);
#if DBG1300
		EQ_DEBUG_1300[4][2] = (Millisecond>>8);
		EQ_DEBUG_1300[5][2] = Millisecond;

#endif

#ifdef  POSTCODE
	returnN();
#endif
	return;

}
void PE3_MainLoop()
{
#ifdef  POSTCODE
	trace1(PE3_MainLoop_,PE3_stage);
#endif	
	if (PE3_On == 0)
		return;
	if (PE3_stage == WaitINT)
		return;
	if (PE3_Delay100us > 0)
		return;	

       PEx_State_Switch(PE3_P3, &PE3_stage, &PE3_Delay100us, PE3_config, PE3_SAVE);
#if DBG1300
		 EQ_DEBUG_1300[4][3] = (Millisecond>>8);
		 EQ_DEBUG_1300[5][3] = Millisecond;

#endif	   
#ifdef  POSTCODE
	returnN();
#endif
	return;
}

void PE4_MainLoop()
{
#ifdef  POSTCODE
	trace1(PE4_MainLoop_,PE4_stage);
#endif	

	if (PE4_On == 0)
		return;
	if (PE4_stage == WaitINT)
		return;
	if (PE4_Delay100us > 0)
		return;

       PEx_State_Switch(PE4_P4, &PE4_stage, &PE4_Delay100us, PE4_config, PE4_SAVE);
#if DBG1300
		 EQ_DEBUG_1300[4][4] = (Millisecond>>8);
		 EQ_DEBUG_1300[5][4] = Millisecond;

#endif	   
#ifdef  POSTCODE
	returnN();
#endif
	return;

}



void PE5_MainLoop()
{
#ifdef  POSTCODE
	trace1(PE5_MainLoop_,PE5_stage);
#endif	

	if (PE5_On == 0)
		return;
	if (PE5_stage == WaitINT)
		return;
	if (PE5_Delay100us > 0)
		return;

       PEx_State_Switch(PE5_P5, &PE5_stage, &PE5_Delay100us, PE5_config, PE5_SAVE);
#if DBG1300
		 EQ_DEBUG_1300[4][5] = (Millisecond>>8);
		 EQ_DEBUG_1300[5][5] = Millisecond;

#endif	   
#ifdef  POSTCODE
	returnN();
#endif
	return;

}
void PE6_MainLoop()
{
#ifdef  POSTCODE
	trace1(PE6_MainLoop_, PE6_stage);
#endif	
	if (PE6_On == 0)
		return;
	if (PE6_stage == WaitINT)
		return;
	if (PE6_Delay100us > 0)
		return;	
       PEx_State_Switch(PE6_P6, &PE6_stage, &PE6_Delay100us, PE6_config, PE6_SAVE);
#if DBG1300
		 EQ_DEBUG_1300[4][6] = (Millisecond>>8);
		 EQ_DEBUG_1300[5][6] = Millisecond;

#endif	   
#ifdef  POSTCODE
	returnN();
#endif
	return;

}

void PE7_MainLoop()
{
#ifdef  POSTCODE
	trace1(PE7_MainLoop_,PE7_stage);
#endif	

	if (PE7_On == 0)
		return;
	if (PE7_stage == WaitINT)
		return;
	if (PE7_Delay100us > 0)
		return;

       PEx_State_Switch(PE7_P7, &PE7_stage, &PE7_Delay100us, PE7_config, PE7_SAVE);
#if DBG1300
		 EQ_DEBUG_1300[4][7] = (Millisecond>>8);
		 EQ_DEBUG_1300[5][7] = Millisecond;

#endif	   
#ifdef  POSTCODE
	returnN();
#endif
	return;

}

#ifdef DUAL_SOCKET_VPI_EQ
void VPI_MainLoop()
{
#ifdef  POSTCODE
	trace1(VPI_MainLoop_,VPI_stage);
#endif	

	if (VPI_On == 0)
		return;
	if (VPI_stage == WaitINT)
		return;
	if (VPI_Delay100us > 0)
		return;

       VPI_State_Switch(VPI_P8, &VPI_stage, &VPI_Delay100us, VPI_config, VPI_SAVE);
#if DBG1300
		 EQ_DEBUG_1300[4][8] = (Millisecond>>8);
		 EQ_DEBUG_1300[5][8] = Millisecond;

#endif	   
#ifdef  POSTCODE
	returnN();
#endif
	return;

}

#endif


//
// Function:Only to Set Cursor, not do RxEQ
//
void 
Set_Cursor_Param(
		UCHAR PEx, 
		UCHAR* PEx_config)
{
	UCHAR i;
	UCHAR LaneX;
	UCHAR temp8;
#ifdef  POSTCODE
	trace1(Set_Cursor_Param_, PEx);
#endif
	
	if (PEx!=VPI_P8){
		for (i = 0; i < PEx_config[0]; i++){
			LaneX = PEx_config[i+1];		
			xrMCUADJ[LaneX].MCU_PRE_CURSOR = EQ_Pre_Cursor;
			xrMCUADJ[LaneX].MCU_CURSOR = EQ_Cursor;
			xrMCUADJ[LaneX].MCU_POST_CURSOR =EQ_Post_Cursor;	
			xrMCUADJ[LaneX].MCU_PRESET = 0;
		}
		//; Set MCU_CHANGE_EQ[0] =1, sent preset value to the TX of RP.
       	xrMCU_CTRL[PEx].MCU_CHANGE_EQ = MCU_PCIE_MCU_CHANGE_EQ;

	}else{
		for (i = 0; i < PEx_config[0]; i++){
			LaneX = PEx_config[i+1];
			
			xrMCUADJVPI[LaneX-2].MCU_PRE_CURSOR_VPI = EQ_Pre_Cursor;
			xrMCUADJVPI[LaneX-2].MCU_CURSOR_VPI = EQ_Cursor;
			xrMCUADJVPI[LaneX-2].MCU_POST_CURSOR_VPI =EQ_Post_Cursor;
		
			xrMCUADJVPI[LaneX-2].MCU_PRESET_VPI = 0;
		}
		//; Set MCU_CHANGE_EQ[0] =1, sent preset value to the TX of RP.
	   	xrMCU_CTRL_VPI.MCU_CHANGE_VPI_EQ = MCU_VPI_MCU_CHANGE_EQ;

		//;Delay 1us
		for (i = 0; i < 5; i++);
    	//_nop_();

		//; Set MCU_PCIE_MCU_P1_OR_EQTNRSTB[0]: 1 -> 0 -> 1 to restart the Rx of RC to do EQ.
		//; Set MCU_PCIE_MCU_P1_OR_EQTNRSTB[0] =0
		
		temp8 = xrMCU_CTRL_VPI.MCU_VPI_RESET_EQ;
		temp8 = temp8 & (~MCU_VPI_MCU_Px_OR_EQTNRSTB);
		xrMCU_CTRL_VPI.MCU_VPI_RESET_EQ = temp8;

		//;Delay 100~200ns
		_nop_();

		//; Set MCU_PCIE_MCU_P1_OR_EQTNRSTB[0] =1
		temp8 = xrMCU_CTRL_VPI.MCU_VPI_RESET_EQ;
		temp8 = temp8 | MCU_VPI_MCU_Px_OR_EQTNRSTB;
		xrMCU_CTRL_VPI.MCU_VPI_RESET_EQ = temp8;
		//;Delay 400us
	}

#ifdef  POSTCODE
	returnN();
#endif
	return;

}


//
// Function:Only to Set Cursor, not do RxEQ
//
void 
Set_Cursor_Param2(
		UCHAR PEx, 
		UCHAR* PEx_config)
{
	UCHAR i;
	UCHAR LaneX;
	UCHAR temp8;
#ifdef  POSTCODE
	trace1(Set_Cursor_Param_, PEx);
#endif

	for (i = 0; i < PEx_config[0]; i++){
		LaneX = PEx_config[i+1];
		
		xrMCUADJ[LaneX].MCU_PRE_CURSOR = BestCursorEw[i].xPreCursor;
		xrMCUADJ[LaneX].MCU_CURSOR = BestCursorEw[i].xCursor;
		xrMCUADJ[LaneX].MCU_POST_CURSOR =BestCursorEw[i].xPostCursor;
	
		xrMCUADJ[LaneX].MCU_PRESET = 0;
	}
	
	if (PEx!=VPI_P8) {
		
		//; Set MCU_CHANGE_EQ[0] =1, sent preset value to the TX of RP.
       	xrMCU_CTRL[PEx].MCU_CHANGE_EQ = MCU_PCIE_MCU_CHANGE_EQ;

	}else{
		// TODO: VPI - to be completed
		//; Set MCU_CHANGE_EQ[0] =1, sent preset value to the TX of RP.
		xrMCU_CTRL_VPI.MCU_CHANGE_VPI_EQ = MCU_VPI_MCU_CHANGE_EQ;

		//;Delay 1us
		for (i = 0; i < 5; i++);
	    //_nop_();

		//; Set MCU_PCIE_MCU_P1_OR_EQTNRSTB[0]: 1 -> 0 -> 1 to restart the Rx of RC to do EQ.
		//; Set MCU_PCIE_MCU_P1_OR_EQTNRSTB[0] =0
		
		temp8 = xrMCU_CTRL_VPI.MCU_VPI_RESET_EQ;
		temp8 = temp8 & (~MCU_VPI_MCU_Px_OR_EQTNRSTB);
		xrMCU_CTRL_VPI.MCU_VPI_RESET_EQ = temp8;

		//;Delay 100~200ns
		_nop_();

		//; Set MCU_PCIE_MCU_P1_OR_EQTNRSTB[0] =1
		temp8 = xrMCU_CTRL_VPI.MCU_VPI_RESET_EQ;
		temp8 = temp8 | MCU_VPI_MCU_Px_OR_EQTNRSTB;
		xrMCU_CTRL_VPI.MCU_VPI_RESET_EQ = temp8;
		//;Delay 400us
	}

#ifdef  POSTCODE
	returnN();
#endif
	return;

}



//
// Function: PCIE EQ handler
//
void 
PEx_State_Switch(
	UCHAR PEx, 
	UCHAR *PEx_stage, 
	UCHAR *PEx_Delay100us, 
	UCHAR* PEx_config, 
	SAVE_LANE_PARAM *PEx_SAVE)
{

	USHORT MCU_PEx_delay, MCU_INT_EQ_PEx;
	UCHAR temp8;
	
#ifdef  POSTCODE
	trace2(PEx_State_Switch_, PEx, *PEx_stage);
#endif	
	MCU_INT_EQ_PEx = MCU_PEx_delay = 1 << PEx;


	switch(*PEx_stage)
	{

		case DoP5:
		{
			break;
		}		

		case DoFineTune:
#if DBG1300
			EQ_DEBUG_1300[1][PEx] = 0x1;
#endif


			if(gPcieDoEqMethod == 0){
				//TxAutoEQ
				Eye_PEx_GetBestParam(PEx, PEx_config,PEx_SAVE);
				*PEx_stage  =  WaitINT;  
			}else if(gPcieDoEqMethod == 1){
				//RxAutoEQ
				RxAutoEQ(PEx, PEx_config,PEx_SAVE);
				*PEx_stage  =  WaitINT;  
			}else if(gPcieDoEqMethod == 2){
				//Fix DOEQ - use setup Preset to DOEQ phase3
				*PEx_stage	=  EndFineTune; 
			}else{
				//24ms timeout - EQ failed
				*PEx_stage  =  WaitINT;  
			}
			break;
	
		case EndFineTune:
		{
			if ((PExDelayFlag & MCU_PEx_delay) == 0)
			{
				if (CMD == Tx_Preset)
				{
					Try_Preset_Value_and_DoRxEQ(PEx, Tx_Preset_Value, PEx_config);
					
				} else if (CMD == Cursor)
				{
				
					Set_Cursor_Param(PEx, PEx_config);
					
				}
				
				//; Set delay count
				*PEx_Delay100us = 1;
				//; Set delay flag
				PExDelayFlag |= MCU_PEx_delay;
				break;

			} else if ((*PEx_Delay100us == 0) && (PExDelayFlag & MCU_PEx_delay)) //;PEx_Delay100us = 0 and MCU_PEx_delay
			{
				//; Clear Delay flag
				PExDelayFlag = PExDelayFlag & (~MCU_PEx_delay);
				//;Check EQ done, MCU_PCIE_EQ_RESULT_DONE = 0
				do {
					temp8 = xrMCU_CTRL[PEx].MCU_EQ_RESULT_DONE & MCU_PCIE_EQ_RESULT_DONE;

				} while (temp8 == 0);

				Read_default_TxRxParam(PEx_config, PEx_SAVE);
				
				//;MMIO RxF0
				xrPEMCU_RV.PEMCU_REG_0[0] = EQ_FS;
				//;MMIO RxF1
				xrPEMCU_RV.PEMCU_REG_0[1] = EQ_LF;				
				*PEx_stage  =  WaitINT;   
				xrMCU_CTRL[PEx].MCU_DONE = MCU_PCIE_MCU_DONE;
				//;Delay 1us
				for (temp8 = 0; temp8 < 5; temp8++);
				xrMCU_CTRL[PEx].MCU_DONE = 0;
				if (INT_PF_EQ_REQ &MCU_INT_EQ_PEx)
				{
					INT_PF_EQ_REQ	= INT_PF_EQ_REQ & (~MCU_INT_EQ_PEx);			
				} 

				break;
			}
			break;
		}			

	}	
#ifdef  POSTCODE
	returnN();
#endif
	return;

}	



#ifdef DUAL_SOCKET_VPI_EQ
 void VPI_State_Switch(UCHAR VPI, UCHAR *VPI_stage, UCHAR *VPI_Delay100us, UCHAR* VPI_config, 
		SAVE_LANE_PARAM *VPI_SAVE)
	{
	
		USHORT MCU_VPI_delay, MCU_INT_EQ_VPI;
		UCHAR temp8;
		
#ifdef  POSTCODE
		trace2(VPI_State_Switch_, VPI, *VPI_stage);
#endif	
		MCU_INT_EQ_VPI = MCU_VPI_delay = 1 ;
	
	
		switch(*VPI_stage)
		{
	
	
			case DoP5:
			{
				break;
			}		
		
			case EndFineTune:
			{

				if ((VPIDelayFlag & MCU_VPI_delay) == 0)
				{
					if (CMD == Tx_Preset)
					{
					  
						Try_Preset_Value_and_DoRxEQ(VPI, Tx_Preset_Value, VPI_config);
	
					} else if (CMD == Cursor)
					{
					
						Set_Cursor_Param(VPI, VPI_config);
						
					}		
					//; Set delay count
					*VPI_Delay100us = 1;
					//; Set delay flag
					VPIDelayFlag |= MCU_VPI_delay;
					break;
	
				} else if ((*VPI_Delay100us == 0) && (VPIDelayFlag & MCU_VPI_delay)) //;PEx_Delay100us = 0 and MCU_PEx_delay
				{

					//; Clear Delay flag
					VPIDelayFlag = VPIDelayFlag & (~MCU_VPI_delay);
					//;Check EQ done, MCU_PCIE_EQ_RESULT_DONE = 0
					do {
						temp8 = xrMCU_CTRL_VPI.MCU_EQ_RESULT_DONE_VPI & MCU_VPI_EQ_RESULT_DONE;
	
					} while (temp8 == 0);
					Read_default_TxRxParam(VPI_config, VPI_SAVE);
					
					//;MMIO RxF0
					xrPEMCU_RV.PEMCU_REG_0[0] = EQ_FS;
					//;MMIO RxF1
					xrPEMCU_RV.PEMCU_REG_0[1] = EQ_LF;				
	
					*VPI_stage	=  WaitINT;   
					
					xrMCU_CTRL_VPI.MCU_DONE_VPI = MCU_VPI_MCU_DONE;
	
					//;Delay 1us
					for (temp8 = 0; temp8 < 5; temp8++);
	
					xrMCU_CTRL_VPI.MCU_DONE_VPI = 0;
	
					if (INT_PF_EQ_REQ_VPI &MCU_INT_EQ_VPI)
					{
						INT_PF_EQ_REQ_VPI	= INT_PF_EQ_REQ_VPI & (~MCU_INT_EQ_VPI);
					} 
	 				
					break;
	
				}
				break;
			}
						
		}	
		
#ifdef  POSTCODE
		returnN();
#endif
		return;
	
	}	
#endif



//
// Function: Read default parameters(Farend device params)
//
void 
Read_default_TxRxParam(
	UCHAR* PEx_config, 
	SAVE_LANE_PARAM *PEx_SAVE)
{
	UCHAR i;
	UCHAR LaneX;
#ifdef  POSTCODE
	trace0(Read_default_TxRxParam_);
#endif	
	
	for (i = 0; i < PEx_config[0]; i++)
	{
		LaneX = PEx_config[i+1];
		Read_Param(LaneX, PEx_SAVE, i);

	}
#ifdef  POSTCODE	
	returnN();
#endif
	return;
}


//
// Function: Read parameters(Farend, FS, LF, Cursor, Preset)
//
void 
Read_Param(
	UCHAR LaneX, 
	SAVE_LANE_PARAM *PEx_SAVE, 
	UCHAR index)
{
	
#ifdef  POSTCODE
	trace1(Read_Param_, LaneX);
#endif
	PEx_SAVE[index].HFOUT = xrLane[LaneX].EphyRxParam.HFOUT;

	PEx_SAVE[index].FS = xrLane[LaneX].EpTxParam.FS;
	PEx_SAVE[index].LF = xrLane[LaneX].EpTxParam.LF;
	PEx_SAVE[index].PRE_CURSOR = xrLane[LaneX].EpTxParam.PRE_CURSOR;
	PEx_SAVE[index].CURSOR = xrLane[LaneX].EpTxParam.CURSOR;
	PEx_SAVE[index].POST_CURSOR = xrLane[LaneX].EpTxParam.POST_CURSOR;
	PEx_SAVE[index].BER = xrLane[LaneX].EpTxParam.BER;

	PEx_SAVE[index].TX_PRESET = xrLane[LaneX].EpTxParam.TX_PRESET;

    if (PEx_SAVE[index].FS != 0) {
		EQ_FS = PEx_SAVE[index].FS ;
		EQ_LF = PEx_SAVE[index].LF;
		//;MMIO RxF2
		xrPEMCU_RV.PEMCU_REG_0[2] = PEx_SAVE[index].PRE_CURSOR;				
		//;MMIO RxF3
		xrPEMCU_RV.PEMCU_REG_0[3] = PEx_SAVE[index].CURSOR;				
		//;MMIO RxF4
		xrPEMCU_RV.PEMCU_REG_1[0] = PEx_SAVE[index].POST_CURSOR;				
		
    }
#ifdef MESSAGE
	msg7(Read_Param_, PEx_SAVE[index].HFOUT, PEx_SAVE[index].FS, PEx_SAVE[index].LF, PEx_SAVE[index].PRE_CURSOR, 
			PEx_SAVE[index].CURSOR, PEx_SAVE[index].POST_CURSOR, PEx_SAVE[index].BER);
#endif

#ifdef  POSTCODE
	returnN();
#endif
	return;

}

//
// Function: fill in Preset and do TX EQ
//
void 
Try_Preset_Value_and_DoRxEQ(
		UCHAR PEx, 
		UCHAR Preset_Value, 
		UCHAR* PEx_config )
{
	UCHAR i;
	UCHAR LaneX;
	UCHAR temp8;
#ifdef  POSTCODE
	trace2(Try_Preset_value_, PEx, Preset_Value);
#endif

    if(PEx!=VPI_P8){
		//fill in the Preset Value, and USE_PRESET=1
		for (i = 0; i < PEx_config[0]; i++){
			LaneX = PEx_config[i+1];
			xrMCUADJ[LaneX].MCU_PRESET = Preset_Value |MCU_PCIE_USE_PRESET;		
		}
		
		//; Set MCU_CHANGE_EQ[0] =1, sent preset value to the TX of RP.
	    xrMCU_CTRL[PEx].MCU_CHANGE_EQ = MCU_PCIE_MCU_CHANGE_EQ;

		Rx_DoEQ(PEx);

	 }else{
		// TODO: VPI - this part to be completed
		for (i = 0; i < PEx_config[0]; i++)
		{
	
			LaneX = PEx_config[i+1];
			xrMCUADJVPI[LaneX-2].MCU_PRESET_VPI = Preset_Value |MCU_PCIE_USE_PRESET;		
		}
		//; Set MCU_CHANGE_EQ[0] =1, sent preset value to the TX of RP.
		xrMCU_CTRL_VPI.MCU_CHANGE_VPI_EQ = MCU_VPI_MCU_CHANGE_EQ;
		//;Delay 1us
		for (i = 0; i < 5; i++);
		//; Set MCU_PCIE_MCU_P1_OR_EQTNRSTB[0]: 1 -> 0 -> 1 to restart the Rx of RC to do EQ.
		//; Set MCU_PCIE_MCU_P1_OR_EQTNRSTB[0] =0
		
		temp8 = xrMCU_CTRL_VPI.MCU_VPI_RESET_EQ;
		temp8 = temp8 & (~MCU_VPI_MCU_Px_OR_EQTNRSTB);
		xrMCU_CTRL_VPI.MCU_VPI_RESET_EQ = temp8;

		//;Delay 100~200ns
		_nop_();

		//; Set MCU_PCIE_MCU_P1_OR_EQTNRSTB[0] =1
		temp8 = xrMCU_CTRL_VPI.MCU_VPI_RESET_EQ;
		temp8 = temp8 | MCU_VPI_MCU_Px_OR_EQTNRSTB;
		xrMCU_CTRL_VPI.MCU_VPI_RESET_EQ = temp8;
	}

#ifdef  POSTCODE
	returnN();
#endif
	return;
}

//
// Function: fill in Cursor and Do RxEQ
//
// TODO: operations for VPI in this routine need to change, the registers should be VPI CFG Space register, but not PCIE EPHY registers
void 
Try_Cursor_Value_and_DoRxEQ(
		UCHAR PEx, 
		UCHAR Pre, 
		UCHAR Cur, 
		UCHAR Post, 
		UCHAR* PEx_config)
{
	UCHAR i;
	UCHAR LaneX;
	UCHAR temp8;
#ifdef  POSTCODE
	trace1(Set_Cursor_Param_, PEx);
#endif

	//fill in the Cursor, and set USE_PRESET=0
	for (i = 0; i < PEx_config[0]; i++){
		LaneX = PEx_config[i+1];	
		xrMCUADJ[LaneX].MCU_PRE_CURSOR = Pre;
		xrMCUADJ[LaneX].MCU_CURSOR = Cur;
		xrMCUADJ[LaneX].MCU_POST_CURSOR =Post;
	
		xrMCUADJ[LaneX].MCU_PRESET = 0;
	}
	
	if (PEx!=VPI_P8) {

		//; Set MCU_CHANGE_EQ[0] =1, sent preset value to the TX of RP.
       	xrMCU_CTRL[PEx].MCU_CHANGE_EQ = MCU_PCIE_MCU_CHANGE_EQ;

		Rx_DoEQ(PEx);
	}else{
		// TODO: VPI - this part to be completed
		//; Set MCU_CHANGE_EQ[0] =1, sent preset value to the TX of RP.
		   xrMCU_CTRL_VPI.MCU_CHANGE_VPI_EQ = MCU_VPI_MCU_CHANGE_EQ;

		//;Delay 1us
		for (i = 0; i < 5; i++);
	    //_nop_();

		//; Set MCU_PCIE_MCU_P1_OR_EQTNRSTB[0]: 1 -> 0 -> 1 to restart the Rx of RC to do EQ.
		//; Set MCU_PCIE_MCU_P1_OR_EQTNRSTB[0] =0
		
		temp8 = xrMCU_CTRL_VPI.MCU_VPI_RESET_EQ;
		temp8 = temp8 & (~MCU_VPI_MCU_Px_OR_EQTNRSTB);
		xrMCU_CTRL_VPI.MCU_VPI_RESET_EQ = temp8;

		//;Delay 100~200ns
		_nop_();

		//; Set MCU_PCIE_MCU_P1_OR_EQTNRSTB[0] =1
		temp8 = xrMCU_CTRL_VPI.MCU_VPI_RESET_EQ;
		temp8 = temp8 | MCU_VPI_MCU_Px_OR_EQTNRSTB;
		xrMCU_CTRL_VPI.MCU_VPI_RESET_EQ = temp8;
		//;Delay 400us
	   	PemcuWrite8(0xC0F5,0xFF,0xAA); //setting DO-EQ Flag
	 	//  PemcuRead8(0xC9D8);
	}

#ifdef  POSTCODE
	returnN();
#endif
	return;

}



//
// Function: Disable EQ interrupt pin on 8051 PEMCU
//	
void 
DisableEQInt()
{
#ifdef  POSTCODE
    	trace0(DisableEQInt_);
#endif	
    EAL = 0;    //Disable interrupt
    EX0 = 0;   //Disable EQ interrupt
#ifdef  POSTCODE
	returnN();
#endif
	return;

}


//
// Function: Enable EQ interrupt pin on 8051 PEMCU
//
void 
EnableEQInt()
{
#ifdef  POSTCODE
    	trace0(EnableEQInt_);
#endif
	EAL = 1;			//Enable Interrupt
    EX0 = 1;			//Enable EQ interrupt
#ifdef  POSTCODE
	returnN();
#endif
	return;

}

//
//;Dynamic clock support
//
#if 0
void 
Dynamic_Clock_handler()
{
	UCHAR temp8;
#ifdef  POSTCODE
    	trace0(Dynamic_Clock_handler_);
#endif
	//;MMIO Rx9C0
	temp8 = xrOTHER_STS.Dynamic_clock;

	if (!(temp8 & MCU_INT_REQ)) 
	{

		if ((INT_PF_EQ_REQ == 0) && (INT_EP_EQ_REQ == 0))
		{
		 	xrOTHER_STS.Dynamic_clock = MCU_SLEEP_REQ;
		}


	}

#ifdef  POSTCODE
	returnN();
#endif
	return;

}
#endif


//
// Function: EQ done. Exit EQ phase3/Phase2
//
void
EQ_Done(UCHAR PEx)
{
	unsigned char temp8;
	
	xrMCU_CTRL[PEx].MCU_DONE = MCU_PCIE_MCU_DONE;
	//;Delay 1us
	for (temp8 = 0; temp8 < 5; temp8++);
	xrMCU_CTRL[PEx].MCU_DONE = 0;

}


//
// Function: Just to do RxEQ
//
void 
Rx_DoEQ(UCHAR PEx)
{
	UCHAR i;
	UCHAR temp8;

	temp8 = xrMCU_CTRL[PEx].MCU_PCIE_RESET_EQ;
	temp8 = temp8 & (~MCU_PCIE_MCU_Px_OR_EQTNRSTB);
	xrMCU_CTRL[PEx].MCU_PCIE_RESET_EQ = temp8;

	//delay 50us
	for (i = 0; i < 200; i++);
	for (i = 0; i < 200; i++);
	for (i = 0; i < 100; i++);

	//; Set MCU_PCIE_MCU_P1_OR_EQTNRSTB[0] =1
	temp8 = xrMCU_CTRL[PEx].MCU_PCIE_RESET_EQ;
	temp8 = temp8 | MCU_PCIE_MCU_Px_OR_EQTNRSTB;
	xrMCU_CTRL[PEx].MCU_PCIE_RESET_EQ = temp8;

	//delay 100us
	for (i = 0; i < 200; i++);
	for (i = 0; i < 200; i++);
	for (i = 0; i < 200; i++);
	for (i = 0; i < 200; i++);
	for (i = 0; i < 200; i++);

	return;
}




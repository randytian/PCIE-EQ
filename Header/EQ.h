//**************************************************************************
//**************************************************************************
//**                                                                      **
//**  Copyright (c) 2015 - 2017 Shanghai Zhaoxin Semiconductor Co., Ltd.  **
//**                                                                      **
//**************************************************************************
//**************************************************************************

#ifndef _EQ_H_
#define _EQ_H_

#include <string.h>
#include <intrins.h>
#include "Header/type.h"
#include "Header/REG51XC.H"
#include "trace.h"
#include "Eye_monitor.h"




#define XBYTE(x)   (*((unsigned char volatile xdata*)(x)))



//extern LANE_PARAM xdata 	xrLane[19];


//;PEMCU revision
// 0xE0~0xFF
typedef struct _PEMCU_RV
{
//;0xE0~0xEF
    volatile UCHAR RP_CFG;	
    volatile UCHAR RSVD0F7_E1;
    volatile UCHAR RSVD0F7_E2;
    volatile UCHAR RSVD0F7_E3;
	
    volatile ULONG RsvdDw[3];
//;0xF0~0xFF
    volatile UCHAR PEMCU_REG_0[4];
    volatile UCHAR PEMCU_REG_1[4];
    volatile UCHAR PEMCU_REG_2[4];
    volatile UCHAR PEMCU_REG_3[4];


}PEMCU_RV;


//;PEMCU Internal register
typedef struct _PEMCU_INTERNAL
{
//    volatile UCHAR DBG_PEMCU[4];   //;Rx00 ~ 03: Register for PEMCU Debug	
    volatile UCHAR SRCADDR_L[4];   //;Rx04 ~ 07: Register for PEMCU DMA  Source Address Low 32bit	
    volatile UCHAR SRCADDR_H[4];   //;Rx08 ~ 0B: Register for PEMCU DMA  Source Address high 32bit	
    volatile UCHAR DESADDR_L[4];   //;Rx0C ~ 0F: Register for PEMCU DMA  Destination Address Low 32bit
	
    volatile UCHAR DESADDR_H[4];  //;Rx10 ~ 13: Register for PEMCU DMA  Destination Address high 32bit
    volatile UCHAR BYTCNT[2];      //;Rx14 ~ 15: DMA Engine Byte Count  The length of PEMCU DMA transfer. Byte in unit.
    volatile UCHAR RWFLAG;    //;Rx16: DMA Engine Read or Write Flag , 0: Read data from system memory, 1:Write to system memory	    
    volatile UCHAR DMAEN;     //;Rx17: DMA Engine Read or Write Enable	
    volatile UCHAR DMAACT;   //;Rx18: DMA Engine Read or Write Action
    volatile UCHAR RSV0;


}PEMCU_INTERNAL;

#define MCU_DMA_RWFLAG              			(1 << 0)
#define MCU_DMA_DMAEN              				(1 << 0)
#define MCU_DMA_DMAACT              			(1 << 0)



/*
RC EPHY Rx parameter register block definition
Note: HW only use bit0~4 of each byte, bit5~7 are 0 by default
CHX001 had 24 lane from 0xA00~0xB70
*/
// 0x00~0x07
typedef struct _EPHY_RX_PARAM
{
    volatile UCHAR DCOUT;   //;bit 0~4
    volatile UCHAR HFOUT;
    volatile UCHAR OSOUT;
    volatile UCHAR W1OUT;
    volatile UCHAR W2OUT;
    volatile UCHAR RSV0;
    volatile UCHAR RSV1;
    volatile UCHAR RSV2;    //; bit 1:TX_PRESET, bit 0: RCV
}EPHY_RX_PARAM;

#define MCU_PCIE_FAREND_USE_TX_PRESET            (1 << 1)
#define MCU_PCIE_FAREND_RCV               			(1 << 0)
/*
EP Tx(FAREND) parameter and BER register block definition
*/
// 0x08 ~0x0F
typedef struct _EP_TX_PARAM
{
    volatile UCHAR FS;//HW use bit0~5
    volatile UCHAR LF;//HW use bit0~5
    volatile UCHAR TX_PRESET;//HW use bit0~3
    volatile UCHAR PRE_CURSOR;//C-1, HW use bit0~5
    volatile UCHAR CURSOR;//C, HW use bit0~5
    volatile UCHAR POST_CURSOR;//C+1, HW use bit0~5
    volatile UCHAR BER;// Bit Error Rate
    volatile UCHAR TXPRESET_RCV;    //; bit 1:TX_PRESET, bit 0: RCV   
}EP_TX_PARAM;

/*
Each lane's parameter register block definition
*/
typedef struct _LANE_PARAM
{
    EPHY_RX_PARAM EphyRxParam;
    EP_TX_PARAM EpTxParam;
}LANE_PARAM;

/*
Each lane's interface for MCU adjust RC Tx paramter
*/
//;Rx2B00 ~Rx2C70

#define MCU_PCIE_USE_PRESET                    (1 << 4)

typedef struct _MCU_ADJ_PARAM
{
	volatile UCHAR MCU_PRESET;
	volatile UCHAR MCU_PRE_CURSOR;
	volatile UCHAR MCU_CURSOR;
	volatile UCHAR MCU_POST_CURSOR;    
	
       volatile ULONG RsvdDw[3];    
	   
}MCU_ADJ_PARAM;

typedef struct _MCU_ADJ_PARAM_VPI
{
	volatile UCHAR MCU_PRESET_VPI;
	volatile UCHAR MCU_PRE_CURSOR_VPI;
	volatile UCHAR MCU_CURSOR_VPI;
	volatile UCHAR MCU_POST_CURSOR_VPI;    
	
    volatile ULONG RsvdDw_VPI[3];    
	   
}MCU_ADJ_PARAM_VPI;

//JNY add for VPI EQ

#define MCU_VPI_INT_EQ_enable               (1 << 0)      //Rx808[0]:MCU INT_EQ Enable
#define MCU_VPI_MCU_CHANGE_EQ            (1 << 0)         //RX801[0]: MCU Change EQ
#define MCU_VPI_EQTNEN                     	 (1 << 1)    //Rx802[1]: MCU_EQTNEN
#define MCU_VPI_MCU_Px_OR_EQTNRSTB  (1 << 0)             //Rx802[0]: MCU sets RXPWR into P1 or controls EQTNRSTB to reset EQ tuning
#define MCU_VPI_EQCTL_SEL                     	 (1 << 0)  //Rx803[0]: MCU Set EQ Tuning
#define MCU_VPI_EQ_RESULT_DONE           (1 << 0)        //Rx805[0]:EQ Result Is Ready 
#define MCU_VPI_MCU_DONE                      (1 << 0)   //Rx804[0]: MCU EQ Job Finishes
#define MCU_VPI_EP_EQ_REQ                     (1 << 1)   //Rx80B[1]: Link EQ REQ 

/*
MCU control interface
*/
//;RxC00 ~ RxC80


#define MCU_PCIE_INT_EQ_enable               (1 << 0)
#define MCU_PCIE_MCU_CHANGE_EQ            (1 << 0)
#define MCU_PCIE_EQTNEN                     	 (1 << 1)
#define MCU_PCIE_MCU_Px_OR_EQTNRSTB  (1 << 0)
#define MCU_PCIE_EQCTL_SEL                     	 (1 << 0)
#define MCU_PCIE_EQ_RESULT_DONE           (1 << 0)
#define MCU_PCIE_MCU_DONE                      (1 << 0)
#define MCU_PCIE_EP_EQ_REQ                     (1 << 1)


typedef struct _MCU_CTRL
{

	volatile UCHAR Rsvd0;
	volatile UCHAR MCU_CHANGE_EQ;
	volatile UCHAR MCU_PCIE_RESET_EQ;
	volatile UCHAR MCU_PCIE_SET_EQ;
	
	volatile UCHAR MCU_DONE;
	volatile UCHAR MCU_EQ_RESULT_DONE;
	volatile UCHAR Rsvd1;
	volatile UCHAR Rsvd2;
	
	volatile UCHAR MCU_INT_EQ_EN_PEx;
	volatile UCHAR MCU_R_EQPH1_BER_PEx;
	volatile UCHAR MCU_PHYLS_STATE_PEx;
	volatile UCHAR MCU_LINK_EQ_REQ_PEx;

	volatile ULONG RsvdDw;
	
}MCU_CTRL;

//JNY add for VPI EQ--s   
typedef struct _MCU_CTRL_VPI
{
	volatile UCHAR INT_TO_MCU_VPI;     //;D7F0 Rx800 :INT to MCU
	volatile UCHAR MCU_CHANGE_VPI_EQ;  //; D7F0 Rx801 : MCU Change EQ Setting
	volatile UCHAR MCU_VPI_RESET_EQ;  //;D7F0 Rx802 : MCU Reset EQ Tuning
	volatile UCHAR MCU_VPI_SET_EQ;    //;D7F0 Rx803 : MCU Set EQ Tuning
	
	volatile UCHAR MCU_DONE_VPI;            //;D7F0 Rx804 : MCU Work Finish
	volatile UCHAR MCU_EQ_RESULT_DONE_VPI;  //;D7F0 Rx805 : MCU Result is Ready
	volatile UCHAR Rsvd1;               //;D7F0 Rx806 : Reserved
	volatile UCHAR Rsvd2;               //;D7F0 Rx807 : Reserved
	
	volatile UCHAR MCU_INT_EQ_EN_VPI;    //;D7F0 Rx808 : MCU INT_EQ Enable
	volatile UCHAR MCU_R_EQPH1_BER_VPI;  //;D7F0 Rx809 : R_EQPH1_BER
	volatile UCHAR MCU_PHYLS_STATE_VPI;  //;D7F0 Rx80A : reserved
	volatile UCHAR MCU_LINK_EQ_REQ_VPI;  //;D7F0 Rx80B : Link and EP EQ REQ

	volatile ULONG RsvdDw;   //;D7F0 Rx80C-Rx80F : Reserved
}MCU_CTRL_VPI;

//JNY add for VPI EQ--e
/*
Save EP Tx Param and RP HFOUT
*/

typedef struct _SAVE_LANE_PARAM
{
    volatile UCHAR HFOUT;
    volatile UCHAR FS;//HW use bit0~5
    volatile UCHAR LF;//HW use bit0~5	
    volatile UCHAR TX_PRESET; //HW use bit0-5
    volatile UCHAR PRE_CURSOR;//C-1, HW use bit0~5
    volatile UCHAR CURSOR;//C, HW use bit0~5
    volatile UCHAR POST_CURSOR;//C+1, HW use bit0~5
    volatile UCHAR BER;// Bit Error Rate
    volatile UCHAR Rsvd;
}SAVE_LANE_PARAM;

#define Max_Try_Count   2


#define PE0_P0 0
#define PE1_P1 1
#define PE2_P2 2
#define PE3_P3 3
#define PE4_P4 4
#define PE5_P5 5
#define PE6_P6 6
#define PE7_P7 7
#define VPI_P8 9  //JNY add for VPI Config 

/*
PEMCU external interrupt status
Rx9D4~Rx9D7
*/
typedef struct _PEMCU_EXTERNAL_INTERRUPT
{
    volatile UCHAR PF_EQ_REQ_PEx_0;       //;Rx9D4
    volatile UCHAR PF_EQ_REQ_PEx_1;       //;Rx9D5

    volatile UCHAR EP_EQ_REQ_PEx_0;      //Rx9D6    
    volatile UCHAR EP_EQ_REQ_PEx_1;      //Rx9D7
	
}PEMCU_EXTERNAL_INTERRUPT;

//JNY add for VPI EQ---s
//typedef struct _PEMCU_EXTERNAL_VPI_INTERRUPT
//{
//	volatile UCHAR INT_TO_MCU; 	  //;Rx800
	
//}PEMCU_EXTERNAL_VPI_INTERRUPT;
//JNY add for VPI EQ---e

//;Rx9D4~Rx9D5
#define MCU_INT_PF_EQ_REQ_PE0  (1 << PE0_P0)
#define MCU_INT_PF_EQ_REQ_PE1  (1 << PE1_P1)
#define MCU_INT_PF_EQ_REQ_PE2  (1 << PE2_P2)
#define MCU_INT_PF_EQ_REQ_PE3  (1 << PE3_P3)
#define MCU_INT_PF_EQ_REQ_PE4  (1 << PE4_P4)
#define MCU_INT_PF_EQ_REQ_PE5  (1 << PE5_P5)
#define MCU_INT_PF_EQ_REQ_PE6  (1 << PE6_P6)
#define MCU_INT_PF_EQ_REQ_PE7  (1 << PE7_P7)

//;D7F0 VPIL Rx800[0]:PF_EQ_REQ--s
#define MCU_INT_PF_EQ_REQ_VPI  (1 << 0)
#define MCU_INT_EP_EQ_REQ_VPI  (1 << 1)
//;D7F0 VPIL Rx800[1]:EP_EQ_REQ--e

#define MCU_INT_BIOS2PEMCU_DB   (1 << 6)

//;Rx9D6~Rx9D7
#define MCU_INT_EP_EQ_REQ_PE0  (1 << PE0_P0)
#define MCU_INT_EP_EQ_REQ_PE1  (1 << PE1_P1)
#define MCU_INT_EP_EQ_REQ_PE2  (1 << PE2_P2)
#define MCU_INT_EP_EQ_REQ_PE3  (1 << PE3_P3)
#define MCU_INT_EP_EQ_REQ_PE4  (1 << PE4_P4)
#define MCU_INT_EP_EQ_REQ_PE5  (1 << PE5_P5)
#define MCU_INT_EP_EQ_REQ_PE6  (1 << PE6_P6)
#define MCU_INT_EP_EQ_REQ_PE7  (1 << PE7_P7)



#define GET_ABS(x) ((x) > 0 ? (x) : -(x))

/*
Dynamic clock
Rx9C0
*/
typedef struct _PEMCU_OTHER_INTERRUPT
{

	volatile UCHAR Dynamic_clock;   		//;Rx9C0
	volatile UCHAR Rsvd0[3];				//;Rx9C1~Rx9C3
	
	volatile UCHAR Clock_Gating_CTL;		//;Rx9C4
	volatile UCHAR JTAGEN;				//;Rx9C5
	volatile UCHAR Rsvd1[2];				//;Rx9C6~Rx9C7
	
}PEMCU_OTHER_INTERRUPT;

/*
PEMCU2BIOS communicate
Rx9C8
*/

typedef struct _PEMCU2BIOS_scratch
{

	volatile UCHAR PEMCU2BIOS_DB;		//;Rx9C8
	volatile UCHAR Rsvd0[3];				//;Rx9C9~Rx9CB

	volatile UCHAR BIOS2PEMCU_DB;            //;Rx9CC
	volatile UCHAR Rsvd2[3];				//;Rx9CD~Rx9CF
	
	volatile UCHAR PEMCU2BIOS_scratch[3];	//;Rx9D0 ~Rx9D3
	
}PEMCU2BIOS_scratch;

/*
BIOS2PEMCU communicate
Rx9D8
*/

typedef struct _BIOS2PEMCU_scratch
{
	volatile UCHAR BIOS2PEMCU_scratch[4];   //;Rx9D8~Rx9DB
	
}BIOS2PEMCU_scratch;


//#define Dynamic_clock 			0x9C0

//#define PEMCU2BIOS_DB			0x9C8

//#define BIOS2PEMCU_DB			0x9CC

#define PEMCU2BIOS_scratch_0	0x9D0
#define PEMCU2BIOS_scratch_1	0x9D1
#define PEMCU2BIOS_scratch_2	0x9D2
#define PEMCU2BIOS_scratch_3	0x9D3


//#define PF_EQ_REQ_PEx_0		0x9D4
//#define PF_EQ_REQ_PEx_1		0x9D5

//#define EP_EQ_REQ_PEx_0		0x9D6
//#define EP_EQ_REQ_PEx_1		0x9D7

#define BIOS2PEMCU_scratch_0	0x9D8
#define BIOS2PEMCU_scratch_1	0x9D9
#define BIOS2PEMCU_scratch_2	0x9DA
#define BIOS2PEMCU_scratch_3	0x9DB

#define Failed      					0x10E
#define Ruled 					0x10F

typedef struct _REGISTER_ARRAY
{
	volatile UCHAR ARRAY[0x1000];


}REGISTER_ARRAY;

//;Rx9C0
#define MCU_SLEEP_REQ  						(1 << 2)
#define MCU_PEMCU_CLK_EN  					(1 << 1)
#define MCU_INT_REQ  						(1 << 0)
//;Rx9C4
#define MCU_PEMCU_CLOCK_GATING_CTL  		(1 << 0)
//;Rx9C8
#define MCU_PEMCU2BIOS_DB  				(1 << 0)
//;Rx9CC
#define MCU_BIOS2PEMCU_DB  				(1 << 0)

/////////Command///////////////////////////////

#define CMD_STAGE 	1
#define DATA_STAGE 	2
#define Read_CMD   1
#define Write_CMD  2
#define Tx_Preset  3
#define Cursor  4

#define Success  1
//#define Failed  2


#define MCU_BIOS2PEMCU_CMD_MASK				0x0F
#define MCU_BIOS2PEMCU_CMD_value_MASK     	0x10

#define MCU_BIOS2PEMCU_CMD_ADD_LO_MASK  	0xF8
#define MCU_BIOS2PEMCU_CMD_BIT_MASK        	0x07

/////////Function Call////////////////////////////


void EQ_INIT();
void PE0_MainLoop();
void PE1_MainLoop();
void PE2_MainLoop();
void PE3_MainLoop();
void PE4_MainLoop();
void PE5_MainLoop();
void PE6_MainLoop();
void PE7_MainLoop();
void VPI_MainLoop();



void Read_Param (UCHAR LaneX, SAVE_LANE_PARAM *PEx_SAVE, UCHAR index );
void Read_default_TxRxParam(UCHAR* PEx_config, SAVE_LANE_PARAM *PEx_SAVE);
void Try_Preset_Value_and_DoRxEQ(UCHAR PEx, UCHAR Preset_Value, UCHAR* PEx_config );
void Try_Cursor_Value_and_DoRxEQ(UCHAR PEx, UCHAR Pre, UCHAR Cur, UCHAR Post, UCHAR* PEx_config);

void DisableEQInt();
void EnableEQInt();
void Check_Param(UCHAR LaneX, SAVE_LANE_PARAM *PEx_SAVE, UCHAR index);
void Check_PEx_TxRxParam(UCHAR* PEx_config, SAVE_LANE_PARAM *PEx_SAVE);
void Try_Fine_tune(UCHAR PEx, UCHAR* PEx_config, SAVE_LANE_PARAM *PEx_SAVE );
void Check_HFOUT(UCHAR PEx, UCHAR LaneX, SAVE_LANE_PARAM *PEx_SAVE,  UCHAR index);
void Set_Final_Param(UCHAR PEx, UCHAR* PEx_config, SAVE_LANE_PARAM *PEx_SAVE );
void PEx_State_Switch(UCHAR PEx, UCHAR *PEx_stage, UCHAR *PEx_Delay100us, UCHAR* PEx_config, 
	SAVE_LANE_PARAM *PEx_SAVE);
void VPI_State_Switch(UCHAR VPI, UCHAR *VPI_stage, UCHAR *VPI_Delay100us, UCHAR* VPI_config, 
	SAVE_LANE_PARAM *VPI_SAVE);
void Dynamic_Clock_handler();


void Set_Cursor_Param(UCHAR PEx, UCHAR* PEx_config);

void Set_Cursor_Param2(UCHAR PEx, UCHAR* PEx_config);


void
EQ_Done(UCHAR PEx);

void 
Rx_DoEQ(UCHAR PEx);


#endif


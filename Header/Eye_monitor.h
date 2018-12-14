//**********************************************************************
//**********************************************************************
//**                                                                  **
//**     Copyright (c) 2015 Shanghai Zhaoxin Semiconductor Co., Ltd.  **
//**                                                                  **
//**********************************************************************
//**********************************************************************
#ifndef _EYE_MONITOR_H_
#define _EYE_MONITOR_H_

#include <string.h>
#include <intrins.h>
#include "Header/type.h"
#include "Header/REG51XC.H"

#include "REG_CHX002_PCIEPHY.h"




/*****************************************************************************/
/*****************************************************************************/
/*****************************************************************************/

//
//this control function for EM
// TODO: more code need this !
#define EYE_MONITOR 1

#if EYE_MONITOR
	#define Eye_Monitor_DEBG 
#endif


#define MCU_PCIE_BASE  0xC000
#define MCU_VPI_BASE   0xB700

#define EYE_FUNCTION_DISABLE 0
#define EYE_FUNCTION_HALF_RATE  2
#define EYE_FUNCTION_FULL_RATE  3

#define Eye_Monitor_CMD 5



#define XBYTE(x)   (*((unsigned char volatile xdata*)(x)))
#define XWORD(x)   (*((unsigned int volatile xdata*)(x)))

/*****************************************************************************/
/*****************************************************************************/
/*****************************************************************************/
#define PCIEPHYCFG_EYE_MONITOR		0x2900	//Eye monitor
    #define PCIEPHYCFG_MCU_EYESCANTM_PENN			0xFF	//0/x/x/x Timer limit 
#define PCIEPHYCFG_EYE_MONITOR_2		0x2901	//Eye monitor 2
    #define PCIEPHYCFG_REYECLKEN			BIT15	//0/x/x/x EYE monitor clock gate enable signal
    #define PCIEPHYCFG_EYESCAN_DONE_PENN			BIT14	//0/x/x/x EYE SCAN done
    #define PCIEPHYCFG_MCU_EYESCANEN_PENN			BIT13	//0/x/x/x Eye scan enable 
    #define PCIEPHYCFG_EQ_PORT_NAME			0x1FF0	//0/x/x/x The port doing EQ and EYE SCAN
    #define PCIEPHYCFG_LANE_SEL			(BIT1 + BIT2 + BIT3)	//0/x/x/x LANE SELECT
    #define PCIEPHYCFG_ALL_PORT			BIT0	//0/x/x/x EQ port need care all port
#define PCIEPHYCFG_EYE_MONITOR_3		0x2903	//Eye monitor 3
    #define PCIEPHYCFG_RSV_29003			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_PH_OS			0x7F	//0/x/x/x X value
#define PCIEPHYCFG_EYE_MONITOR_4		0x2904	//Eye monitor 4
    #define PCIEPHYCFG_RSV_29004			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_EQTNVTH			0x3F	//0/x/x/x Y value
#define PCIEPHYCFG_EYE_MONITOR_5		0x2905	//Eye monitor 5
    #define PCIEPHYCFG_RSV_29005			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_PH_OS_2			0x7F	//0/x/x/x X value
#define PCIEPHYCFG_EYE_MONITOR_6		0x2906	//Eye monitor 6
    #define PCIEPHYCFG_RSV_29006			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_EQTNVTH_2			0x3F	//0/x/x/x Y value
#define PCIEPHYCFG_EYE_MONITOR_7		0x2907	//Eye Monitor 7
    #define PCIEPHYCFG_RSV_2907			(BIT5 + BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_R_EYE_MANU_MUX			BIT4	//1b/x/x/x Manual Set and Eyemoniter Scan Mux
    #define PCIEPHYCFG_RBER_THRESHHOLD			0xF	//0/x/x/x EYE ERROR Threshhold
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0		0x2A00	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_31_0			0xFFFFFFFF	//HwInit/x/x/x The Register for EYE Monitor value




/*****************************************************************************/
/*****************************************************************************/
/*****************************************************************************/
/*Define Rx9D8-9DB for Bios to PEMCU in Data cycle*/
typedef union EyeMonitorInputPara_9D8 {
	UCHAR  BIOS2PEMCU_Scratch[4];
	struct {
			UCHAR EyeMonitorMethod:8;//bit 0:7
			UCHAR EyeErrorThreshold:8;//bit 8:15
			UCHAR PhyX:8; //bit16-23 
			UCHAR PciePortNum:8; //bit 24-31
		}Bits;
}EyeMonInPa_9D8,*pEyeMonInPa_9D8;

typedef union EyeMonitorInputPara_F8 {
	UCHAR BIOS2PEMCU_Scratch[4];
	struct {
			UCHAR MCU_PH_OS:8;
			UCHAR MCU_EQTNVTH:8;
			UCHAR MCU_PH_OS_2:8; 
			UCHAR MCU_EQTNVTH_2:8; 
		}Bits;
}EyeMonInPa_F8,*pEyeMonInPa_F8;

typedef struct EyeMonitorInputPara_FB {
	UCHAR Scan_Time; 
	UCHAR Reserved1;
	UCHAR Reserved2;
	UCHAR Reserved3;
}EyeMonInPa_FB,*pEyeMonInPa_FB;

//EyeMonInPa Variable;
//Variable.BIOS2PEMCU_Scratch = 0x12345678;
//Variable.PemcuReg_1_Data.EyeMonitorMethod == 0x8;
//Variable.PemcuReg_1_Data.PcieGenSpeed == 0x7;
//....
void EyeMonMode1or2(UCHAR *EyeMonitor_stage);
UCHAR PemcuRead8(USHORT Address);
void PemcuWrite8(USHORT Address, UCHAR Mask, UCHAR Value);
void EyeMonitorFunction();


void
EyeMonitorEnable(unsigned char Eme);




#endif


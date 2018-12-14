//*************************************************************************************
//*************************************************************************************
//**                                                                                 **
//**     Copyright (c) 2015 Shanghai Zhaoxin Semiconductor Co., Ltd.                 **
//**    
//**     author: JennyChen    Date:04/26/18                                          **
//*************************************************************************************
//*************************************************************************************

#include "Header/REG51XC.H"
#include <stdlib.h>
#include <string.h>
#include "stdio.h"
#include "Header/Eye_monitor.h"
#include "Header/Eye_monitor2.h"



extern EyeMonInPa_9D8 EyeMonInParaEyeInf;
extern EyeMonInPa_F8 EyeMonInParaPointXY;
extern EyeMonInPa_FB EyeMonInParaResult;
extern volatile UCHAR Lane_Num;
extern volatile UCHAR CMD;
extern volatile UCHAR Eye_Monitor_stage;



void PemcuWrite8(USHORT Address, UCHAR Mask, UCHAR Value)
{
	UCHAR D8=0;
	D8 = XBYTE(Address);
    D8 = (D8 & (~Mask) | Value);
    XBYTE(Address) = D8;
}



UCHAR PemcuRead8(USHORT Address)
{
	UCHAR D8=0;
	D8 = XBYTE(Address);
    return D8;

}


/**
	@Param: Eme  
		0: disable eye monitor
		2: half-rate eye monitor
		3: full-rate eye monitor
**/
void
EyeMonitorEnable(unsigned char Eme)
{	
	PemcuWrite8(MCU_PCIE_BASE+PCIEPHYCFG_RCV_CDR_EQ_CTL_1_LANE_00,PCIEPHYCFG_FHP00_ABCSEL_CDR,Eme<<2);
	PemcuWrite8(MCU_PCIE_BASE+PCIEPHYCFG_RCV_CDR_EQ_CTL_1_LANE_01,PCIEPHYCFG_FHP00_ABCSEL_CDR,Eme<<2);
	PemcuWrite8(MCU_PCIE_BASE+PCIEPHYCFG_RCV_CDR_EQ_CTL_1_LANE_02,PCIEPHYCFG_FHP00_ABCSEL_CDR,Eme<<2);
	PemcuWrite8(MCU_PCIE_BASE+PCIEPHYCFG_RCV_CDR_EQ_CTL_1_LANE_03,PCIEPHYCFG_FHP00_ABCSEL_CDR,Eme<<2);
	PemcuWrite8(MCU_PCIE_BASE+PCIEPHYCFG_RCV_CDR_EQ_CTL_1_LANE_04,PCIEPHYCFG_FHP00_ABCSEL_CDR,Eme<<2);
	PemcuWrite8(MCU_PCIE_BASE+PCIEPHYCFG_RCV_CDR_EQ_CTL_1_LANE_05,PCIEPHYCFG_FHP00_ABCSEL_CDR,Eme<<2);
	PemcuWrite8(MCU_PCIE_BASE+PCIEPHYCFG_RCV_CDR_EQ_CTL_1_LANE_06,PCIEPHYCFG_FHP00_ABCSEL_CDR,Eme<<2);
	PemcuWrite8(MCU_PCIE_BASE+PCIEPHYCFG_RCV_CDR_EQ_CTL_1_LANE_07,PCIEPHYCFG_FHP00_ABCSEL_CDR,Eme<<2);
	PemcuWrite8(MCU_PCIE_BASE+PCIEPHYCFG_RCV_CDR_EQ_CTL_1_LANE_08,PCIEPHYCFG_FHP00_ABCSEL_CDR,Eme<<2);
	PemcuWrite8(MCU_PCIE_BASE+PCIEPHYCFG_RCV_CDR_EQ_CTL_1_LANE_09,PCIEPHYCFG_FHP00_ABCSEL_CDR,Eme<<2);
	PemcuWrite8(MCU_PCIE_BASE+PCIEPHYCFG_RCV_CDR_EQ_CTL_1_LANE_10,PCIEPHYCFG_FHP00_ABCSEL_CDR,Eme<<2);
	PemcuWrite8(MCU_PCIE_BASE+PCIEPHYCFG_RCV_CDR_EQ_CTL_1_LANE_11,PCIEPHYCFG_FHP00_ABCSEL_CDR,Eme<<2);
	PemcuWrite8(MCU_PCIE_BASE+PCIEPHYCFG_RCV_CDR_EQ_CTL_1_LANE_12,PCIEPHYCFG_FHP00_ABCSEL_CDR,Eme<<2);
	PemcuWrite8(MCU_PCIE_BASE+PCIEPHYCFG_RCV_CDR_EQ_CTL_1_LANE_13,PCIEPHYCFG_FHP00_ABCSEL_CDR,Eme<<2);
	PemcuWrite8(MCU_PCIE_BASE+PCIEPHYCFG_RCV_CDR_EQ_CTL_1_LANE_14,PCIEPHYCFG_FHP00_ABCSEL_CDR,Eme<<2);
	PemcuWrite8(MCU_PCIE_BASE+PCIEPHYCFG_RCV_CDR_EQ_CTL_1_LANE_15,PCIEPHYCFG_FHP00_ABCSEL_CDR,Eme<<2);
}





void EyeMonitorFunction()
{

	if (Eye_Monitor_stage == 0)
		return;
	if(CMD== Eye_Monitor_CMD){
		EyeMonMode1or2(&Eye_Monitor_stage);
	}
}
//*************************************************************************************
// Eye monitor Mode 1/2: By Port/ By Lane
//*************************************************************************************
void EyeMonMode1or2(UCHAR *EyeMonitor_stage)
{
	USHORT temp16=0;
	USHORT BaseAddress=MCU_PCIE_BASE;
	USHORT temp=0;
	USHORT temp8=0;

	if((*EyeMonitor_stage)==1){
	//Step 1:  SW set registers R_EYE_MANU_MUX(Rx2907h)to 0 and 
	//         SW set EYESCAN_DONE_Penn(Rx2901h [14]) to 1 clear this register

	PemcuWrite8(BaseAddress|PCIEPHYCFG_EYE_MONITOR_7, PCIEPHYCFG_R_EYE_MANU_MUX, 0);

	//   if((PemcuRead16(BaseAddress|PCIEPHYCFG_EYE_MONITOR_2)&PCIEPHYCFG_EYESCAN_DONE_PENN)==PCIEPHYCFG_EYESCAN_DONE_PENN){

	PemcuWrite8(BaseAddress|0x2902, BIT6, BIT6);
	for (temp8 = 0; temp8 < 5; temp8++);

	//   }
	//   XBYTE(0xC0F2)=0x33;
	//Step 2: SW set each of the two points at a time,
	//		  { MCU_PH_OS[6:0](Rx2903h), MCU_EQTNVTH[5:0](Rx2904h)},
	//		  { MCU_PH_OS_2[6:0](Rx2905h)£¬MCU_EQTNVTH_2[5:0] (Rx2906h)}, 
	//		  eye scan for each point of the rectangular area covered by the two points
	PemcuWrite8(BaseAddress|PCIEPHYCFG_EYE_MONITOR_3, PCIEPHYCFG_MCU_PH_OS, EyeMonInParaPointXY.Bits.MCU_PH_OS);
	PemcuWrite8(BaseAddress|PCIEPHYCFG_EYE_MONITOR_4, PCIEPHYCFG_MCU_EQTNVTH, EyeMonInParaPointXY.Bits.MCU_EQTNVTH);
	PemcuWrite8(BaseAddress|PCIEPHYCFG_EYE_MONITOR_5, PCIEPHYCFG_MCU_PH_OS_2, EyeMonInParaPointXY.Bits.MCU_PH_OS_2);
	PemcuWrite8(BaseAddress|PCIEPHYCFG_EYE_MONITOR_6, PCIEPHYCFG_MCU_EQTNVTH_2, EyeMonInParaPointXY.Bits.MCU_EQTNVTH_2);
	

	for (temp8 = 0; temp8 < 5; temp8++);

	//Step 3:SW set the register ALL_PORT (Rx2901h) to 1, 
	//		 Indicates that all lane of the current port needs to be checked

	if(EyeMonInParaEyeInf.Bits.EyeMonitorMethod == 1){
		
		PemcuWrite8(BaseAddress|PCIEPHYCFG_EYE_MONITOR_2, PCIEPHYCFG_ALL_PORT, PCIEPHYCFG_ALL_PORT);
		temp = PemcuRead8(BaseAddress|PCIEPHYCFG_EYE_MONITOR_2);
		XBYTE(0xC0F2)=temp;
	}else if(EyeMonInParaEyeInf.Bits.EyeMonitorMethod ==2){
		PemcuWrite8(BaseAddress|PCIEPHYCFG_EYE_MONITOR_2, PCIEPHYCFG_ALL_PORT, 0);
		PemcuWrite8(BaseAddress|PCIEPHYCFG_EYE_MONITOR_2, PCIEPHYCFG_LANE_SEL, Lane_Num<<1);  
	}
	//Step 4: 1)SW set register EQ_PORT_NAME[8:0] (Rx 2901h)
		
	switch(EyeMonInParaEyeInf.Bits.PciePortNum){
			case 0:
			    temp16 = 0x10;    // PE0 
			    break;
			case 1:
			    temp16 = 0x20;    //PE1
				break;
			case 2:
				temp16 =0x40;     //PE2
				break;
			case 3:
				temp16 = 0x80;    //PE3
				break;
			case 4:
				temp16 = 0x01;     //PE4
				break;
			case 5:
				temp16 =0x02;      //PE5
				break;
			case 6:
				temp16 = 0x04;     //PE6
				break;
			case 7:
				temp16 = 0x08;     //PE7
				break;
			case 8:
				temp16 =0x100;     //VPI
				break;
			default:
				temp16 = 0;
	 }

	//	PemcuWrite16(BaseAddress|PCIEPHYCFG_EYE_MONITOR_2, PCIEPHYCFG_EQ_PORT_NAME, temp16<<4);
	PemcuWrite8(BaseAddress|PCIEPHYCFG_EYE_MONITOR_2, 0xF0, (temp16&0x0F)<<4);
	PemcuWrite8(BaseAddress|(PCIEPHYCFG_EYE_MONITOR_2 + 1), 0x0F, temp16>>4);
	if(temp16 & BIT8){
		PemcuWrite8(BaseAddress|(PCIEPHYCFG_EYE_MONITOR_2 + 1), BIT4, 0x10);
	}else{
		PemcuWrite8(BaseAddress|(PCIEPHYCFG_EYE_MONITOR_2 + 1), BIT4, 0x00);
	}

		//temp = PemcuRead16(BaseAddress|PCIEPHYCFG_EYE_MONITOR_2);
	    //temp=(temp>>4)&0x1FF;
		//XBYTE(0xC0F4)=temp;
	
	//Step 4: 2)BER_THRESHHOLD_[3:0] 
	PemcuWrite8(BaseAddress|PCIEPHYCFG_EYE_MONITOR_7, PCIEPHYCFG_RBER_THRESHHOLD, EyeMonInParaEyeInf.Bits.EyeErrorThreshold );
	//Step 4: 3)MCU_EYESCANTM_PEnn[7:0](Rx2900h)	
	PemcuWrite8(BaseAddress|PCIEPHYCFG_EYE_MONITOR, PCIEPHYCFG_MCU_EYESCANTM_PENN, EyeMonInParaResult.Scan_Time);

	//Step 5: SW set register MCU_EYESCANEN_PEnn(Rx2901h) to 1
	PemcuWrite8(BaseAddress|0x2902, BIT5, BIT5 );
	//    XBYTE(0xC0F5)=0x66;
  	*EyeMonitor_stage = 0;


	//Step 6: polling this register EYESCAN_DONE_PEnn (Rx2901h)
	//	while((PemcuRead8(BaseAddress|PCIEPHYCFG_EYE_MONITOR_2)&PCIEPHYCFG_EYESCAN_DONE_PENN)!=PCIEPHYCFG_EYESCAN_DONE_PENN);
	//Step 7: When EYESCAN_DONE_PEnn is writed to 1,
	//        read the BER_VAL[2047:0] (from Rx2A00h to Rx2AFFh)value 
	//        which is the EP ERROR count.
	//CMD=0;
		}
}





//*************************************************************************************
//*************************************************************************************
//**                                                                                 **
//**     Copyright (c) 2015 Shanghai Zhaoxin Semiconductor Co., Ltd.                 **
//**    
//**     Author: ChrisJWang    Date:07/10/18                                          **
//*************************************************************************************
//*************************************************************************************

#ifndef _EYE_MONITOR_3_H_
#define _EYE_MONITOR_3_H_


#include "Header/EQ.h"
#include "Header/Eye_monitor.h"



#define DBG_RXEQ_INTER 1 

#if DBG_RXEQ_INTER

#define DEBUG_TRACE 1
#define DEBUG_DATA1 1
#define DEBUG_DATA2 1
#define DEBUG_DATA3 1
#define DEBUG_DATA4 1

#else

#define DEBUG_TRACE 0
#define DEBUG_DATA1 0
#define DEBUG_DATA2 0
#define DEBUG_DATA3 0
#define DEBUG_DATA4 0


#endif




#define FOR_LA_TRIGGER 1   //write to B000h as a trigger point for LA - for debug


/*****************************************************************************/
/*****************************************************************************/
/*****************************************************************************/

#define OFFSET_LPn_EQTNVTH 			0x52
	#define OFFSET_LPn_EQTNVTH_BITS   0  //[4:0]
	#define OFFSET_LPn_EQTNVTH_BITE	  4
#define OFFSET_LPn_RCV_HBW 			0x48
	#define OFFSET_LPn_RCV_HBW_BITS  2   //[2:0]
	#define OFFSET_LPn_RCV_HBW_BITE  4 
#define OFFSET_FHPn_CKBUFSEL_CDR  	0x40
	#define OFFSET_FHPn_CKBUFSEL_CDR_BITS  4  //[5:4]
	#define OFFSET_FHPn_CKBUFSEL_CDR_BITE  5
#define OFFSET_LPn_EQTNMODE  		0x4E
	//#define  BIT6 & BIT5
#define OFFSET_LPn_DCSETEN 			0x53
	#define OFFSET_LPn_DCSETEN_BITS		7
	#define OFFSET_LPn_DCSETEN_BITE		7
#define OFFSET_LPn_HFSETEN 			0x54
	#define OFFSET_LPn_HFSETEN_BITS 	7
	#define OFFSET_LPn_HFSETEN_BITE 	7
#define OFFSET_LPn_OSSETEN  		0x55
	#define OFFSET_LPn_OSSETEN_BITS 	7
	#define OFFSET_LPn_OSSETEN_BITE 	7
#define OFFSET_LPn_W1SETEN  		0x56
	#define OFFSET_LPn_W1SETEN_BITS		7
	#define OFFSET_LPn_W1SETEN_BITE		7
#define OFFSET_LPn_W2SETEN  		0x57
	#define OFFSET_LPn_W2SETEN_BITS		7
	#define OFFSET_LPn_W2SETEN_BITE		7
#define OFFSET_LPn_OSSET			0x55
	#define OFFSET_LPn_OSSET_BITS 		0
	#define OFFSET_LPn_OSSET_BITE		4


#define OFFSET_FHPn_CDR_UGB_HBW    0x01   //200/280...
	#define OFFSET_FHPn_CDR_UGB_HBW_BITS  2
	#define OFFSET_FHPn_CDR_UGB_HBW_BITE  2
#define OFFSET_LPn_KIPRSEL   0x4C     //200/280...
	#define OFFSET_LPn_KIPRSEL_BITS  2 
	#define OFFSET_LPn_KIPRSEL_BITE  3
#define OFFSET_LPn_KIPCSEL   0x4C        //200/280...
	#define OFFSET_LPn_KIPCSEL_BITS   6 
	#define OFFSET_LPn_KIPCSEL_BITE   7
#define OFFSET_FHPn_ABCSEL_CDR   0x40     //200/280...
	#define OFFSET_FHPn_ABCSEL_CDR_BITS 2
	#define OFFSET_FHPn_ABCSEL_CDR_BITE 3
#define OFFSET_FRP00_EQTNDFE_G3   0x51     //200/280...
	#define OFFSET_FRP00_EQTNDFE_G3_BITS 4
	#define OFFSET_FRP00_EQTNDFE_G3_BITE 5








#define OFFSET_Epn_HFOUT  0x01
	#define OFFSET_Epn_HFOUT_BITS  0
	#define OFFSET_Epn_HFOUT_BITE  4
#define OFFSET_Epn_W1OUT  0x03
	#define OFFSET_Epn_W1OUT_BITS  0
	#define OFFSET_Epn_W1OUT_BITE  4
#define OFFSET_Epn_OSOUT  0x02
	#define OFFSET_Epn_OSOUT_BITS  0
	#define OFFSET_Epn_OSOUT_BITE  4

#define OFFSET_Epn_DCOUT  0x00
	#define OFFSET_Epn_DCOUT_BITS  0
	#define OFFSET_Epn_DCOUT_BITE  4
#define OFFSET_Epn_W2OUT  0x04
	#define OFFSET_Epn_W2OUT_BITS  0
	#define OFFSET_Epn_W2OUT_BITE  4


#define OFFSET_FAREND_TX_PRESET  0xA
	#define OFFSET_FAREND_TX_PRESET_BITS  0 
	#define OFFSET_FAREND_TX_PRESET_BITE  3
#define OFFSET_FAREND_PRE_CURSOR  0xB
	#define OFFSET_FAREND_PRE_CURSOR_BITS   0
	#define OFFSET_FAREND_PRE_CURSOR_BITE   5
#define OFFSET_FAREND_CURSOR   0xC
	#define OFFSET_FAREND_CURSOR_BITS    0
	#define OFFSET_FAREND_CURSOR_BITE    5
#define OFFSET_FAREND_POST_CURSOR  0xD
	#define OFFSET_FAREND_POST_CURSOR_BITS   0 
	#define OFFSET_FAREND_POST_CURSOR_BITE   5

/*****************************************************************************/
/*****************************************************************************/
/*****************************************************************************/


//this macro will modify the bitfiled between StartBit and EndBit of Temp8 as Val
#define REGSET(Temp8,StartBit,EndBit,Val)   ((Temp8 &(~(((1<<(EndBit-StartBit+1))-1)<<StartBit)))|(Val<<StartBit)) 

//this macro will get the value between StartBit and EndBit
#define GETVAL(Temp8,StartBit,EndBit)  ((Temp8 &(((1<<(EndBit-StartBit+1))-1)<<StartBit))>>StartBit)





void
	DEBUG_OUT_VAL( 
	UCHAR rank, 
	UCHAR flag);




void
RxAutoEQ(	UCHAR PEx, 
	UCHAR *PEx_config, 
	SAVE_LANE_PARAM *PEx_SAVE);
	



#endif

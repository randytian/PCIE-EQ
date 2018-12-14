//*************************************************************************************
//*************************************************************************************
//**                                                                                 **
//**     Copyright (c) 2015 Shanghai Zhaoxin Semiconductor Co., Ltd.                 **
//**    
//**     Author: ChrisJWang    Date:07/10/18                                          **
//*************************************************************************************
//*************************************************************************************

#ifndef _EYE_MONITOR_2_H_
#define _EYE_MONITOR_2_H_


#include "Header/EQ.h"
#include "Header/Eye_monitor.h"




/*****************************************************************************/
/*****************************************************************************/
/*****************************************************************************/

//PORTING_CODE -S
#define DBG1100   1 	//Main() debug mode  -suggest to enable 
#define DBG1400 		1   //whether enable debug mode - 1400 -check cursor adjust details -suggest to disable 
	#define PORT_COUNT 9
	#define DBG_BUFF_LINES 16
	#define DBG_BUFF_COLS 16
#define DBG1200 		1  //Eye monitor ERROR CODE   -suggest to enable 
#define DBG1300 		1  //EQ.c debug   -suggest to disable 
#define PARAM1000  1
#define FB1080 1

//
//L0STD:  this option is for Multi-Lane ports
//	0: scan eye for all lanes  (will use longer time) 
//	Others: only scan Lane0 and Lane0 will be the unique standard for this port
//
#define L0STD  1     




#define REG_OFFSET_BERVAL  PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0  //2A00h for CHX002



//PORTING_CODE -E











#define  EYEX1  96
#define  EYEY1  0
#define  EYEX2  31
#define  EYEY2  0

#define  XLen  ((127-EYEX1) + EYEX2 + 1) 	 	//total point in X axis  ( =(127-EX1) + EX2 + 1)
#define  YLen   ((EYEY2 - EYEY1)+1) 		//total point in Y axis (= (Y2 - Y1)+1)

#if 0
#define  PORT_ID_PE0  0
#define  PORT_ID_PE1  1
#define  PORT_ID_PE2  2
#define  PORT_ID_PE3  3
#define  PORT_ID_PE4  4
#define  PORT_ID_PE5  5
#define  PORT_ID_PE6  6
#define  PORT_ID_PE7  7
#endif





/*****************************************************************************/
/*****************************************************************************/
/*****************************************************************************/




#define ADJUST_TYPE_PRE_DOWN 1
#define ADJUST_TYPE_PRE_UP 2 
#define ADJUST_TYPE_POST_DOWN 3
#define ADJUST_TYPE_POST_UP 4


typedef struct _CURSOR_EW{
	unsigned char xPreCursor;
	unsigned char xCursor;
	unsigned char xPostCursor;
	unsigned char xEyeWidth;
}CURSOR_EW;


typedef struct _PRESET_EW{
	unsigned char xPreset;
	unsigned char xEyeWidth;
}PRESET_EW;



enum
{
    NotStart = 0,
    PreCursorDown,
    PreCursorUp ,
    PostCursorDown,
    PostCursorUp,
    Summary
};


#define WAIT_DONE() do{ \
			for(i = 0 ; i < 100; i++){\
				Eye_LoopToConfirmFarendParam(PEx_config,PEx_SAVE); \
				if((FAREND_EQ_PreCursor == EQ_Pre_Cursor)&&(FAREND_EQ_Cursor == EQ_Cursor) &&(FAREND_EQ_PostCursor == EQ_Post_Cursor)){\
					break;\
				}\
			}\
}while(0)




void Eye_PEx_GetBestParam(
	UCHAR PEx,
	UCHAR *PEx_config,
	SAVE_LANE_PARAM *PEx_SAVE);


void
Eye_PresetTranstoCursor(
	unsigned char xFS, 
	unsigned char *pPreset,
	unsigned char *pPre,
	unsigned char *pCur,
	unsigned char *pPost);


unsigned short
Eye_DoEyeMonitorThenGetData(unsigned char PortNum, unsigned char LaneNum);




#endif

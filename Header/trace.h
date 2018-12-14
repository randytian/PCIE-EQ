//**************************************************************************
//**************************************************************************
//**                                                                      **
//**  Copyright (c) 2015 - 2017 Shanghai Zhaoxin Semiconductor Co., Ltd.  **
//**                                                                      **
//**************************************************************************
//**************************************************************************

#ifndef _TRACE_H_
#define _TRACE_H_




//Debug register offset-start : Reg Addr

typedef struct _NCSIM_DEBUG_PORT
{
	volatile UCHAR  FUNCTION;
	volatile UCHAR  PARA1;
	volatile UCHAR  PARA2;
	volatile UCHAR  PARA3;
	
	volatile UCHAR  PARA4;
	volatile UCHAR  PARA5;
	volatile UCHAR  PARA6;
	volatile UCHAR  PARA7;
	
	volatile UCHAR  PARA8;
	volatile UCHAR  POST_CODE;
	volatile UCHAR  POST_MARK;
	volatile UCHAR  Enter;
	
	volatile UCHAR  Return_NONE;
	volatile UCHAR  Return_DATA;
	volatile UCHAR  Failed;
	volatile UCHAR  Rule;
	
}NCSIM_DEBUG_PORT;

typedef struct _PEMCU_DBG_PORT
{
 //;Rx00 ~ 03: Register for PEMCU Debug	
	volatile UCHAR  POST;
	volatile UCHAR  PARA1;
	volatile UCHAR  PARA2;
	volatile UCHAR  PARA3;

}PEMCU_DBG_PORT;


extern NCSIM_DEBUG_PORT xdata NCSIM_DEBUG;

extern PEMCU_DBG_PORT xdata PEMCU_DBG;

#endif


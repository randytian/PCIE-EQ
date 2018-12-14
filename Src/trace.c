//**************************************************************************
//**************************************************************************
//**                                                                      **
//**  Copyright (c) 2015 - 2017 Shanghai Zhaoxin Semiconductor Co., Ltd.  **
//**                                                                      **
//**************************************************************************
//**************************************************************************

#include "Header/type.h"
#include "Header/trace.h"


NCSIM_DEBUG_PORT xdata NCSIM_DEBUG _at_ 0xA100;
PEMCU_DBG_PORT xdata PEMCU_DBG   _at_ 0xB000;

//;JWDBG071515_s
#ifdef DBGINTERRUPT

void DBGINTERRUPT0()
{

	PEMCU_DBG.POST = 0xAA;
//	_nop_();
	PEMCU_DBG.POST = 0x00;

}
/*
void DBGINTERRUPT1()
{

	PEMCU_DBG.POST = 0x11;
	_nop_();
	PEMCU_DBG.POST = 0x00;

}
void DBGINTERRUPT2()
{

	PEMCU_DBG.POST = 0x22;
	_nop_();
	PEMCU_DBG.POST = 0x00;

}
*/
#endif
//;JWDBG071515_e

//;JWDBG071715_s
#ifdef DBGTimer

void DBGTimer0()
{
		PEMCU_DBG.POST = 0x11;
		_nop_();
		PEMCU_DBG.POST = 0x00;

}

#endif
//;JWDBG071715_e
#ifdef  POSTCODE	//below will enable NCSIM debug info output function.


#ifdef ASIC




//trace macro -start : REG32(Reg Addr) =  Reg Data


void trace0(UCHAR function_name)
{
	NCSIM_DEBUG.FUNCTION  = function_name;
}

void trace1(UCHAR function_name, UCHAR para1)
{
	NCSIM_DEBUG.FUNCTION  = function_name;
	NCSIM_DEBUG.PARA1 = (UCHAR)para1;
}										
void trace2(UCHAR function_name, UCHAR para1, UCHAR para2)
{
	NCSIM_DEBUG.FUNCTION  = function_name;	
	NCSIM_DEBUG.PARA1  = (UCHAR)para1; 
	NCSIM_DEBUG.PARA2  = (UCHAR)para2;
}	
#if 0
void trace3(UCHAR function_name, UCHAR para1, UCHAR para2, UCHAR para3) 
{
	NCSIM_DEBUG.FUNCTION  = function_name;	
	NCSIM_DEBUG.PARA1  = (UCHAR)para1; 
	NCSIM_DEBUG.PARA2  = (UCHAR)para2; 
	NCSIM_DEBUG.PARA3  = (UCHAR)para3;
}										

void trace4(UCHAR function_name, UCHAR para1, UCHAR para2, UCHAR para3, UCHAR para4)
{
	NCSIM_DEBUG.FUNCTION  = function_name;	
	NCSIM_DEBUG.PARA1  = (UCHAR)para1; 
	NCSIM_DEBUG.PARA2  = (UCHAR)para2; 
	NCSIM_DEBUG.PARA3  = (UCHAR)para3;
	NCSIM_DEBUG.PARA4  = (UCHAR)para4;
}										
void trace5(UCHAR function_name, UCHAR para1, UCHAR para2, UCHAR para3, UCHAR para4, UCHAR para5)
{
	NCSIM_DEBUG.FUNCTION  = function_name;	
	NCSIM_DEBUG.PARA1  = (UCHAR)para1; 
	NCSIM_DEBUG.PARA2  = (UCHAR)para2; 
	NCSIM_DEBUG.PARA3  = (UCHAR)para3;
	NCSIM_DEBUG.PARA4  = (UCHAR)para4;
	NCSIM_DEBUG.PARA5  = (UCHAR)para5;
}										
void trace6(UCHAR function_name, UCHAR para1, UCHAR para2, UCHAR para3, UCHAR para4, UCHAR para5, UCHAR para6)
{
	NCSIM_DEBUG.FUNCTION  = function_name;	
	NCSIM_DEBUG.PARA1  = (UCHAR)para1; 
	NCSIM_DEBUG.PARA2  = (UCHAR)para2; 
	NCSIM_DEBUG.PARA3  = (UCHAR)para3;
	NCSIM_DEBUG.PARA4  = (UCHAR)para4;
	NCSIM_DEBUG.PARA5  = (UCHAR)para5;
	NCSIM_DEBUG.PARA6  = (UCHAR)para6;
}
void trace7(UCHAR function_name, UCHAR para1, UCHAR para2, UCHAR para3, UCHAR para4, UCHAR para5, UCHAR para6, UCHAR para7)
{
	NCSIM_DEBUG.FUNCTION  = function_name;	
	NCSIM_DEBUG.PARA1  = (UCHAR)para1; 
	NCSIM_DEBUG.PARA2  = (UCHAR)para2; 
	NCSIM_DEBUG.PARA3  = (UCHAR)para3;
	NCSIM_DEBUG.PARA4  = (UCHAR)para4;
	NCSIM_DEBUG.PARA5  = (UCHAR)para5;
	NCSIM_DEBUG.PARA6  = (UCHAR)para6;
	NCSIM_DEBUG.PARA7  = (UCHAR)para7;
}										
void trace8(UCHAR function_name, UCHAR para1, UCHAR para2, UCHAR para3, UCHAR para4, UCHAR para5, UCHAR para6, UCHAR para7, UCHAR para8)
{
	NCSIM_DEBUG.FUNCTION  = function_name;	
	NCSIM_DEBUG.PARA1  = (UCHAR)para1; 
	NCSIM_DEBUG.PARA2  = (UCHAR)para2; 
	NCSIM_DEBUG.PARA3  = (UCHAR)para3;
	NCSIM_DEBUG.PARA4  = (UCHAR)para4;
	NCSIM_DEBUG.PARA5  = (UCHAR)para5;
	NCSIM_DEBUG.PARA6  = (UCHAR)para6;
	NCSIM_DEBUG.PARA7  = (UCHAR)para7;
	NCSIM_DEBUG.PARA8  = (UCHAR)para8;
}										
void	traceEnter()
{
	NCSIM_DEBUG.Enter  = 0;
}
#endif


void returnN()
{
	NCSIM_DEBUG.Return_NONE  = 0;
}
#if 0
void Failed_point(UCHAR para1)
{
	NCSIM_DEBUG.Failed  = para1;	
}

void returnD(UCHAR para1)
{
	NCSIM_DEBUG.Return_DATA  = para1;	
}

void Rule(UCHAR para1)
{

	NCSIM_DEBUG.Rule  = para1;	

}

void returnNP(UCHAR para1)
{
	NCSIM_DEBUG.Return_NONE  = 0;	
	NCSIM_DEBUG.POST_CODE  = para1;	
	return;
}
void returnDP(UCHAR para1, UCHAR para2)
{
	NCSIM_DEBUG.Return_DATA  = para1;	
	NCSIM_DEBUG.POST_CODE  = para2;	
	return para1;
}
#endif
void  post(UCHAR para1)
{
        NCSIM_DEBUG.POST_CODE  = para1;
}

void mark(UCHAR para1)
{
        NCSIM_DEBUG.POST_MARK  = para1;
}

#else //;SILLICON



void trace0(UCHAR function_name)
{
	PEMCU_DBG.POST = 0xA0;
	PEMCU_DBG.POST = 0x00;
	
	PEMCU_DBG.PARA2 = function_name;
	PEMCU_DBG.PARA2 = 0x00;
	

}

void trace1(UCHAR function_name, UCHAR para1)
{
	PEMCU_DBG.POST = 0xA1;
	PEMCU_DBG.POST = 0x00;

	PEMCU_DBG.PARA2  = function_name;
	PEMCU_DBG.PARA2 = 0x00;
	
	PEMCU_DBG.PARA1 = (UCHAR)para1;
	PEMCU_DBG.PARA1 = 0x00;
	
}										
void trace2(UCHAR function_name, UCHAR para1, UCHAR para2)
{
	PEMCU_DBG.POST = 0xA2;
	PEMCU_DBG.POST = 0x00;
	
	PEMCU_DBG.PARA2  = function_name;	
	PEMCU_DBG.PARA2 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para1; 
	PEMCU_DBG.PARA1 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para2;
	PEMCU_DBG.PARA1 = 0x00;
	
}										
void trace3(UCHAR function_name, UCHAR para1, UCHAR para2, UCHAR para3) 
{
	PEMCU_DBG.POST = 0xA3;
	PEMCU_DBG.POST = 0x00;
	
	PEMCU_DBG.PARA2  = function_name;	
	PEMCU_DBG.PARA2 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para1; 
	PEMCU_DBG.PARA1 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para2; 
	PEMCU_DBG.PARA1 = 0x00;

	PEMCU_DBG.PARA1  = (UCHAR)para3;
	PEMCU_DBG.PARA1 = 0x00;
	
}										

#ifdef MESSAGE
void msg0(UCHAR function_name)
{
	PEMCU_DBG.POST = 0xB0;
	PEMCU_DBG.POST = 0x00;
	
	PEMCU_DBG.PARA2 = function_name;
	PEMCU_DBG.PARA2 = 0x00;
	

}

void msg1(UCHAR function_name, UCHAR para1)
{
	PEMCU_DBG.POST = 0xB1;
	PEMCU_DBG.POST = 0x00;

	PEMCU_DBG.PARA2  = function_name;
	PEMCU_DBG.PARA2 = 0x00;
	
	PEMCU_DBG.PARA1 = (UCHAR)para1;
	PEMCU_DBG.PARA1 = 0x00;
	
}										
void msg2(UCHAR function_name, UCHAR para1, UCHAR para2)
{
	PEMCU_DBG.POST = 0xB2;
	PEMCU_DBG.POST = 0x00;
	
	PEMCU_DBG.PARA2  = function_name;	
	PEMCU_DBG.PARA2 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para1; 
	PEMCU_DBG.PARA1 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para2;
	PEMCU_DBG.PARA1 = 0x00;
	
}										
void msg3(UCHAR function_name, UCHAR para1, UCHAR para2, UCHAR para3) 
{
	PEMCU_DBG.POST = 0xB3;
	PEMCU_DBG.POST = 0x00;
	
	PEMCU_DBG.PARA2  = function_name;	
	PEMCU_DBG.PARA2 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para1; 
	PEMCU_DBG.PARA1 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para2; 
	PEMCU_DBG.PARA1 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para3;
	PEMCU_DBG.PARA1 = 0x00;
	
}										

void msg4(UCHAR function_name, UCHAR para1, UCHAR para2, UCHAR para3, UCHAR para4)
{
	PEMCU_DBG.POST = 0xB4;
	PEMCU_DBG.POST = 0x00;
	
	PEMCU_DBG.PARA2  = function_name;	
	PEMCU_DBG.PARA2 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para1; 
	PEMCU_DBG.PARA1 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para2; 
	PEMCU_DBG.PARA1 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para3;
	PEMCU_DBG.PARA1 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para4;
	PEMCU_DBG.PARA1 = 0x00;
	
}										
void msg5(UCHAR function_name, UCHAR para1, UCHAR para2, UCHAR para3, UCHAR para4, UCHAR para5)
{
	PEMCU_DBG.POST = 0xB5;
	PEMCU_DBG.POST = 0x00;

	PEMCU_DBG.PARA2  = function_name;
	PEMCU_DBG.PARA2 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para1; 
	PEMCU_DBG.PARA1 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para2; 
	PEMCU_DBG.PARA1 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para3;
	PEMCU_DBG.PARA1 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para4;
	PEMCU_DBG.PARA1 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para5;
	PEMCU_DBG.PARA1 = 0x00;
	
}										
void msg6(UCHAR function_name, UCHAR para1, UCHAR para2, UCHAR para3, UCHAR para4, UCHAR para5, UCHAR para6)
{
	PEMCU_DBG.POST = 0xB6;
	PEMCU_DBG.POST = 0x00;

	PEMCU_DBG.PARA2  = function_name;	
	PEMCU_DBG.PARA2 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para1; 
	PEMCU_DBG.PARA1 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para2; 
	PEMCU_DBG.PARA1 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para3;
	PEMCU_DBG.PARA1 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para4;
	PEMCU_DBG.PARA1 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para5;
	PEMCU_DBG.PARA1 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para6;
	PEMCU_DBG.PARA1 = 0x00;

}
void msg7(UCHAR function_name, UCHAR para1, UCHAR para2, UCHAR para3, UCHAR para4, UCHAR para5, UCHAR para6, UCHAR para7)
{
	PEMCU_DBG.POST = 0xB7;
	PEMCU_DBG.POST = 0x00;

	PEMCU_DBG.PARA2  = function_name;	
	PEMCU_DBG.PARA2 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para1; 
	PEMCU_DBG.PARA1 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para2; 
	PEMCU_DBG.PARA1 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para3;
	PEMCU_DBG.PARA1 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para4;
	PEMCU_DBG.PARA1 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para5;
	PEMCU_DBG.PARA1 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para6;
	PEMCU_DBG.PARA1 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para7;
	PEMCU_DBG.PARA1 = 0x00;
	
}										
void msg8(UCHAR function_name, UCHAR para1, UCHAR para2, UCHAR para3, UCHAR para4, UCHAR para5, UCHAR para6, UCHAR para7, UCHAR para8)
{
	PEMCU_DBG.POST = 0xB8;
	PEMCU_DBG.POST = 0x00;

	PEMCU_DBG.PARA2  = function_name;	
	PEMCU_DBG.PARA2 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para1; 
	PEMCU_DBG.PARA1 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para2; 
	PEMCU_DBG.PARA1 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para3;
	PEMCU_DBG.PARA1 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para4;
	PEMCU_DBG.PARA1 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para5;
	PEMCU_DBG.PARA1 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para6;
	PEMCU_DBG.PARA1 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para7;
	PEMCU_DBG.PARA1 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para8;
	PEMCU_DBG.PARA1 = 0x00;
	
}										
void msg9(UCHAR function_name, UCHAR para1, UCHAR para2, UCHAR para3, UCHAR para4, UCHAR para5, UCHAR para6, UCHAR para7, UCHAR para8, UCHAR para9)
{
	PEMCU_DBG.POST = 0xB9;
	PEMCU_DBG.POST = 0x00;

	PEMCU_DBG.PARA2  = function_name;	
	PEMCU_DBG.PARA2 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para1; 
	PEMCU_DBG.PARA1 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para2; 
	PEMCU_DBG.PARA1 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para3;
	PEMCU_DBG.PARA1 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para4;
	PEMCU_DBG.PARA1 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para5;
	PEMCU_DBG.PARA1 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para6;
	PEMCU_DBG.PARA1 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para7;
	PEMCU_DBG.PARA1 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para8;
	PEMCU_DBG.PARA1 = 0x00;
	
	PEMCU_DBG.PARA1  = (UCHAR)para9;
	PEMCU_DBG.PARA1 = 0x00;
	
	
}										
#endif //;MESSAGE

void returnN()
{
	PEMCU_DBG.POST = 0xFF;
	PEMCU_DBG.POST = 0x00;

//	NCSIM_DEBUG.Return_NONE  = 0;
}

void Rule(UCHAR para1)
{
	PEMCU_DBG.PARA3 = 0xF0;
	PEMCU_DBG.PARA3 = 0x00;

	PEMCU_DBG.PARA1  = para1;	
	PEMCU_DBG.PARA1 = 0x00;

}
void Mark(UCHAR para1)
{
	PEMCU_DBG.PARA3 = para1;
	PEMCU_DBG.PARA3 = 0x00;

}
#if 0
void  post(UCHAR para1)
{
	 PEMCU_DBG.POST = 0xC0;
        PEMCU_DBG.PARA1  = para1;
}

void mark(UCHAR para1)
{
	PEMCU_DBG.POST = 0xD0;
       PEMCU_DBG.PARA1  = para1;
}
#endif
#endif //;ASIC

#endif//;POSTCODE


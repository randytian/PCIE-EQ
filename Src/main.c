 /*************************************************
Copyright (c) 2014 VIA Technologies, Inc. All Rights Reserved.

Information in this file is the intellectual property of
VIA Technologies, Inc., and may contains trade secrets that must be stored 
and viewed confidentially.

Filename: Main.c
Author:   Justin Wu

Modification History:
Rev              		 	Date       		Name       		Description

*************************************************/


#include "Header/REG51XC.H"
#include <stdlib.h>
#include <string.h>

#include "stdio.h"
#include "Header/EQ.h"
#include "Header/Eye_monitor2.h"

#if DBG1100
volatile unsigned char xdata EM_DEBUG_MAIN[16][16] _at_ 0x1100; //4K = 1000h is  400h
#endif
#if PARAM1000
volatile unsigned char xdata EYE_PARAM[128] _at_ 0x1000;  
#endif
#if FB1080
volatile unsigned char xdata EYE_FB[128] _at_ 0x1080; 
#endif


extern unsigned short Second;
extern unsigned gEyeScanTime ;
extern unsigned gPcieDoEqMethod;


//#include "trace.h"
extern void uart1_init(void);
extern void uart1_putc (char c);
extern void uart1_puts(char *s);
extern void TimerInit(); 
extern void InitialTimer0Interrupt();
extern void DisableInt();
extern void EnableInt();

extern PEMCU_OTHER_INTERRUPT     xdata xrOTHER_STS;
#ifdef  POSTCODE

extern void trace0(UCHAR function_name);
extern void returnN();



#endif
main(void)
{
	unsigned short LocalSecond = 0;

#if DBG1100
	EM_DEBUG_MAIN[0][0] = 0x27;  //MCU alive flag
#endif

#ifdef  POSTCODE
 	trace0(main_);
#endif

	CKCON = 0x00;
	
	DisableInt();

#if EYE_MONITOR
	//EyeMonitorEnable(EYE_FUNCTION_HALF_RATE);
#endif




	EQ_INIT();
	
	uart1_init();

	uart1_puts("PEMCU \n");

	TimerInit();	
       InitialTimer0Interrupt();

	EnableEQInt();
	EnableInt();


#if PARAM1000
	if(EYE_PARAM[0] >= 0x1B){
		gEyeScanTime = EYE_PARAM[0];
	}
	gPcieDoEqMethod = EYE_PARAM[1];
#if FB1080
	//to give feedback to CPU
	EYE_FB[0] = gEyeScanTime;
	EYE_FB[1] = gPcieDoEqMethod;
#endif

#else
		gEyeScanTime = 0x72; //default as 1us
		gPcieDoEqMethod = 0x0;
#endif





	while(1)
	{



	PE0_MainLoop();
		
	PE1_MainLoop();
	
	PE2_MainLoop();
	
	PE3_MainLoop();

	PE4_MainLoop();
	
	PE5_MainLoop();
	
	PE6_MainLoop();

	PE7_MainLoop();
	
#ifdef DUAL_SOCKET_VPI_EQ
	VPI_MainLoop();
#endif

	EyeMonitorFunction();
	
//	Dynamic_Clock_handler();	



#if DBG1100
	if(Second != LocalSecond){
		LocalSecond = Second;
		EM_DEBUG_MAIN[0][1]= LocalSecond;   //this is PEMCU alive Heartbeat clock
	}
#endif

	}
#ifdef  POSTCODE
	returnN();
#endif
	return;

}


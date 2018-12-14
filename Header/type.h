//**************************************************************************
//**************************************************************************
//**                                                                      **
//**  Copyright (c) 2015 - 2017 Shanghai Zhaoxin Semiconductor Co., Ltd.  **
//**                                                                      **
//**************************************************************************
//**************************************************************************

#ifndef _TYPE_H_
#define _TYPE_H_

typedef unsigned char  UCHAR;
typedef unsigned int    USHORT;
typedef unsigned long   ULONG;

//CJW_DEBUG; #define  POSTCODE
//#define  MESSAGE   //sillicon
//#define  ASIC   
//#define DBGINTERRUPT    //;Debug interrupt  sillicon

//#define DBGTimer      //;Debug tick timer

#define  FALSE   0x0
#define  TRUE    0x1

#define  DUAL_SOCKET_VPI 
#ifdef DUAL_SOCKET_VPI
 //#define DUAL_SOCKET_VPI_EQ 
#endif

//Function code	-start : Reg Data
#define   main_					1       //0x01
#define	EQ_INIT_				2       //0x02
#define	EQ_ISR_				3       //0x03
#define	PE0_MainLoop_			4       //0x04
#define	PE1_MainLoop_			5       //0x05
#define	PE2_MainLoop_			6       //0x06
#define	PE3_MainLoop_			7       //0x07
#define	PE4_MainLoop_			8       //0x08
#define	PE5_MainLoop_			9       //0x09
#define	PE6_MainLoop_					10       //0x0A
#define	PE7_MainLoop_					11       //0x0B
#define	VPI_MainLoop_					12       //0x0C

#define   PEx_State_Switch_			14      //0x0E
#define	Try_Preset_value_			15      //0x0F
#define	Set_Cursor_Param_			16      //0x10
#define	Read_default_TxRxParam_		17      //0x11
#define	Read_Param_			18      //0x12
#define	DisableEQInt_				19      //0x13
#define	EnableEQInt_				20      //0x14
#define   Dynamic_Clock_handler_		 21       //0x15
#define	TimerInit_				22      //0x16
#define	InitialTimer0Interrupt_						23      //0x17
#define	Timer0Isr_						24      //0x18
#define	DisableInt_						25      //0x19
#define	EnableInt_						26      //0x1A
#define	uart1_init_						27      //0x1B
#define	uart1_putc_					28      //0x1C
#define	uart1_puts_					29      //0x1D
#define   VPI_State_Switch_			30      //0x1E

//JNY add for eye monitor porting -s

#ifndef BIT0
#define BIT0           0x1
#endif
#ifndef BIT1
#define BIT1           0x2
#endif
#ifndef BIT2
#define BIT2           0x4
#endif
#ifndef BIT3
#define BIT3           0x8
#endif
#ifndef BIT4
#define BIT4          0x10
#endif
#ifndef BIT5
#define BIT5          0x20
#endif
#ifndef BIT6
#define BIT6          0x40
#endif
#ifndef BIT7
#define BIT7          0x80
#endif
#ifndef BIT8
#define BIT8         0x100
#endif
#ifndef BIT9
#define BIT9         0x200
#endif
#ifndef BIT10
#define BIT10        0x400
#endif
#ifndef BIT11
#define BIT11        0x800
#endif
#ifndef BIT12
#define BIT12       0x1000
#endif
#ifndef BIT13
#define BIT13       0x2000
#endif
#ifndef BIT14
#define BIT14       0x4000
#endif
#ifndef BIT15
#define BIT15       0x8000
#endif


//JNY add for eye monitor porting -e

//Function code  -end
#endif



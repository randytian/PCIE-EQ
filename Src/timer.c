 //**************************************************************************
 //**************************************************************************
 //**																	   **
 //**  Copyright (c) 2015 - 2017 Shanghai Zhaoxin Semiconductor Co., Ltd.  **
 //**																	   **
 //**************************************************************************
 //**************************************************************************

#include "Header/type.h"

//#include<trace.h>
#include "Header/REG51XC.H"

extern volatile UCHAR PE0_Delay100us;
extern volatile UCHAR PE1_Delay100us;
extern volatile UCHAR PE2_Delay100us;
extern volatile UCHAR PE3_Delay100us;
extern volatile UCHAR PE4_Delay100us;
extern volatile UCHAR PE5_Delay100us;
extern volatile UCHAR PE6_Delay100us;
extern volatile UCHAR PE7_Delay100us;
extern volatile UCHAR VPI_Delay100us;



unsigned short Tick = 0;
unsigned short Millisecond = 0;
unsigned short Second = 0;



#ifdef  POSTCODE
extern void trace0(UCHAR function_name);
extern void returnN();
#endif
//;JWDBG071715_s
#ifdef DBGTimer

extern void DBGTimer0();

#endif
//;JWDBG071715_e

void TimerInit() 
{
#ifdef  POSTCODE
    	trace0(TimerInit_);
#endif
    	EAL = 0;         //Disable all interrupt
	
    	EX0 = 0;        //Disable External Interrupt 0
    	ET0 = 1;        //Enable Timer0 Interrupt
    
   	TMOD = 0x11;    //Setting Timer0 and Timer1 into Counting & mode1 (16-bit counter) 	
#ifdef  POSTCODE
	returnN();
#endif
}

void InitialTimer0Interrupt()
{
#ifdef  POSTCODE
    	trace0(InitialTimer0Interrupt_);
#endif

#ifdef  POSTCODE

#ifdef ASIC
	TL0 = 0x58;
	TH0 = 0xFF;
#else   //;Sillicon
	TL0 = 0x7C;
	TH0 = 0xF9;
#endif

#else  //;Sillicon
	TL0 = 0x7C;
	TH0 = 0xF9;
#endif
	//; Trigger Timer 0 counter to start
	TR0 = 1; 
#ifdef  POSTCODE	
	returnN();
#endif
}
void Timer0Isr()    interrupt 1 using 2  // timer 0  
{	
#ifdef  POSTCODE
 //   	trace0(Timer0Isr_);
#endif

//;JWDBG071715_s
#ifdef DBGTimer
	DBGTimer0();
#endif
//;JWDBG071715_e
	 EAL  = 0;    //Disable all interrupt

#ifdef  POSTCODE
	TL0 = 0x58;
	TH0 = 0xFF;
	
#else
	TL0 = 0x2F;
	TH0 = 0xF8;
#endif

	if (PE0_Delay100us > 0)
		PE0_Delay100us --;

	if (PE1_Delay100us > 0)
		PE1_Delay100us --;

	if (PE2_Delay100us > 0)
		PE2_Delay100us --;

	if (PE3_Delay100us > 0)
		PE3_Delay100us --;

	if (PE4_Delay100us > 0)
		PE4_Delay100us --;

	if (PE5_Delay100us > 0)
		PE5_Delay100us --;

	if (PE6_Delay100us > 0)
		PE6_Delay100us --;

	if (PE7_Delay100us > 0)
		PE7_Delay100us --;
	
#ifdef DUAL_SOCKET_VPI_EQ
	if (VPI_Delay100us > 0)
		VPI_Delay100us --;
#endif


	//For 150us - 240M
	//PEMCU
	// 240M/12 = 20	 --> devide 20 to 1us	 =	 200M[5ns/clk]->200M/12[60ns/clk]-> 60ns divide 16.66666 to 1us/clk
	// 20*150 = 3000	 --> devide 20*150 to 150us	= Then devide 150 to->105us/clk
	// 3000 = 0xBB8
	// [0xFFFF - 0xBB8 = 0xF447]


	// for 100us = 240M
	// 20*100 = 2000 -->device 20*100 to 100us
	// 2000 = 7D0h
	// [0xFFFF-0x7D0 = 0xF82F]

	// for 100us = 200M
	// 16.6666*100 = 1666 -->device 20*100 to 100us
	// 1666 = 682h
	// [0xFFFF-0x682 = 0xF97D]


	Tick++; //100us
	if(Tick == 10){
		Tick = 0;
		Millisecond++;
		if(Millisecond == 1000){
			Millisecond = 0	;
			Second++;
			if(Second == 1000){
				Second = 0;
			}
		}
	} 






//      TR0 = 1; 
      	EAL = 1;			//Enable Interrupt
#ifdef  POSTCODE
//	returnN();
#endif
	return;

}

void DisableInt()
{
#ifdef  POSTCODE
    	trace0(DisableInt_);
#endif

    	EAL = 0;    //Disable interrupt
    	EX0 = 0;   //Disable EQ interrupt
    	ET0 = 0;   //Disable Timer0 Interrupt
#ifdef  POSTCODE
	returnN();
#endif
	return;

}


void EnableInt()
{
#ifdef  POSTCODE
    	trace0(EnableInt_);
#endif
    	EAL = 1;			//Enable Interrupt
    	EX0 = 1;			//Enable EQ interrupt
    	ET0 = 1;                 //Enable Timer0 Interrupt
#ifdef  POSTCODE
	returnN();
#endif
	return;

}



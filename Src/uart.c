 //**************************************************************************
 //**************************************************************************
 //**																	   **
 //**  Copyright (c) 2015 - 2017 Shanghai Zhaoxin Semiconductor Co., Ltd.  **
 //**																	   **
 //**************************************************************************
 //**************************************************************************

#include "Header/REG51XC.H"
#include "Header/type.h"
#ifdef  POSTCODE
extern void trace0(UCHAR function_name);
extern void returnN();
#endif

void uart1_init(void)
{
#ifdef  POSTCODE
    	trace0(uart1_init_);
#endif
	S1CON = 0xB0; // Mode B selet, REN Enable m RI&TI Clear
	S1RELH = 0x03; // Set BR 115200
	S1RELL = 0xC7; // Set BR 115200
#ifdef  POSTCODE
	returnN();
#endif
	return;

}


void uart1_putc (char c)  
{
#ifdef  POSTCODE
	trace0(uart1_putc_);
#endif
	if (c=='\n') {
	 	S1BUF = 0x0d;
	} else {
	 	S1BUF = c;

	}
	while (!(S1CON & 0x02));   
	S1CON &= ~0x02;   //Clear  TI1 interrupt flag	 

//	S1BUF = c;			// output <c> using UART 1    
//	while (!(S1CON & 0x02));
//	S1CON &= ~0x02;   //Clear  TI1 interrupt flag	
#ifdef  POSTCODE
	returnN();
#endif
	return;

}   


void uart1_puts(char *s)
{
#ifdef  POSTCODE
    	trace0(uart1_puts_);
#endif
	while(*s!=0)
	{
		uart1_putc(*s);
		s++;
	}
#ifdef  POSTCODE	
	returnN();
#endif
	return;

}

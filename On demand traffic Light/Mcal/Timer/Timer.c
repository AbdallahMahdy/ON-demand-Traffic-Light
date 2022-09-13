
#include "Timer.h"
#define F_CPU 8000000UL

void Timer0_init(void)
{
	TCCR0=0x00;
	TCNT0=0x00;
	
}

void delay_ms(u16 delay)
{
	TCCR0 |= (1<<1); //prescale 8 
	int count=0;
	delay=delay*4; //FCPU=8 MHZ prescale=8 so tick time = 1/1Mhz overflow time = 0.25 ms so to achive 1 ms we should multiply delay by 4 
	while(count<delay)
	{
	while((TIFR & (1<<0))==0);
	
	TIFR |=(1<<0);
	count++;
		
	}
	
}
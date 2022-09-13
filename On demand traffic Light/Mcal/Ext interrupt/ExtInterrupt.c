

#include "ExtInterrupt.h"
#define F_CPU 8000000UL

u8 ped=0,mode=0;
/*Interrupt Service Routine for INT0*/
ISR(INT0_vect)
{
	mode=1;
	ped=1;
	delay_ms(50);  	/* Software debouncing control delay */
	
}

void ex_int_init(void)
{
	DDRD=0;			/* PORTD as input */
	PORTD=0x00;		/* Make pull up high */
	GICR = 1<<INT0;		/* Enable INT0*/
	MCUCR = 1<<ISC01 | 1<<ISC00;  /* Trigger INT0 on rising edge */
	
	sei();			/* Enable Global Interrupt */
	

}
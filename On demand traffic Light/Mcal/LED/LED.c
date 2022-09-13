
#include "LED.h"

void Led_init(void)
{
	set_bit(DDRA,Traffic_Green);
	set_bit(DDRA,Traffic_RED);
	set_bit(DDRA,Traffic_Yellow);
	set_bit(DDRB,Traffic_Green);
	set_bit(DDRB,Traffic_RED);
	set_bit(DDRB,Traffic_Yellow);
}

void Set_Traffic_green()
{
	set_bit(PORTA,Traffic_Green);
	clr_bit(PORTA,Traffic_RED);
	clr_bit(PORTA,Traffic_Yellow);
}
void Set_Traffic_red()
{
	clr_bit(PORTA,Traffic_Green);
	set_bit(PORTA,Traffic_RED);
	clr_bit(PORTA,Traffic_Yellow);
}
void Set_Traffic_yellow()
{
	clr_bit(PORTA,Traffic_Green);
	clr_bit(PORTA,Traffic_RED);
	toggle_bit(PORTA,Traffic_Yellow);
}

void Set_ped_green()
{
	set_bit(PORTB,ped_Green);
	clr_bit(PORTB,ped_RED);
	clr_bit(PORTB,ped_Yellow);
}
void Set_ped_red()
{
	clr_bit(PORTB,ped_Green);
	set_bit(PORTB,ped_RED);
	clr_bit(PORTB,ped_Yellow);
}
void Set_ped_yellow()
{
	clr_bit(PORTB,ped_Green);
	clr_bit(PORTB,ped_RED);
	toggle_bit(PORTB,ped_Yellow);
}
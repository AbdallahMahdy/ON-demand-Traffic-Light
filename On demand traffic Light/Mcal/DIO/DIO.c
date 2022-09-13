

#include "DIO.h"

#define F_CPU 8000000UL

 void DIO_voidSetPinDirection(u8 Port,u8 PinNum,u8 Dir)
{
	switch(Port)
	{
		case 0:
		if(Dir==0)
		clr_bit(DDRA,PinNum);
		if(Dir==1)
		set_bit(DDRA,PinNum);
		break;
		case 1:
		if(Dir==0)
		clr_bit(DDRB,PinNum);
		if(Dir==1)
		set_bit(DDRB,PinNum);
		break;
		case 2:
		if(Dir==0)
		clr_bit(DDRC,PinNum);
		if(Dir==1)
		set_bit(DDRC,PinNum);
		break;
		case 3:
		if(Dir==0)
		clr_bit(DDRD,PinNum);
		if(Dir==1)
		set_bit(DDRD,PinNum);
		break;

	}
}
 void DIO_voidSetPinValue(u8 Port,u8 PinNum,u8 value)
{
	switch(Port)
	{
		case 0:
		if(value==0)
		clr_bit(PORTA,PinNum);
		if(value==1)
		set_bit(PORTA,PinNum);
		break;
		case 1:
		if(value==0)
		clr_bit(PORTB,PinNum);
		if(value==1)
		set_bit(PORTB,PinNum);
		break;
		case 2:
		if(value==0)
		clr_bit(PORTC,PinNum);
		if(value==1)
		set_bit(PORTC,PinNum);
		break;
		case 3:
		if(value==0)
		clr_bit(PORTD,PinNum);
		if(value==1)
		set_bit(PORTD,PinNum);
		break;

	}
}
 
 void DIO_voidSetPortDir(u8 Port, u8 Dir)
{
	switch(Port)
	{
		case 0 :
		DDRA=Dir;
		break;
		case 1 :
		DDRB=Dir;
		break;
		case 2 :
		DDRC=Dir;
		break;
		case 3 :
		DDRD=Dir;
		break;
	}
}
 void DIO_voidSetPortValue(u8 Port,u8 Value)
{
	switch(Port)
	{
		case 0 :
		PORTA=Value;
		break;
		case 1 :
		PORTB=Value;
		break;
		case 2 :
		PORTC=Value;
		break;
		case 3 :
		PORTD=Value;
		break;
	}
}


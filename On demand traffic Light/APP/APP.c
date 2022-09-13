
#include "../MCUL/registers.h"
#include "../MCUL/typedefs.h"
#include "../Mcal/LED/LED.h"
#include "../Mcal/DIO/DIO.h"
#include "../Mcal/Ext interrupt/ExtInterrupt.h"
#include "../Mcal/Timer/Timer.h"
#define F_CPU 8000000UL
extern u8 ped;
extern u8 mode;
int count=0;
void App_init(void)
{
	sevseg_vidINT();
	Led_init();
	Timer0_init();
	ex_int_init();
}

void App_start(void){
	
	for(int i=11;i>1;i--){
		SevSeg_vidNumber(i/2);
		if(count==0)
		{
			Set_Traffic_green();
			Set_ped_red();
			if(ped>=1){
				count=1;
			}
		}
		if(count==1)
		{
			Set_Traffic_yellow();
			Set_ped_yellow();
			if(ped>=1){
				set_bit(PORTA,Traffic_Green);
			set_bit(PORTB,ped_RED);}
			
		}
		if(count==2)
		{
			Set_Traffic_red();
			Set_ped_green();
			if(ped==1)
			{
				i=11;
				ped++;
			}
		}
		if(count==3)
		{
			Set_Traffic_yellow();
			Set_ped_yellow();
			if (mode==1){
				set_bit(PORTB,ped_Green);
			}
			
			if(ped>=1){
				count=2;
				
			}
		}
		delay_ms(500);
	}
	
	count++;
	ped=0;
	if (count==4)
	{
		count=0;
		mode=0;
	}
}
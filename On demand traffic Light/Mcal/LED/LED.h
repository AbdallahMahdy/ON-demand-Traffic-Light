

#ifndef LED_H_
#define LED_H_
#include "../DIO/DIO.h"
void Led_init(void);
void Set_Traffic_yellow(void);
void Set_Traffic_red(void);
void Set_Traffic_green(void);
void Set_ped_green(void);
void Set_ped_yellow(void);
void Set_ped_red(void);
#define Traffic_RED PORTA0
#define Traffic_Yellow PORTA1
#define Traffic_Green PORTA2
#define ped_RED PORTB0
#define ped_Yellow PORTB1
#define ped_Green PORTB2

 


#endif /* LED_H_ */
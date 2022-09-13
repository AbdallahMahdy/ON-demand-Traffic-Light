
#ifndef SEG_H_
#define SEG_H_
#include "../../MCUL/typedefs.h"
#include "../../MCUL/registers.h"
#define segPort PORTC
u8 sevseg[10]={0b10000001,0b11110011,0b01001001,0b01100001,0b00110011,0b00100101,0b00000101,0b11110001,0b00000001,0b00100001};

 void sevseg_vidINT(void);
 void SevSeg_vidNumber(u8 num );



#endif /* 7SEG_H_ */
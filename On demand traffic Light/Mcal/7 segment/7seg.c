
#include "7seg.h"
#define F_CPU 8000000UL
 void sevseg_vidINT(void)
 {
	DDRC=0xFF;

}
 void SevSeg_vidNumber(u8 num)
 {	
		PORTC=sevseg[num];	
}

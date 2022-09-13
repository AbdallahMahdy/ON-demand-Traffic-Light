

#ifndef EXTINTERRUPT_H_
#define EXTINTERRUPT_H_
#include "../../MCUL/registers.h"
#include "../../MCUL/typedefs.h"
#include "../LED/LED.h"
#  define ISR(vector, ...)            \
void vector (void) __attribute__ ((signal,__INTR_ATTRS)) __VA_ARGS__; \
void vector (void)

#define INT0_vect     __vector_1
#define INT0_vect_num        1
# define sei()  __asm__ __volatile__ ("sei" ::: "memory")

void ex_int_init(void);




#endif /* EXTINTERRUPT_H_ */
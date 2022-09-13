

#ifndef TYPEDEFS_H_
#define TYPEDEFS_H_

#define set_bit(reg,bitno)	reg|=(1<<bitno)
#define clr_bit(reg,bitno)	reg&=( ~(1<<bitno) )
#define toggle_bit(reg,bitno)	reg^=(1<<(bitno))
#define get_bit(reg,bitno)	( reg&(1<<bitno) )>>bitno

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short int u16;
typedef signed short int s16;
typedef unsigned long int u32;
typedef signed long int s32;
typedef float f32;
typedef double f64;



#endif /* TYPEDEFS_H_ */
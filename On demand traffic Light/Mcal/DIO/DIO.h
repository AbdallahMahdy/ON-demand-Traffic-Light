
#ifndef DIO_H_
#define DIO_H_
#include "../../MCUL/typedefs.h"
#include "../../MCUL/registers.h"
#define output 1
#define input 0
#define high 1
#define low 0
 void DIO_voidSetPinDirection(u8 Port,u8 PinNum,u8 Dir);
 void DIO_voidSetPinValue(u8 Port,u8 PinNum,u8 value);
 void DIO_voidSetPortDir(u8 Port, u8 Dir);
  void DIO_voidSetPortValue(u8 Port,u8 Value);


#endif /* DIO_H_ */
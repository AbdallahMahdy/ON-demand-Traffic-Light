

#ifndef REGISTERS_H_
#define REGISTERS_H_

#define DDRA (*(volatile u8*)0x3A)
#define PINA (*(volatile u8*)0x39)
#define PORTA (*(volatile u8*)0x3B)

#define PORTA7  7
#define PORTA6  6
#define PORTA5  5
#define PORTA4  4
#define PORTA3  3
#define PORTA2  2
#define PORTA1  1
#define PORTA0  0

#define DDRB (*(volatile u8*)0x37)
#define PINB (*(volatile u8*)0x36)
#define PORTB (*(volatile u8*)0x38)
#define PORTB7  7
#define PORTB6  6
#define PORTB5  5
#define PORTB4  4
#define PORTB3  3
#define PORTB2  2
#define PORTB1  1
#define PORTB0  0
#define PORTC (*(volatile u8*)0x35)
#define DDRC (*(volatile u8*)0x34)
#define PINC (*(volatile u8*)0x33)

#define DDRD (*(volatile u8*)0x31)
#define PORTD (*(volatile u8*)0x32)
#define PIND (*(volatile u8*)0x30)
#define MCUCR (*(volatile u8*)0x55)
#define SREG (*(volatile u8*)0x5F)
#define GICR (*(volatile u8*)0x5B)
#define GIFR (*(volatile u8*)0x5A)
#define TCCR0 (*(volatile u8*)0x53)
#define TCNT0 (*(volatile u8*)0x52)
#define OCR0 (*(volatile u8*)0x5c)
#define TIMSK (*(volatile u8*)0x59)
#define TIFR (*(volatile u8*)0x58)
#define SFIOR (*(volatile u8*)0x50)
#define IVCE    0
#define IVSEL   1
#define INT2    5
#define INT0    6
#define INT1    7
#define ISC00   0
#define ISC01   1
#define ISC10   2
#define ISC11   3
#define SM0     4
#define SM1     5
#define SM2     6
#define SE      7



#endif /* REGISTERS_H_ */
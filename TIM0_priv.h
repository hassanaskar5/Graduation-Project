#ifndef _TIM0_PRIVATE_H
#define _TIM0_PRIVATE_H


#define TCCR	*((volatile u8 *)0x53)
#define TCNT	*((volatile u8 *)0x52)
#define OCR		*((volatile u8 *)0x5c)
#define TIMSK	*((volatile u8 *)0x59)
#define TIFR	*((volatile u8 *)0x58)


#endif
/*********************************************/
/*                                           */
/*     Author         : Hassan Askar         */
/*     Date           : 20/10/2019           */
/*     Version        : 1.0 V                */
/*     Description    : This file is to      */
/*					    define the Names of  */
/*					    PORTS, PINS and DDRs */
/*                                           */
/*********************************************/



#ifndef _DIO_CONFIG_H
#define _DIO_CONFIG_H

#define DDRA  *((volatile u8 )(0x3A))
#define DDRB  *((volatile u8 )(0x37))
#define DDRC  *((volatile u8 )(0x34))
#define DDRD  *((volatile u8 )(0x31))
#define PORTA *((volatile u8 )(0x3B))
#define PORTB *((volatile u8 )(0x38))
#define PORTC *((volatile u8 )(0x35))
#define PORTD *((volatile u8 )(0x32))
#define PINA  *((volatile u8 )(0x39))
#define PINB  *((volatile u8 )(0x36))
#define PINC  *((volatile u8 )(0x33))
#define PIND  *((volatile u8 )(0x30))

#endif
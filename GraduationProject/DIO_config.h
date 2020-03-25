/****************************************************/
/*                                                  */
/*       Author         : Hassan Askar              */
/*       Date           : 08/04/2019                */
/*       Version        : 1.0 V                     */
/*       Description    : DIO_configuration         */
/*                                                  */
/****************************************************/
#ifndef _DIO_CONFIG_H
#define _DIO_CONFIG_H
/***************************************************************************/
/*                                                                         */ 
/*      Tips: Here you can configure all the controller PINs               */
/*            You can choose if the pin will be an output or an input      */
/*                                                                         */
/*            To configure it as input use  => DIO_u8_INPUT                */
/*            To configure it as output use => DIO_u8_OUTPUT               */
/*                                                                         */
/***************************************************************************/
/*                    For PORTA                                           */
/*                    PINS 0 -> 7                                         */
#define DIO_u8_PIN_DIR_0         DIO_u8_INPUT
#define DIO_u8_PIN_DIR_1         DIO_u8_INPUT
#define DIO_u8_PIN_DIR_2         DIO_u8_INPUT
#define DIO_u8_PIN_DIR_3         DIO_u8_INPUT
#define DIO_u8_PIN_DIR_4         DIO_u8_OUTPUT
#define DIO_u8_PIN_DIR_5         DIO_u8_OUTPUT
#define DIO_u8_PIN_DIR_6         DIO_u8_OUTPUT
#define DIO_u8_PIN_DIR_7         DIO_u8_OUTPUT
/*                    For PORTB                                           */
/*                    PINS 8 -> 15                                        */  
#define DIO_u8_PIN_DIR_8         DIO_u8_OUTPUT
#define DIO_u8_PIN_DIR_9         DIO_u8_OUTPUT
#define DIO_u8_PIN_DIR_10        DIO_u8_OUTPUT
#define DIO_u8_PIN_DIR_11        DIO_u8_OUTPUT
#define DIO_u8_PIN_DIR_12        DIO_u8_OUTPUT
#define DIO_u8_PIN_DIR_13        DIO_u8_OUTPUT
#define DIO_u8_PIN_DIR_14        DIO_u8_OUTPUT
#define DIO_u8_PIN_DIR_15        DIO_u8_OUTPUT
/*                    For PORTC                                           */
/*                    PINS 16 -> 23                                       */
#define DIO_u8_PIN_DIR_16        DIO_u8_OUTPUT
#define DIO_u8_PIN_DIR_17        DIO_u8_OUTPUT
#define DIO_u8_PIN_DIR_18        DIO_u8_OUTPUT
#define DIO_u8_PIN_DIR_19        DIO_u8_OUTPUT
#define DIO_u8_PIN_DIR_20        DIO_u8_OUTPUT
#define DIO_u8_PIN_DIR_21        DIO_u8_OUTPUT
#define DIO_u8_PIN_DIR_22        DIO_u8_OUTPUT
#define DIO_u8_PIN_DIR_23        DIO_u8_OUTPUT
/*                    For PORTD                                           */
/*                    PINS 24 -> 31                                       */
#define DIO_u8_PIN_DIR_24        DIO_u8_INPUT
#define DIO_u8_PIN_DIR_25        DIO_u8_OUTPUT
#define DIO_u8_PIN_DIR_26        DIO_u8_OUTPUT
#define DIO_u8_PIN_DIR_27        DIO_u8_OUTPUT
#define DIO_u8_PIN_DIR_28        DIO_u8_OUTPUT
#define DIO_u8_PIN_DIR_29        DIO_u8_OUTPUT
#define DIO_u8_PIN_DIR_30        DIO_u8_OUTPUT
#define DIO_u8_PIN_DIR_31        DIO_u8_OUTPUT
#endif

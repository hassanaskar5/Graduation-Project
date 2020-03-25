/****************************************************/
/*                                                  */
/*       Author         : Hassan Askar              */
/*       Date           : 08/04/2019                */
/*       Version        : 1.0 V                     */
/*       Description    : DIO_interfacing           */
/*                                                  */
/****************************************************/

#include "Std_Types.h"
#ifndef _DIO_INT_H
#define _DIO_INT_H





/*           Defining HIGH and LOW                 */

#define DIO_u8_HIGH    1
#define DIO_u8_LOW     0







/*          Defining INPUT and OUTPUT             */

#define DIO_u8_INPUT   0
#define DIO_u8_OUTPUT  1




/*                Defining PINS                  */

/*                  FOR PORTA                    */
/*             From PIN 0 -> PIN 7               */
#define DIO_u8_PIN_0             0
#define DIO_u8_PIN_1             1
#define DIO_u8_PIN_2             2
#define DIO_u8_PIN_3             3
#define DIO_u8_PIN_4             4
#define DIO_u8_PIN_5             5
#define DIO_u8_PIN_6             6
#define DIO_u8_PIN_7             7


/*                  FOR PORTB                     */
/*             From PIN 8 -> PIN 15               */
#define DIO_u8_PIN_8             8
#define DIO_u8_PIN_9             9
#define DIO_u8_PIN_10            10
#define DIO_u8_PIN_11            11
#define DIO_u8_PIN_12            12
#define DIO_u8_PIN_13            13
#define DIO_u8_PIN_14            14
#define DIO_u8_PIN_15            15


/*                  FOR PORTC                    */
/*            From PIN 16 -> PIN 23              */
#define DIO_u8_PIN_16            16
#define DIO_u8_PIN_17            17
#define DIO_u8_PIN_18            18
#define DIO_u8_PIN_19            19
#define DIO_u8_PIN_20            20
#define DIO_u8_PIN_21            21
#define DIO_u8_PIN_22            22
#define DIO_u8_PIN_23            23


/*                  FOR PORTD                    */
/*            From PIN 24 -> PIN 31              */
#define DIO_u8_PIN_24            24
#define DIO_u8_PIN_25            25
#define DIO_u8_PIN_26            26
#define DIO_u8_PIN_27            27
#define DIO_u8_PIN_28            28
#define DIO_u8_PIN_29            29
#define DIO_u8_PIN_30            30
#define DIO_u8_PIN_31            31






/************************************************/
/*                                              */
/*           PROTOTYPES DECLERATION             */
/*                                              */
/************************************************/




/*        Intializing PINS Directions           */
void DIO_void_Intialization(void);





/*             Set PIN Value                    */
void DIO_void_SetPinValue(u8 PinNumber_u8_cpy, u8 PinValue_u8_cpy);





/*            Get Pin Value                     */
u8 DIO_u8_GetPinValue(u8 PinNumber_u8_cpy);





/*            Toogle a PIN                      */
void DIO_void_TooglePin(u8 PinNumber_u8_cpy);





/*          Set PIN Direction                   */
void DIO_void_SetPinDirection(u8 PinNumber_u8_cpy, u8 PinDirection_u8_cpy);







#endif
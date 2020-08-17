
/****************************************************************/
/*   Author             :    Mohamed Hashem					    */
/*	 Date 				:    30 Mar 2020  						*/
/*	 Version 			:    1.0V 							 	*/
/*	 Description 		:   public Accessing mechanism prototype*/
/*							and Sense Mode Definition [int.h] 	*/
/****************************************************************/



/****************************************************************/
/* Description   : Guard to protect this File from include more */
/*                 than one time .                              */
/****************************************************************/

#ifndef TEM_INIT_H_
#define TEM_INIT_H_

extern void Temp_voidInit(void);
extern void Temp_voidCalcAndTransmit(void);
void Temp_TIM0_SetCallBackOvf(pf address_cpy);

#endif

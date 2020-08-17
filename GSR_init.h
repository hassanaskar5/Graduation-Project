/****************************************************************/
/*   Author             :    Hassan Emad Askar				    */
/*	 Date 				:    2 May 2019  						*/
/*	 Version 			:    1.0V 							 	*/
/*	 Description 		:   public Accessing mechanism prototype*/
/*							and Sense Mode Definition [int.h] 	*/
/****************************************************************/



/****************************************************************/
/* Description   : Guard to protect this File from include more */
/*                 than one time .                              */
/****************************************************************/

#ifndef _GSR_INT_H
#define _GSR_INT_H

void GSR_voidInit(void);
void GSR_voidCalcAndTransmit(void);
void GSR_TIM0_SetCallBackOvf(pf address_cpy);

#endif

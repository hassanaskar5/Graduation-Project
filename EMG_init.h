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

#ifndef _EMG_INT_H
#define _EMG_INT_H

void EMG_voidInit(void);
void EMG_voidCalcAndTransmit(void);
void EMG_TIM0_SetCallBackOvf(pf address_cpy);
#endif

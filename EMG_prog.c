/****************************************************/
/*                                                  */
/*       Author         : Hassan Askar              */
/*       Date           : 08/04/2019                */
/*       Version        : 1.0 V                     */
/*       Description    : EMG_Program		        */
/*                                                  */
/****************************************************/

/****************************************************************/
/*********************** STD LIB DIRECTIVES *********************/
/****************************************************************/

#include "STD_Types.h"
#include "Bit_Math.h"
#include "LBTY_int.h"

/****************************************************************/
/*********************** Component DIRECTIVES *******************/
/****************************************************************/

#include "ADC_int.h"
#include "TIM0_int.h"
#include "USART_init.h"
#include "EMG_config.h"
#include "EMG_init.h"
#include "EMG_private.h"
#include <stdio.h>
/****************************************************************/
/*********************** Function Implementation  ***************/
/****************************************************************/


/****************************************************************/
/* Description    :  This function used to initialize EMG 	    */
/*					 Inputs : void 								*/
/*					 return : void		 						*/
/****************************************************************/




void EMG_voidInit(void)
{
	ADC_voidInit(EMG_CHANNEL_NUMBER);
	ADC_voidEnable();
	TIM0_init();
	TIM0_enableOverflowinterrupt();
	TIM0_SetTCNT0(124);
}

/****************************************************************/
/* Description    : This function used to calc EMG & 			*/
/*					transmit the result							*/
/*					Inputs : void					  			*/
/*					Return : vois								*/
/****************************************************************/
/* Pre_condition  :  this function must be used after EMG 		*/
/*     				 initialized 							    */
/****************************************************************/

void EMG_TIM0_SetCallBackOvf(pf address_cpy)
{
	
	TIM0_SetCallBackOvf(address_cpy);
}

void EMG_voidCalcAndTransmit()
{
	u16 i=0;
	u8 *str;
	TIM0_SetTCNT0(100);
	i=ADC_u16ReadADC() ;
	USART_TransmitString("E");
	USART_TransmitString(itoa(i,str,10));
	USART_TransmitString("\n");
}


/***********************************************************************************************/
/************************************* END OF PROGRAM ******************************************/
/***********************************************************************************************/


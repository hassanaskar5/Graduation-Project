/****************************************************/
/*                                                  */
/*       Author         : Mohamed Hashem            */
/*       Date           : 08/04/2019                */
/*       Version        : 1.0 V                     */
/*       Description    : Temp_Program	            */
/*                                                  */
/****************************************************/

/****************************************************************/
/*********************** STD LIB DIRECTIVES *********************/
/****************************************************************/


/****************************************************************/
/* Description    :  This function used to initialize Temp 	    */
/*					 Inputs : void 								*/
/*					 return : void		 						*/
/****************************************************************/





/***********************************************************************************************/
/************************************* END OF PROGRAM ******************************************/
/***********************************************************************************************/

#include "STD_Types.h"
#include "Bit_Math.h"
#include "LBTY_int.h"

/****************************************************************/
/*********************** Component DIRECTIVES *******************/
/****************************************************************/

#include "ADC_int.h"
#include "TIM0_int.h"
#include "USART_init.h"
#include "Tem_config.h"
#include "Tem_init.h"
#include "Tem_private.h"
#include <stdio.h>
/****************************************************************/
/*********************** Function Implementation  ***************/
/****************************************************************/


/****************************************************************/
/* Description    :  This function used to initialize EMG 	    */
/*					 Inputs : void 								*/
/*					 return : void		 						*/
/****************************************************************/




void Temp_voidInit(void)
{
	ADC_voidInit(Temp_CHANNEL_NUMBER);
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

void Temp_TIM0_SetCallBackOvf(pf address_cpy)
{

	TIM0_SetCallBackOvf(address_cpy);
}

void Temp_voidCalcAndTransmit()
{
	u16 i=0,r;
	u8 *str;
	TIM0_SetTCNT0(100);
	i=ADC_u16ReadADC() ;
	r=(i*58)/1000;
	USART_TransmitString("E");
	USART_TransmitString(itoa(r,str,10));
	USART_TransmitString("\n");
}


/***********************************************************************************************/
/************************************* END OF PROGRAM ******************************************/
/***********************************************************************************************/


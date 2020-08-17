/****************************************************/
/*                                                  */
/*       Author         : Hassan Askar              */
/*       Date           : 08/04/2019                */
/*       Version        : 1.0 V                     */
/*       Description    : GSR_Program		         */
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
#include "GSR_config.h"
#include "GSR_init.h"
#include "GSR_private.h"
#include <stdio.h>
/****************************************************************/
/*********************** Function Implementation  ***************/
/****************************************************************/


/****************************************************************/
/* Description    :  This function used to initialize GSR 	    */
/*					 Inputs : void 								*/
/*					 return : void		 						*/
/****************************************************************/


void GSR_voidInit(void)
{
	ADC_voidInit(GSR_CHANNEL_NUMBER);
	ADC_voidEnable();
	TIM0_init();
	TIM0_enableOverflowinterrupt();
	TIM0_SetTCNT0(124);
}

void GSR_TIM0_SetCallBackOvf(pf address_cpy)
{

	TIM0_SetCallBackOvf(address_cpy);
}

/****************************************************************/
/* Description    : This function used to calc GSR & 			*/
/*					transmit the result							*/
/*					Inputs : void					  			*/
/*					Return : vois								*/
/****************************************************************/
/* Pre_condition  :  this function must be used after GSR 		*/
/*     				 initialized 							    */
/****************************************************************/

void GSR_voidCalcAndTransmit(void)
{
	u8 *s ;
	u16 i=0,r=0,sum=0,j;
	TIM0_SetTCNT0(100);
	for(j=0;j<=10;j++)
	{
		i=ADC_u16ReadADC();
		sum+=i;
	}
	r=sum/10;
	USART_TransmitString("E");
	USART_TransmitString(itoa(r,s,10));
	USART_TransmitString("\n");
}


/***********************************************************************************************/
/************************************* END OF PROGRAM ******************************************/
/***********************************************************************************************/


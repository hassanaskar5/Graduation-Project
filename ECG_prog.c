/****************************************************/
/*                                                  */
/*       Author         : Mohamed Hashem            */
/*       Date           : 08/04/2019                */
/*       Version        : 1.0 V                     */
/*       Description    : ECG_Program	            */
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
#include "ECG_config.h"
#include "ECG_init.h"
#include "ECG_private.h"
#include "DIO_int.h"
#include <stdio.h>
/****************************************************************/
/*********************** Function Implementation  ***************/
/****************************************************************/


/****************************************************************/
/* Description    :  This function used to initialize ECG 	    */
/*					 Inputs : void 								*/
/*					 return : void		 						*/
/****************************************************************/


void ECG_voidInit(void)
{
	ADC_voidInit(ECG_CHANNEL_NUMBER);
	ADC_voidEnable();
}

/****************************************************************/
/* Description    : This function used to calc ECG & 			*/
/*					transmit the result							*/
/*					Inputs : void					  			*/
/*					Return : vois								*/
/****************************************************************/
/* Pre_condition  :  this function must be used after ECG 		*/
/*     				 initialized 							    */
/****************************************************************/

void ECG_voidCalcAndTransmit()
{
	u16 ecg_value = 0;
	u8 *str;

	if ((DIO_u8_GetPinValue(28) == 1) || (DIO_u8_GetPinValue(29) == 1))
	{
		USART_TransmitString("ERROR!!\n");
	}
	else
	{
		ecg_value = ADC_u16ReadADC();
		USART_TransmitString("E");
		USART_TransmitString(itoa(ecg_value,str,10));
		USART_TransmitString("\n");
	}
}

/***********************************************************************************************/
/************************************* END OF PROGRAM ******************************************/
/***********************************************************************************************/

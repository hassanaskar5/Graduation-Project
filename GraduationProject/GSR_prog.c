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
#include "GSR_config.h"
#include "GSR_init.h"
#include "GSR_private.h"

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
	u16 i=0,Human_Resistance;
	i=ADC_u16ReadADC();
	i-=30;
	Human_Resistance = (((2*i)+1024)*10)/(512-i);
	USART_TransmitString(itoa(Human_Resistance,s,10));
	USART_TransmitString(" Kohm\n");
	delnms(50);
}


/***********************************************************************************************/
/************************************* END OF PROGRAM ******************************************/
/***********************************************************************************************/


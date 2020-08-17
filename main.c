/****************************************************************/
/*   Author             :    Hassan Emad Askar				    */
/*	 Date 				:    2 May 2019  						*/
/*	 Version 			:    1.0V 							 	*/ 
/****************************************************************/


#include "LBTY_int.h"
#include "Std_Types.h"
#include "DIO_int.h"
#include "ADC_int.h"
#include "GIE_int.h"
#include "TIM0_int.h"
#include "USART_init.h"
#include "GSR_init.h"
#include "EMG_init.h"
#include "ECG_init.h"
#include "Tem_init.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

u8 r=NULL;
void Temp_Sample()
{
	Temp_voidCalcAndTransmit();
}
void RecievingInterrupt()
{
    r = USART_Receive();
}
void GSR_Sample()
{
	GSR_voidCalcAndTransmit();
}
void EMG_Sample()
{
    EMG_voidCalcAndTransmit();
}


int main(void)
{
    DIO_void_Intialization();
    GIE_void_enable();
    USART_Init();
    USART_EnableRxInterrupt();
    USART_Recieve_INTR(RecievingInterrupt);

    while(1)
    {

    	switch(r)
    	{
    	case '0' :
            ADC_voidDisable();
            TIM0_disbleOverflowinterrupt();
            USART_TransmitString("\nAll Sensors Are OFF\n\n");
            while(r=='0');
            break;

    	case '1' :
        	GSR_voidInit();
            while(r=='1')
            {

            	GSR_TIM0_SetCallBackOvf(GSR_Sample);
            }
            break;

    	case '2' :
            EMG_voidInit();
            while(r=='2')
            {
                EMG_TIM0_SetCallBackOvf(EMG_Sample);
            }
            break;

    	case '3' :
    		ECG_voidInit();
    		while(r=='3')
    		{
    			ECG_voidCalcAndTransmit();
    		}
    		break;

    	case '4' :
    		Temp_voidInit();
    		while(r=='4')
    		{
    			Temp_TIM0_SetCallBackOvf(Temp_Sample);
    		}
            break;

    	case '6' :
    		   USART_TransmitString("OK");
    		   r='7';
    	    break;

    	}


    }

    return 0;

}

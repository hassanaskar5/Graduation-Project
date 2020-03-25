#include "LBTY_int.h"
#include "DIO_int.h"
#include "ADC_int.h"
#include "GIE_int.h"
#include "USART_init.h"
#include "GSR_init.h"
#include "EMG_init.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

u8 r=NULL;

void RecievingInterrupt()
{
    r = USART_Receive();
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
        if(r=='0')//NULL
        {
            USART_TransmitString("\nAll Sensors Are OFF\n\n");
            ADC_voidDisable();
            TIM0_disbleOverflowinterrupt();
            while(r=='0');
        }
        else if(r=='1')//GSR
        {
            USART_TransmitString("GSR Sensor Is ON\n");
            GSR_voidInit();
            while(r=='1')
            {
                GSR_voidCalcAndTransmit();
            }
        }
        else if(r=='2')//EMG
        {
            USART_TransmitString("EMG Sensor Is ON\n");
            EMG_voidInit();
            while(r=='2')
            {
                EMG_TIM0_SetCallBackOvf(EMG_Sample);
            }
        }
        else if(r=='3')//ECG
        {
            USART_TransmitString("ECG Sensor Is ON\n");
            while(r=='3')
            {

            }
        }
        else if(r=='4')//TEMP
        {
            USART_TransmitString("Temp Sensor Is ON\n");
            while(r=='4')
            {

            }
        }
    }

    return 0;

}

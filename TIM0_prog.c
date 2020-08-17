#include "Std_types.h"
#include "Bit_Math.h"
#include "TIM0_config.h"
#include "TIM0_int.h"
#include "TIM0_priv.h"


static pf y;
static pf n;
void TIM0_init(){
	TCCR = 0b00000101;
	SET_BIT(TIMSK , 0);
	SET_BIT(TIFR ,0);
}

void TIM0_enableOverflowinterrupt(){
	SET_BIT(TIMSK, 0);
}
void TIM0_disbleOverflowinterrupt(){
	CLEAR_BIT(TIMSK, 0);
}

void TIM0_SetCallBackOvf(pf x){
	y=x;
}

void TIM0_SetCallBack(pf z){
	n = z;
}

void __vector_11(void) __attribute__((signal , used));

void __vector_11(void){
	y();
}

void TIM0_SetTCNT0(u8 data){
	TCNT = data;
}
void TIM0_SetOcr(u8 data){
	OCR=data;
}
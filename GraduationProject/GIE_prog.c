/****************************************************/
/*                                                  */
/*       Author         : Hesham Erfan              */
/*       Date           : 20/04/2019                */
/*       Version        : 1.0 V                     */
/*       Description    : GIE_program               */    
/*                                                  */
/****************************************************/


#include "STD_Types.h"
#include "Bit_Math.h"

#include "DIO_int.h"

#include "GIE_int.h"
#include "GIE_config.h"
#include "GIE_priv.h"

void GIE_void_enable(void){
	SET_BIT(SREG, 7);
}
void GIE_void_disable(void){
	CLEAR_BIT(SREG, 7);
}
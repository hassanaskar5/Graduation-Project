/****************************************************/
/*                                                  */
/*       Author         : Hassan Askar              */
/*       Date           : 08/04/2019                */
/*       Version        : 1.0 V                     */
/*       Description    : DIO_Driver                */
/*                                                  */
/****************************************************/




/*            LIBRARIES INCLUDING                   */
#include "Std_Types.h"
#include "Bit_Math.h"


/*          DIO HEADER FILES INCLUDEING             */
#include "DIO_int.h"
#include "DIO_config.h"
#include "DIO_priv.h"



void DIO_void_Intialization(void){
	DDRA = DIO_u8_PORTA_Directions;
	DDRB = DIO_u8_PORTB_Directions;
	DDRC = DIO_u8_PORTC_Directions;
	DDRD = DIO_u8_PORTD_Directions;
}




/* Function that set a certain PIN Value as an output with High or Low */
void DIO_void_SetPinValue(u8 PinNumber_u8_cpy, u8 PinValue_u8_cpy){
	/*  Here we check the pin number to find in which range it is      */
	
	if(PinNumber_u8_cpy >= PORTA_START && PinNumber_u8_cpy <=PORTA_END){ 
        /* If Pin number is within the PORTA range we check the requested value  */
		
		if(PinValue_u8_cpy == DIO_u8_HIGH){
			SET_BIT(PORTA, PinNumber_u8_cpy);    //Makes the requested PIN as High
			
		}else if(PinValue_u8_cpy == DIO_u8_LOW){
			CLEAR_BIT(PORTA, PinNumber_u8_cpy); //Makes the requested PIn as LOW
			
		}
		
		
	}else if(PinNumber_u8_cpy >= PORTB_START && PinNumber_u8_cpy <= PORTB_END){
		/* If Pin number is within the PORTB range  */
		
		PinNumber_u8_cpy = PinNumber_u8_cpy - PORTA_SIZE;   //Descard PORTA Size to use the PIN within PORTB
		
		if(PinValue_u8_cpy == DIO_u8_HIGH){
			SET_BIT(PORTB, PinNumber_u8_cpy);    //Makes the requested PIN as High
			
		}else if(PinValue_u8_cpy == DIO_u8_LOW){
			CLEAR_BIT(PORTB, PinNumber_u8_cpy); //Makes the requested PIn as LOW
			
		}
		
	}else if(PinNumber_u8_cpy >= PORTC_START && PinNumber_u8_cpy <= PORTC_END){
		/* If Pin number is within the PORTC range  */
		
		PinNumber_u8_cpy = PinNumber_u8_cpy - PORTA_SIZE - PORTB_SIZE;   //Descard PORTA & PORTB Sizes to use the PIN within PORTB
		
		if(PinValue_u8_cpy == DIO_u8_HIGH){
			SET_BIT(PORTC, PinNumber_u8_cpy);    //Makes the requested PIN as High
			
		}else if(PinValue_u8_cpy == DIO_u8_LOW){
			CLEAR_BIT(PORTC, PinNumber_u8_cpy); //Makes the requested PIn as LOW
			
		}
		
	}else if(PinNumber_u8_cpy >= PORTD_START && PinNumber_u8_cpy <= PORTD_END){
		/* If Pin number is within the PORTC range  */
		
		PinNumber_u8_cpy = PinNumber_u8_cpy - PORTA_SIZE - PORTB_SIZE - PORTC_SIZE;   //Descard PORTA & PORTB & PORTC Sizes to use the PIN within PORTB
		
		if(PinValue_u8_cpy == DIO_u8_HIGH){
			SET_BIT(PORTD, PinNumber_u8_cpy);    //Makes the requested PIN as High
			
		}else if(PinValue_u8_cpy == DIO_u8_LOW){
			CLEAR_BIT(PORTD, PinNumber_u8_cpy); //Makes the requested PIn as LOW
			
		}
	}
}








/* Function that Get a certain PIN Value if it was High or Low */
u8 DIO_u8_GetPinValue(u8 PinNumber_u8_cpy){
	u8 Loc_u8_ReturnedPinValue;
	
	/*  Here we check the pin number to find in which range it is      */
	
	if(PinNumber_u8_cpy >= PORTA_START && PinNumber_u8_cpy <=PORTA_END){ 
        /* If Pin number is within the PORTA we get it  */
		Loc_u8_ReturnedPinValue = GET_BIT(PINA, PinNumber_u8_cpy);
		
	}else if(PinNumber_u8_cpy >= PORTB_START && PinNumber_u8_cpy <= PORTB_END){
		/* If Pin number is within the PORTB range  */
		
		PinNumber_u8_cpy = PinNumber_u8_cpy - PORTA_SIZE;   //Descard PORTA Size to use the PIN within PORTB
		Loc_u8_ReturnedPinValue = GET_BIT(PINB, PinNumber_u8_cpy);
		
	}else if(PinNumber_u8_cpy >= PORTC_START && PinNumber_u8_cpy <= PORTC_END){
		/* If Pin number is within the PORTC range  */
		
		PinNumber_u8_cpy = PinNumber_u8_cpy - PORTA_SIZE - PORTB_SIZE;   //Descard PORTA & PORTB Sizes to use the PIN within PORTB
		Loc_u8_ReturnedPinValue = GET_BIT(PINC, PinNumber_u8_cpy);
		
	}else if(PinNumber_u8_cpy >= PORTD_START && PinNumber_u8_cpy <= PORTD_END){
		/* If Pin number is within the PORTC range  */
		
		PinNumber_u8_cpy = PinNumber_u8_cpy - PORTA_SIZE - PORTB_SIZE - PORTC_SIZE;   //Descard PORTA & PORTB & PORTC Sizes to use the PIN within PORTB
		Loc_u8_ReturnedPinValue = GET_BIT(PIND, PinNumber_u8_cpy);
	}
	
	return Loc_u8_ReturnedPinValue;
}




void DIO_void_TooglePin(u8 PinNumber_u8_cpy){
	/*  Here we check the pin number to find in which range it is      */
	
	if(PinNumber_u8_cpy >= PORTA_START && PinNumber_u8_cpy <=PORTA_END){ 
        /* If Pin number is within the PORTA we get it  */
		TOGGLE_BIT(PORTA, PinNumber_u8_cpy);
		
	}else if(PinNumber_u8_cpy >= PORTB_START && PinNumber_u8_cpy <= PORTB_END){
		/* If Pin number is within the PORTB range  */
		
		PinNumber_u8_cpy = PinNumber_u8_cpy - PORTA_SIZE;   //Descard PORTA Size to use the PIN within PORTB
		TOGGLE_BIT(PORTB, PinNumber_u8_cpy);
		
	}else if(PinNumber_u8_cpy >= PORTC_START && PinNumber_u8_cpy <= PORTC_END){
		/* If Pin number is within the PORTC range  */
		
		PinNumber_u8_cpy = PinNumber_u8_cpy - PORTA_SIZE - PORTB_SIZE;   //Descard PORTA & PORTB Sizes to use the PIN within PORTB
		TOGGLE_BIT(PORTC, PinNumber_u8_cpy);
		
	}else if(PinNumber_u8_cpy >= PORTD_START && PinNumber_u8_cpy <= PORTD_END){
		/* If Pin number is within the PORTC range  */
		
		PinNumber_u8_cpy = PinNumber_u8_cpy - PORTA_SIZE - PORTB_SIZE - PORTC_SIZE;   //Descard PORTA & PORTB & PORTC Sizes to use the PIN within PORTB
		TOGGLE_BIT(PORTD, PinNumber_u8_cpy);
	}
}




/*            Function to change the PIN Direction         */
void DIO_void_SetPinDirection(u8 PinNumber_u8_cpy, u8 PinDirection_u8_cpy){
	/*  Here we check the pin number to find in which range it is      */
	
	if(PinNumber_u8_cpy >= PORTA_START && PinNumber_u8_cpy <=PORTA_END){ 
        /* If Pin number is within the PORTA range we check the requested value  */
		
		if(PinDirection_u8_cpy == DIO_u8_OUTPUT){
			SET_BIT(DDRA, PinNumber_u8_cpy);    //Makes the requested PIN as OUTPUT
			
		}else if(PinDirection_u8_cpy == DIO_u8_INPUT){
			CLEAR_BIT(DDRA, PinNumber_u8_cpy); //Makes the requested PIn as INPUT
			
		}
		
		
	}else if(PinNumber_u8_cpy >= PORTB_START && PinNumber_u8_cpy <= PORTB_END){
		/* If Pin number is within the PORTB range  */
		
		PinNumber_u8_cpy = PinNumber_u8_cpy - PORTA_SIZE;   //Descard PORTA Size to use the PIN within PORTB
		
		if(PinDirection_u8_cpy == DIO_u8_OUTPUT){
			SET_BIT(DDRB, PinNumber_u8_cpy);    //Makes the requested PIN as OUTPUT
			
		}else if(PinDirection_u8_cpy == DIO_u8_INPUT){
			CLEAR_BIT(DDRB, PinNumber_u8_cpy); //Makes the requested PIn as INPUT
			
		}
		
	}else if(PinNumber_u8_cpy >= PORTC_START && PinNumber_u8_cpy <= PORTC_END){
		/* If Pin number is within the PORTC range  */
		
		PinNumber_u8_cpy = PinNumber_u8_cpy - PORTA_SIZE - PORTB_SIZE;   //Descard PORTA & PORTB Sizes to use the PIN within PORTB
		
		if(PinDirection_u8_cpy == DIO_u8_OUTPUT){
			SET_BIT(DDRC, PinNumber_u8_cpy);    //Makes the requested PIN as OUTPUT
			
		}else if(PinDirection_u8_cpy == DIO_u8_INPUT){
			CLEAR_BIT(DDRC, PinNumber_u8_cpy); //Makes the requested PIn as INPUT
			
		}
		
	}else if(PinNumber_u8_cpy >= PORTD_START && PinNumber_u8_cpy <= PORTD_END){
		/* If Pin number is within the PORTC range  */
		
		PinNumber_u8_cpy = PinNumber_u8_cpy - PORTA_SIZE - PORTB_SIZE - PORTC_SIZE;   //Descard PORTA & PORTB & PORTC Sizes to use the PIN within PORTB
		
		if(PinDirection_u8_cpy == DIO_u8_OUTPUT){
			SET_BIT(DDRD, PinNumber_u8_cpy);    //Makes the requested PIN as OUTPUT
			
		}else if(PinDirection_u8_cpy == DIO_u8_INPUT){
			CLEAR_BIT(DDRD, PinNumber_u8_cpy); //Makes the requested PIn as INPUT
			
		}
	}
}

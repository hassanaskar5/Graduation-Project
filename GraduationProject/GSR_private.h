

/****************************************************************/
/*   Author             :    Hassan Emad Askar				    */
/*	 Date 				:    2 May 2019 						*/
/*	 Version 			:    1.0V 							 	*/
/*	 Description 		:    contain the Memory mapped of		*/
/*							 [MCUCR,MCUCSR,GICR,GIFR] Registers */
/****************************************************************/


/****************************************************************/
/* Description   : Guard to protect this File from include more */
/*                 than one time .                              */
/****************************************************************/

#ifndef _ADC_PRIV_H
#define _ADC_PRIV_H

void delnms(u16 n)
{
	//delay n ms
	u16 x;
	while(n--)
	{
		x=2600;       //empirically determined fudge factor 16mhz
		while(x--);
	}
}


#endif	/**!comment : End of the guard [_ADC_PRIV_H]		   **/

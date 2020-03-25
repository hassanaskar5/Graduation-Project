/*********************************************/
/*                                           */
/*     Author         : Hassan Askar         */
/*     Date           : 20/10/2019           */
/*     Version        : 1.0 V                */
/*     Description    : Error Lib            */
/*                                           */
/*********************************************/

#ifndef _LBTY_H_    //This guards our file from being called more than one time           
#define _LBTY_H_

typedef enum Error{
	
	
	LBTY_OK,                //0
	LBTY_NOK,               //1
	LBTY_OUT_OF_RANGE,      //2
	LBTY_NULL_POINTER       //3
	
	
	
}ErrorStatus;






#endif
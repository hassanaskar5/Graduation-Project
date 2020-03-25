/*********************************************/
/*                                           */
/*     Author         : Hassan Askar         */
/*     Date           : 20/10/2019           */
/*     Version        : 1.0 V                */
/*     Description    : Bit_math Lib         */
/*                                           */
/*********************************************/

#ifndef _BIT_MATH_H_
#define _BIT_MATH_H_


#define SET_BIT(Reg, bitnum)      (Reg |=1<<bitnum)       /*  Setting the bit with "1"      */
#define CLEAR_BIT(Reg, bitnum)    (Reg &= ~(1<<bitnum))   /*  Setting the bit with "0"      */
#define TOGGLE_BIT(Reg, bitnum)   (Reg ^=1<<bitnum)       /*  Changing the bit              */
#define GET_BIT(Reg, bitnum)      ((Reg>>bitnum)&(0x01))  /*  Getting the value of the bit  */


#define SET_BYTE(Reg, Value)      (Reg=Value)             /*  Setting the Register with certain value */
#define CLEAR_BYTE(Reg)           (Reg=0)                 /*  Clear the Register                      */


#define  Conc(x7, x6, x5, x4, x3, x2, x1, x0) ConcHelp(x7, x6, x5, x4, x3, x2, x1, x0)   /* Concatinate 8 bits to create a byte to be put within a register */
#define  ConcHelp(x7, x6, x5, x4, x3, x2, x1, x0) 0b##x7##x6##x5##x4##x3##x2##x1##x0     



#endif    /*  End Guard    */
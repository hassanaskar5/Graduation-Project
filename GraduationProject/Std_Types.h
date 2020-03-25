/*********************************************/
/*                                           */
/*     Author         : Hassan Askar         */
/*     Date           : 20/10/2019           */
/*     Version        : 1.0 V                */
/*     Description    : std_LIB              */
/*                                           */
/*********************************************/

#ifndef _STD_TYPES_H_    //This guards our file from being called more than one time           
#define _STD_TYPES_H_


//New Type of unsigned 1-byte
   typedef unsigned  char      u8;

//New Type of unsigned 2-bytes
   typedef unsigned  short int u16;

//New Type of unsigned 4-bytes
   typedef unsigned  long int  u32;

//New Type of signed 1-byte
   typedef signed    char      s8;

//New Type of signed 2-byte
   typedef signed    short int s16;

//New Type of signed 4-byte
   typedef signed    long int  s32;

//New Type of float 4-byte
   typedef float              f32;

//New Type of float 8-byte
   typedef double             f64;

//New Type of float 16-byte
   typedef long double        f128;


//New Type as pointer to a void Function
typedef void (*pf) (void);








#endif                  
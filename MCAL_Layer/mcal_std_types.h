/* 
 * File:   mcal_std_types.h
 * Author: Mohamed Ibrahim
 *
 * Created on November 4, 2026, 6:23 PM
 */

#ifndef MCAL_STD_TYPES_H
#define	MCAL_STD_TYPES_H

/* ============================================================================================ */

/* Section: Includes */ 
#include "std_libraries.h"
#include "compiler.h"


/* Section : Macro Functions Declarations */ 

/* Section : Data Type Declarations */ 
typedef unsigned char  uint8;
typedef unsigned short uint16;
typedef unsigned long  uint32;
typedef signed char    sint8;
typedef signed short   sint16;
typedef signed long    sint32;

typedef uint8 Std_ReturnType;

/* Section : Macro Declarations */ 
#define STD_HIGH    0x01        /* Physical state 5V or 3.3V */
#define STD_LOW     0x00        /* Physical state 0V */



#define STD_ON      0x01
#define STD_OFF     0x00

#define STD_ACTIVE  0x01        /* Logical state active */
#define STD_IDLE    0x00        /* Logical state idle */

#define E_OK      (Std_ReturnType)0x01
#define E_NOT_OK  (Std_ReturnType)0x00

/* Section : Function Prototype */ 

/* */  /* */

/* ============================================================================================ */




#endif	/* MCAL_STD_TYPES_H */


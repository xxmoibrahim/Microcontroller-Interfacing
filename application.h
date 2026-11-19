/* 
 * File:   application.h
 * Author: Mohamed Ibrahim
 *
 * Created on November 4, 2026, 6:41 PM
 */

#ifndef APPLICATION_H
#define	APPLICATION_H



/* ============================================================================================ */

/* Section: Includes */ 

#include "ECU_Layer/LED/ecu_led.h"
#include "ECU_Layer/BUTTON/ecu_button.h"
#include "ECU_Layer/RELAY/ecu_relay.h"
#include "ECU_Layer/DC_MOTOR/ecu_dc_motor.h"

/* Section : Macro Declarations */ 

/* Section : Macro Functions Declarations */ 

/* Section : Data Type Declarations */ 

/* Section : Function Prototype */ 
void application_initialize (void);
/* */  /* */

/* ============================================================================================ */

#define _XTAL_FREQ 8000000

#endif	/* APPLICATION_H */


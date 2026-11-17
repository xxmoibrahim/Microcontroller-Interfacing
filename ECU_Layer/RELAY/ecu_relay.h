/* 
 * File:   ecu_relay.h
 * Author: Mohamed Ibrahim
 *
 * Created on November 17, 2026, 2:15 PM
 */

#ifndef ECU_RELAY_H
#define	ECU_RELAY_H


/* ============================================================================================ */

/* Section: Includes */ 

#include "ecu_relay_cfg.h"
#include "../../MCAL_Layer/GPIO/hal_gpio.h"

/* Section : Macro Declarations */ 
#define RELAY_ON_STATUS  0x01U
#define RELAY_OFF_STATUS 0x00U
/* Section : Macro Functions Declarations */ 

/* Section : Data Type Declarations */ 


typedef struct{
    uint8 relay_port    : 4;
    uint8 relay_pin     : 3;
    uint8 relay_status  : 1;
}relay_t;
/* Section : Function Prototype */ 

Std_ReturnType relay_initialize(const relay_t *_relay);
Std_ReturnType relay_turn_on(const relay_t *_relay);
Std_ReturnType relay_turn_off(const relay_t *_relay);
Std_ReturnType relay_toggle(const relay_t *_relay);
/* ============================================================================================ */

/*  Initialization Example 
 * 
relay_t relay_1 = { .relay_port = PORTC_INDEX ,
                    .relay_pin = GPIO_PIN0 ,
                    .relay_status = RELAY_OFF_STATUS};
 * 
 */
#endif	/* ECU_RELAY_H */


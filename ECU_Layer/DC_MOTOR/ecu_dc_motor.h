/* 
 * File:   ecu_dc_motor.h
 * Author: Muhammed Ibrahim
 *
 * Created on November 18, 2026, 9:10 AM
 */

#ifndef ECU_DC_MOTOR_H
#define	ECU_DC_MOTOR_H

/* ============================================================================================ */

/* Section: Includes */ 
#include "ecu_dc_motor_cfg.h"
#include "../../MCAL_Layer/GPIO/hal_gpio.h"

/* Section : Macro Declarations */ 

#define DC_MOTOR_ON_STATUS  0x01U
#define DC_MOTOR_OFF_STATUS 0x00U

#define DC_MOTOR_PIN1  0x00
#define DC_MOTOR_PIN2  0x01

/* Section : Macro Functions Declarations */ 



/* Section : Data Type Declarations */ 

typedef struct{
    pin_config_t dc_motor_pins[2];
}dc_motor_t;

/* Section : Function Prototype */ 

Std_ReturnType dc_motor_initialize(const dc_motor_t *_dc_motor);
Std_ReturnType dc_motor_move_right(const dc_motor_t *_dc_motor);
Std_ReturnType dc_motor_move_left(const dc_motor_t *_dc_motor);
Std_ReturnType dc_motor_stop(const dc_motor_t *_dc_motor);

/* */  


/*  Initialization Example 
 * 
 * 
dc_motor_t dc_motor_1 = {
    .dc_motor_pins[DC_MOTOR_PIN1].port = PORTC_INDEX , 
    .dc_motor_pins[DC_MOTOR_PIN1].pin = GPIO_PIN0,
    .dc_motor_pins[DC_MOTOR_PIN1].direction = GPIO_DIRECTION_OUTPUT,
    .dc_motor_pins[DC_MOTOR_PIN1].logic = GPIO_LOW,
    .dc_motor_pins[DC_MOTOR_PIN2].port = PORTC_INDEX , 
    .dc_motor_pins[DC_MOTOR_PIN2].pin = GPIO_PIN1,
    .dc_motor_pins[DC_MOTOR_PIN2].direction = GPIO_DIRECTION_OUTPUT,
    .dc_motor_pins[DC_MOTOR_PIN2].logic = GPIO_LOW,    
};
 * 
 * 
 */
/* ============================================================================================ */

#endif	/* ECU_DC_MOTOR_H */


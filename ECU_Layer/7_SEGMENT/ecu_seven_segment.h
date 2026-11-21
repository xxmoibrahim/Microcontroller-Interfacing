/* 
 * File:   ecu_seven_segment.h
 * Author: Mohamed Ibrahim
 *
 * Created on November 21, 2026, 8:18 AM
 */

#ifndef ECU_SEVEN_SEGMENT_H
#define	ECU_SEVEN_SEGMENT_H

/* ============================================================================================ */

/* Section: Includes */ 
#include "ecu_seven_segment_cfg.h"
#include "../../MCAL_Layer/GPIO/hal_gpio.h"

/* Section : Macro Declarations */ 
#define SEVEN_SEGMENT_PIN1  0
#define SEVEN_SEGMENT_PIN2  1
#define SEVEN_SEGMENT_PIN3  2
#define SEVEN_SEGMENT_PIN4  3
/* Section : Macro Functions Declarations */ 


/* Section : Data Type Declarations */ 
typedef enum {
    SEGMENT_COMMON_ANODE,
    SEGMENT_COMMON_CATHODE    
}segment_type_t;

typedef struct {
    pin_config_t segment_pins[4];
    segment_type_t segment_type;
}segment_t;

/* Section : Function Prototype */ 
Std_ReturnType seven_segment_initialize(const segment_t *_segment);
Std_ReturnType seven_segment_write_number(const segment_t *_segment, uint8 number);

/*  Initialization Example 

segment_t segment_1 = {
    .segment_pins[SEVEN_SEGMENT_PIN1].port = PORTC_INDEX,
    .segment_pins[SEVEN_SEGMENT_PIN1].pin = GPIO_PIN0,
    .segment_pins[SEVEN_SEGMENT_PIN1].direction = GPIO_DIRECTION_OUTPUT,
    .segment_pins[SEVEN_SEGMENT_PIN1].logic = GPIO_LOW,

    .segment_pins[SEVEN_SEGMENT_PIN2].port = PORTC_INDEX,
    .segment_pins[SEVEN_SEGMENT_PIN2].pin = GPIO_PIN1,
    .segment_pins[SEVEN_SEGMENT_PIN2].direction = GPIO_DIRECTION_OUTPUT,
    .segment_pins[SEVEN_SEGMENT_PIN2].logic = GPIO_LOW,
    
    .segment_pins[SEVEN_SEGMENT_PIN3].port = PORTC_INDEX,
    .segment_pins[SEVEN_SEGMENT_PIN3].pin = GPIO_PIN2,
    .segment_pins[SEVEN_SEGMENT_PIN3].direction = GPIO_DIRECTION_OUTPUT,
    .segment_pins[SEVEN_SEGMENT_PIN3].logic = GPIO_LOW,
    
    .segment_pins[SEVEN_SEGMENT_PIN4].port = PORTC_INDEX,
    .segment_pins[SEVEN_SEGMENT_PIN4].pin = GPIO_PIN3,
    .segment_pins[SEVEN_SEGMENT_PIN4].direction = GPIO_DIRECTION_OUTPUT,
    .segment_pins[SEVEN_SEGMENT_PIN4].logic = GPIO_LOW,
    
    .segment_type = SEGMENT_COMMON_ANODE
};

 */
/* ============================================================================================ */

#endif	/* ECU_SEVEN_SEGMENT_H */


/*
 * File:   application.c
 * Author: Muhammed Ibrahim
 *
 * Created on November 4, 2026, 5:47 PM
 */
/*=================================================================================================*/
#include "application.h"
/*=================================================================================================*/


Std_ReturnType ret = E_NOT_OK;

segment_t seg1 = {
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

pin_config_t seg1_enable ={
    .port = PORTD_INDEX,
    .pin = GPIO_PIN0,
    .direction = GPIO_DIRECTION_OUTPUT,
    .logic = GPIO_LOW
};

pin_config_t seg2_enable ={
    .port = PORTD_INDEX,
    .pin = GPIO_PIN1,
    .direction = GPIO_DIRECTION_OUTPUT,
    .logic = GPIO_LOW
};


uint8 number = 0 ;
int main()
{

    application_initialize();
    
    while (1)
    {
        for (number = 0 ; number < 100 ; number ++){

            ret = seven_segment_write_number(&seg1,number);
            __delay_ms(500);
        }
        
    }
    return (EXIT_SUCCESS);
}

void application_initialize(void)
{
   ret =  seven_segment_initialize(&seg1);
   ret = gpio_pin_initialize(&seg1_enable);
   ret = gpio_pin_initialize(&seg2_enable);
}
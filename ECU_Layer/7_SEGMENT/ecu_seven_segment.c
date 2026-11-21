/* 
 * File:   ecu_seven_segment.c
 * Author: Mohamed Ibrahim
 *
 * Created on November 4, 2026, 6:34 PM
 */

#include "ecu_seven_segment.h"


/**
 * 
 * 
 * @param _segment
 * @return 
 */
Std_ReturnType seven_segment_initialize(const segment_t *_segment){
    Std_ReturnType ret = E_OK;
    if(NULL == _segment){
        ret = E_NOT_OK;
    }
    else{
        ret = gpio_pin_initialize(&(_segment->segment_pins[SEVEN_SEGMENT_PIN1]));
        ret = gpio_pin_initialize(&(_segment->segment_pins[SEVEN_SEGMENT_PIN2]));
        ret = gpio_pin_initialize(&(_segment->segment_pins[SEVEN_SEGMENT_PIN3]));
        ret = gpio_pin_initialize(&(_segment->segment_pins[SEVEN_SEGMENT_PIN4]));
    }    
    return ret ;
}


/**
 * 
 * @param _segment
 * @param number
 * @return 
 */
Std_ReturnType seven_segment_write_number(const segment_t *_segment, uint8 number){
    Std_ReturnType ret = E_OK;
    if(NULL == _segment || number > 9){
        ret = E_NOT_OK;
    }
    else{
        ret = gpio_pin_write_logic(&(_segment->segment_pins[SEVEN_SEGMENT_PIN1]), (number>>0) & 0x01);
        ret = gpio_pin_write_logic(&(_segment->segment_pins[SEVEN_SEGMENT_PIN2]), (number>>1) & 0x01);
        ret = gpio_pin_write_logic(&(_segment->segment_pins[SEVEN_SEGMENT_PIN3]), (number>>2) & 0x01);
        ret = gpio_pin_write_logic(&(_segment->segment_pins[SEVEN_SEGMENT_PIN4]), (number>>3) & 0x01);
    }    
    return ret ;
}
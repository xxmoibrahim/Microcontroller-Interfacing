/* 
 * File:   ecu_relay.c
 * Author: Muhammed Ibrahim
 *
 * Created on November 4, 2026, 6:34 PM
 */

#include "ecu_relay.h"

/**
 * 
 * @param relay
 * @return 
 */
Std_ReturnType relay_initialize(const relay_t *_relay){
    Std_ReturnType ret = E_OK;
    if(NULL == _relay){
        ret = E_NOT_OK;
    }
    else{
        pin_config_t pin_obj = {.port = _relay->relay_port ,
                                .pin = _relay->relay_pin,
                                .direction = GPIO_DIRECTION_OUTPUT,
                                .logic = _relay->relay_status};
        ret = gpio_pin_initialize(&pin_obj);
    }
    return ret ;
}

/**
 * 
 * @param relay
 * @return 
 */
Std_ReturnType relay_turn_on(const relay_t *_relay){
    Std_ReturnType ret = E_OK;
    if(NULL == _relay){
        ret = E_NOT_OK;
    }
    else{
        pin_config_t pin_obj = {.port = _relay->relay_port ,
                                .pin = _relay->relay_pin,
                                .direction = GPIO_DIRECTION_OUTPUT,
                                .logic = _relay->relay_status};
        ret = gpio_pin_write_logic(&pin_obj,GPIO_HIGH);
    }
    return ret ;
}

/**
 * 
 * @param relay
 * @return 
 */
Std_ReturnType relay_turn_off(const relay_t *_relay){
    Std_ReturnType ret = E_OK;
    if(NULL == _relay){
        ret = E_NOT_OK;
    }
    else{
        pin_config_t pin_obj = {.port = _relay->relay_port ,
                                .pin = _relay->relay_pin,
                                .direction = GPIO_DIRECTION_OUTPUT,
                                .logic = _relay->relay_status};
        ret = gpio_pin_write_logic(&pin_obj,GPIO_LOW);
    }
    return ret ;
}

/**
 * 
 * @param relay
 * @return 
 */
Std_ReturnType relay_toggle(const relay_t *_relay){
    Std_ReturnType ret = E_OK;
    if(NULL == _relay){
        ret = E_NOT_OK;
    }
    else{
        pin_config_t pin_obj = {.port = _relay->relay_port ,
                                .pin = _relay->relay_pin,
                                .direction = GPIO_DIRECTION_OUTPUT,
                                .logic = _relay->relay_status};
        ret = gpio_pin_toggle_logic(&pin_obj);
    }
    return ret ;
}
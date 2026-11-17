/*
 * File:   application.c
 * Author: Muhammed Ibrahim
 *
 * Created on November 4, 2026, 5:47 PM
 */
/*=================================================================================================*/
#include "application.h"

/*=================================================================================================*/

led_t led_1 = {.port_name = PORTC_INDEX, .pin = GPIO_PIN1, .led_status = LED_OFF};

button_t button_high = {.button_pin = {.port = PORTC_INDEX, .pin = GPIO_PIN2, .direction = GPIO_DIRECTION_INPUT, .logic = GPIO_LOW}, .button_connection = BUTTON_ACTIVE_HIGH, .button_state = BUTTON_RELEASED};

Std_ReturnType ret = E_NOT_OK;
button_state_t button_high_state = BUTTON_RELEASED;
button_state_t button_high_valid_state = BUTTON_RELEASED;// Store The Final valid State of the button
uint32 button_high_valid_counter = 0; // Store Threshold Value for debouncing

int main()
{

    application_initialize();

    while (1)
    {
        ret = button_read_state(&button_high, &button_high_state);

        if (BUTTON_PRESSED == button_high_state)
        {
            button_high_valid_counter++;
            if (button_high_valid_counter > 500) /* 500 acts as threshold value */
            { 
                button_high_valid_state = BUTTON_PRESSED;  /* valid status */
            }
        }
        else
        {
            button_high_valid_counter = 0;
            button_high_valid_state = BUTTON_RELEASED;  /* valid status */
        }
    }
    return (EXIT_SUCCESS);
}

void application_initialize(void)
{

    ret = button_initialize(&button_high);
    ret = led_initialize(&led_1);
}

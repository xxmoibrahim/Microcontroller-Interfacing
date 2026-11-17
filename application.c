/*
 * File:   application.c
 * Author: Muhammed Ibrahim
 *
 * Created on November 4, 2026, 5:47 PM
 */
/*=================================================================================================*/
#include "application.h"
#include "ECU_Layer/RELAY/ecu_relay.h"

/*=================================================================================================*/

relay_t relay_1 = { .relay_port = PORTC_INDEX ,
                    .relay_pin = GPIO_PIN0 ,
                    .relay_status = RELAY_OFF_STATUS};

Std_ReturnType ret = E_NOT_OK;


int main()
{

    application_initialize();
    
    while (1)
    {
        ret = relay_toggle(&relay_1);
        __delay_ms(5000);
    }
    return (EXIT_SUCCESS);
}

void application_initialize(void)
{
    ret = relay_initialize(&relay_1);
}
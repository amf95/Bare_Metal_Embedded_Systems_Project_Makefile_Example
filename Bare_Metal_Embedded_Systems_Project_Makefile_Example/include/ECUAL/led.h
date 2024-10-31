

#ifndef _LED_H_
#define _LED_H_

#include "../../lib/types.h"
#include "../MCAL/dio.h"

// ERRORS are inhereted from dio.h

typedef struct LED
{
    uint8_t pin;
    uint8_t port;
    uint8_t reversed;
}LED;

DIO_ERROR led_init(LED led);
DIO_ERROR led_on(LED led);
DIO_ERROR led_off(LED led); 

#endif
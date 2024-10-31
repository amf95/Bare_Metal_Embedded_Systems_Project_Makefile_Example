
#ifndef _BUTTON_H_
#define _BUTTON_H_

#include "../../lib/types.h"
#include "../MCAL/dio.h"

// ERRORS are inhereted from dio.h

typedef struct BUTTON{
    uint8_t pin;
    uint8_t port;
    uint8_t state;
} BUTTON;
 
DIO_ERROR button_init(BUTTON button);
DIO_ERROR button_read(BUTTON *button);

#endif
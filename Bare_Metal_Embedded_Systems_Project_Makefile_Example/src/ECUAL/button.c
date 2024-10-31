
#include "../../include/ECUAL/button.h"

DIO_ERROR button_init(BUTTON button){
    return dio_init(button.pin, button.port, INPUT);
}

DIO_ERROR button_read(BUTTON *button){
    return dio_read(button->pin, button->port, &button->state);
}
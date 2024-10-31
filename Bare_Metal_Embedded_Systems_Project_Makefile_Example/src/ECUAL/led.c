
#include "../../include/ECUAL/led.h"

DIO_ERROR led_init(LED led){
    return dio_init(led.pin, led.port, OUTPUT);
}

DIO_ERROR led_on(LED led){
    if(led.reversed){
        return dio_write(led.pin, led.port, LOW);
    }else{
        return dio_write(led.pin, led.port, HIGH);
    }
}

DIO_ERROR led_off(LED led){
    if(led.reversed){
        return dio_write(led.pin, led.port, HIGH);
    }else{
        return dio_write(led.pin, led.port, LOW);
    }
}

//#define F_CPU 1000000UL

#include "../../include/Application/application.h"
#include "../../include/MCAL/dio.h"
#include "../../include/ECUAL/button.h"
#include "../../include/ECUAL/led.h"
#include "../../CONFIG.h"
//#include <util/delay.h>

void app_init(void){
    led_init(led);
    button_init(button); 

    led_off(led);
    // DDRD = 0xFF;
    // PORTD = 0xFF;
}
 
void app_start(void){
    button_read(&button);
    if(button.state == HIGH){
        led_on(led);
    }else{
        led_off(led);
    }    


    //_delay_ms(500);
    //PORTA = 0x00;
    //_delay_ms(500);
}
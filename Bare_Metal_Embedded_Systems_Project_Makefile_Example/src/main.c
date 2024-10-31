

#include "../include/Application/application.h"
// #define F_CPU 8000000UL

// #include <avr/io.h>
// #include <util/delay.h>

int main(void){
    
    app_init();
    // DDRA = 0xFF;
    // PORTA = 0xFF;
    while (1){
        app_start();
        // PORTA = 0xFF;
        // _delay_ms(500);
        // PORTA = 0x00;
        // _delay_ms(500);
    }  
}
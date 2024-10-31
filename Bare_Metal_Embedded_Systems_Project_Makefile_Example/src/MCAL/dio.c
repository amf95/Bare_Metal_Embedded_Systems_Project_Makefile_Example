
#include "../../include/MCAL/dio.h"
#include "../../lib/registers.h"

DIO_ERROR dio_init(uint8_t pin, uint8_t port, uint8_t direction){
    
    if((pin < 0) || (pin > MAX_PIN_NUMBER_PER_PORT)) return WRONG_PIN;
    
    switch (port){
        case PORT_A:
            if (direction == INPUT){
                SET_BIT(pin, DDRA);
            }else if(direction == OUTPUT){
                CLEAR_BIT(pin, DDRA);
            }else{
                return WRONG_DIRECTION;
            }
        case PORT_B:
            if (direction == INPUT){
                SET_BIT(pin, DDRB);
            }else if(direction == OUTPUT){
                CLEAR_BIT(pin, DDRB);
            }else{
                return WRONG_DIRECTION;
            }
        case PORT_C:
            if (direction == INPUT){
                SET_BIT(pin, DDRC);
            }else if(direction == OUTPUT){
                CLEAR_BIT(pin, DDRC);
            }else{
                return WRONG_DIRECTION;
            }
        case PORT_D:
            if (direction == INPUT){
                SET_BIT(pin, DDRD);
            }else if(direction == OUTPUT){
                CLEAR_BIT(pin, DDRD);
            }else{
                return WRONG_DIRECTION;
            }
        default:
            return WRONG_PORT;
    }
    return DIO_OK;
}

DIO_ERROR dio_write(uint8_t pin, uint8_t port, uint8_t value){

    if((pin < 0) || (pin > MAX_PIN_NUMBER_PER_PORT)) return WRONG_PIN;

    switch (port){
        case PORT_A:
            if (value == HIGH){
                SET_BIT(pin, PORTA);
            }else if(value == LOW){
                CLEAR_BIT(pin, PORTA);
            }else{
                return WRONG_VALUE;
            }
        case PORT_B:
            if (value == HIGH){
                SET_BIT(pin, PORTB);
            }else if(value == LOW){
                CLEAR_BIT(pin, PORTB);
            }else{
                return WRONG_VALUE;
            }
        case PORT_C:
            if (value == HIGH){
                SET_BIT(pin, PORTC);
            }else if(value == LOW){
                CLEAR_BIT(pin, PORTC);
            }else{
                return WRONG_VALUE;
            }
        case PORT_D:
            if (value == HIGH){
                SET_BIT(pin, PORTD);
            }else if(value == LOW){
                CLEAR_BIT(pin, PORTD);
            }else{
                return WRONG_VALUE;
            }
        default:
            return WRONG_PORT;
    }
    return DIO_OK;
}

DIO_ERROR dio_read(uint8_t pin, uint8_t port, uint8_t *value){

    if((pin < 0) || (pin > MAX_PIN_NUMBER_PER_PORT)) return WRONG_PIN;

    switch (port){
        case PORT_A:
            *value = READ_BIT(pin, PINA);
        case PORT_B:
            *value = READ_BIT(pin, PINB);
        case PORT_C:
            *value = READ_BIT(pin, PINC);
        case PORT_D:
            *value = READ_BIT(pin, PINC);
        default:
            return WRONG_PORT;
    }
    return DIO_OK;
}

DIO_ERROR dio_toggle(uint8_t pin, uint8_t port){
    uint8_t value;
    uint8_t result = dio_read(pin, port, &value);
    if(result != DIO_OK) return result;
    return dio_write(pin, port, ~value);
}
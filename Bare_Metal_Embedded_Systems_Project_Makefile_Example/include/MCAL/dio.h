#ifndef _DIO_H_
#define _DIO_H_

#include "../../lib/types.h"
#include "../../lib/registers.h"

#define INPUT 0
#define OUTPUT 1
#define HIGH 1
#define LOW 0
#define ACTIVE_HIGH 1 
#define ACTIVE_LOW 0

#define SET_BIT(BIT_NUMBER, PORT_REGISTER) PORT_REGISTER |= (1<<BIT_NUMBER)
#define CLEAR_BIT(BIT_NUMBER, PORT_REGISTER) PORT_REGISTER &= ~(1<<BIT_NUMBER)
#define READ_BIT(BIT_NUMBER, PORT_REGISTER) (PORT_REGISTER & (1<<BIT_NUMBER)) >> BIT_NUMBER

enum PORTS {PORT_A, PORT_B, PORT_C, PORT_D};
typedef enum DIO_ERROR {WRONG_PORT, WRONG_PIN, WRONG_VALUE, WRONG_DIRECTION, DIO_OK} DIO_ERROR;

DIO_ERROR dio_init(uint8_t pin, uint8_t port, uint8_t direction);
DIO_ERROR dio_write(uint8_t pin, uint8_t port, uint8_t value);
DIO_ERROR dio_read(uint8_t pin, uint8_t port, uint8_t *value);
DIO_ERROR dio_toggle(uint8_t pin, uint8_t port);

#endif
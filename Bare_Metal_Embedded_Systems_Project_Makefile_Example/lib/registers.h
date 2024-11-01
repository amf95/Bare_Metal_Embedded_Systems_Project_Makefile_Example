#ifndef _REGISTERS_H_
#define _REGISTERS_H_

#include "types.h"

#define MAX_PIN_NUMBER_PER_PORT 7

#define SREG    *((volatile uint8_t *)0x5F)
#define I 7
#define T 6
#define H 5 
#define S 4
#define V 3 
#define N 2
#define Z 1
#define C 0

#define SPH     *((volatile uint8_t *)0x5E)
#define SP11 3
#define SP10 2 
#define SP9  1
#define SP8  0

#define SPL     *((volatile uint8_t *)0x5D)
#define SP7 7
#define SP6 6
#define SP5 5
#define SP4 4
#define SP3 3 
#define SP2 2
#define SP1 1
#define SP0 0

#define OCR0    *((volatile uint8_t *)0x5C)

#define GICR    *((volatile uint8_t *)0x5B)
#define INT1  7
#define INT0  6
#define INT2  5
#define IVSEL 1
#define IVCE  0

#define GIFR    *((volatile uint8_t *)0x5A)
#define INTF1 7
#define INTF0 6
#define INTF2 5

#define TIMSK   *((volatile uint8_t *)0x59)
#define OCIE2  7
#define TOIE2  6
#define TICIE1 5
#define OCIE1A 4
#define OCIE1B 3
#define TOIE1  2
#define OCIE0  1
#define TOIE0  0

#define TIFR    *((volatile uint8_t *)0x58)
#define OCF2  7
#define TOV2  6
#define ICF1  5
#define OCF1A 4
#define OCF1B 3
#define TOV1  2
#define OCF0  1
#define TOV0  0

#define SPMCR   *((volatile uint8_t *)0x57)
#define SPMIE  7
#define RWWSB  6
#define RWWSRE 4
#define BLBSET 3
#define PGWRT  2
#define PGERS  1
#define SPMEN  0

#define TWCR    *((volatile uint8_t *)0x56)
#define TWINT 7
#define TWEA  6
#define TWSTA 5
#define TWSTO 4
#define TWWC  3
#define TWEN  2
#define TWIE  0

#define MCUCR   *((volatile uint8_t *)0x55)
#define SE    7
#define SM2   6
#define SM1   5
#define SM0   4
#define ISC11 3
#define ISC10 2
#define ISC01 1
#define ISC00 0

#define MCUCSR  *((volatile uint8_t *)0x54)
#define JTD   7
#define ISC2  6
#define JTRF  4
#define WDRF  3
#define BORF  2
#define EXTRF 1
#define PORF  0

#define TCCR0   *((volatile uint8_t *)0x53)
#define FOC0  7
#define WGM00 6
#define COM01 5
#define COM00 4
#define WGM01 3
#define CS02  2
#define CS01  1
#define CS00  0

#define TCNT0   *((volatile uint8_t *)0x52)
#define OSCCAL  *((volatile uint8_t *)0x51)
#define OCDR    *((volatile uint8_t *)0x51)

#define SFIOR   *((volatile uint8_t *)0x50)
#define ADTS2 7
#define ADTS1 6
#define ADTS0 5
#define ACME  3
#define PUD   2
#define PSR2  1
#define PSR10 0

#define TCCR1A  *((volatile uint8_t *)0x4F)
#define COM1A1 7
#define COM1A0 6
#define COM1B1 5
#define COM1B0 4
#define FOC1A  3
#define FOC1B  2
#define WGM11  1
#define WGM10  0

#define TCCR1B  *((volatile uint8_t *)0x4E)
#define ICNC1 7
#define ICES1 6
#define WGM13 4
#define WGM12 3
#define CS12  2
#define CS11  1
#define CS10  0

#define TCNT1H  *((volatile uint8_t *)0x4D)
#define TCNT1L  *((volatile uint8_t *)0x4C)
#define OCR1AH  *((volatile uint8_t *)0x4B)
#define OCR1AL  *((volatile uint8_t *)0x4A)
#define OCR1BH  *((volatile uint8_t *)0x49)
#define OCR1BL  *((volatile uint8_t *)0x48)
#define ICR1H   *((volatile uint8_t *)0x47)
#define ICR1L   *((volatile uint8_t *)0x46)

#define TCCR2   *((volatile uint8_t *)0x45)
#define FOC2  7
#define WGM20 6
#define COM21 5
#define COM20 4
#define WGM21 3
#define CS22  2
#define CS21  1
#define CS20  0

#define TCNT2   *((volatile uint8_t *)0x44)
#define OCR2    *((volatile uint8_t *)0x43)

#define ASSR    *((volatile uint8_t *)0x42)
#define AS2    3
#define TCN2UB 2
#define OCR2UB 1
#define TCR2UB 0

#define WDTCR   *((volatile uint8_t *)0x41)
#define WDTOE 4
#define WDE   3
#define WDP2  2
#define WDP1  1
#define WDP0  0

#define UBRRH   *((volatile uint8_t *)0x40)
#define UCSRC   *((volatile uint8_t *)0x40)
#define URSEL 7
#define UMSEL 6
#define UPM1  5
#define UPM0  4
#define USBS  3
#define UCSZ1 2
#define UCSZ0 1
#define UCPOL 0

#define EEARH   *((volatile uint8_t *)0x3F)
#define EEAR9 1
#define EEAR8 0

#define EEARL   *((volatile uint8_t *)0x3E)
#define EEDR    *((volatile uint8_t *)0x3D)
#define EECR    *((volatile uint8_t *)0x3C)
#define EERIE 3
#define EEMWE 2
#define EEWE 1
#define EERE 0

// PORTS
#define PORTA   *((volatile uint8_t *)0x3B)
#define PORTA7 7
#define PORTA6 6
#define PORTA5 5
#define PORTA4 4
#define PORTA3 3
#define PORTA2 2
#define PORTA1 1
#define PORTA0 0

#define DDRA    *((volatile uint8_t *)0x3A)
#define DDA7 7
#define DDA6 6
#define DDA5 5
#define DDA4 4
#define DDA3 3
#define DDA2 2
#define DDA1 1
#define DDA0 0

#define PINA    *((volatile uint8_t *)0x39)
#define PINA7 7
#define PINA6 6 
#define PINA5 5 
#define PINA4 4
#define PINA3 3
#define PINA2 2 
#define PINA1 1
#define PINA0 0

#define PORTB   *((volatile uint8_t *)0x38)
#define PORTB7 7
#define PORTB6 6
#define PORTB5 5
#define PORTB4 4
#define PORTB3 3
#define PORTB2 2
#define PORTB1 1
#define PORTB0 0

#define DDRB    *((volatile uint8_t *)0x37)
#define DDB7 7
#define DDB6 6
#define DDB5 5
#define DDB4 4
#define DDB3 3
#define DDB2 2
#define DDB1 1
#define DDB0 0

#define PINB    *((volatile uint8_t *)0x36)
#define PINB7 7
#define PINB6 6 
#define PINB5 5 
#define PINB4 4
#define PINB3 3
#define PINB2 2 
#define PINB1 1
#define PINB0 0

#define PORTC   *((volatile uint8_t *)0x35)
#define PORTC7 7
#define PORTC6 6
#define PORTC5 5
#define PORTC4 4
#define PORTC3 3
#define PORTC2 2
#define PORTC1 1
#define PORTC0 0

#define DDRC    *((volatile uint8_t *)0x34)
#define DDC7 7
#define DDC6 6
#define DDC5 5
#define DDC4 4
#define DDC3 3
#define DDC2 2
#define DDC1 1
#define DDC0 0

#define PINC    *((volatile uint8_t *)0x33)
#define PINC7 7
#define PINC6 6 
#define PINC5 5 
#define PINC4 4
#define PINC3 3
#define PINC2 2 
#define PINC1 1
#define PINC0 0

#define PORTD   *((volatile uint8_t *)0x32)
#define PORTD7 7
#define PORTD6 6
#define PORTD5 5
#define PORTD4 4
#define PORTD3 3
#define PORTD2 2
#define PORTD1 1
#define PORTD0 0

#define DDRD    *((volatile uint8_t *)0x31)
#define DDD7 7
#define DDD6 6
#define DDD5 5
#define DDD4 4
#define DDD3 3
#define DDD2 2
#define DDD1 1
#define DDD0 0

#define PIND    *((volatile uint8_t *)0x30)
#define PIND7 7
#define PIND6 6 
#define PIND5 5 
#define PIND4 4
#define PIND3 3
#define PIND2 2 
#define PIND1 1
#define PIND0 0

#define SPDR    *((volatile uint8_t *)0x2F)

#define SPSR    *((volatile uint8_t *)0x2E)
#define SPIF  7
#define WCOL  6
#define SPI2X 0

#define SPCR    *((volatile uint8_t *)0x2D)
#define SPIE 7
#define SPE  6
#define DORD 5
#define MSTR 4
#define CPOL 3
#define CPHA 2
#define SPR1 1
#define SPR0 0

#define UDR     *((volatile uint8_t *)0x2C)

#define UCSRA   *((volatile uint8_t *)0x2B)
#define RXC  7
#define TXC  6
#define UDRE 5
#define FE   4
#define DOR  3
#define PE   2
#define U2X  1
#define MPCM 0

#define UCSRB   *((volatile uint8_t *)0x2A)
#define RXCIE 7
#define TXCIE 6
#define UDRIE 5
#define RXEN  4
#define TXEN  3
#define UCSZ2 2
#define RXB8  1
#define TXB8  0

#define UBRRL   *((volatile uint8_t *)0x29)

#define ACSR    *((volatile uint8_t *)0x28)
#define ACD   7
#define ACBG  6
#define ACO   5
#define ACI   4
#define ACIE  3
#define ACIC  2
#define ACIS1 1
#define ACIS0 0

#define ADMUX   *((volatile uint8_t *)0x27)
#define REFS1 7
#define REFS0 6
#define ADLAR 5
#define MUX4  4
#define MUX3  3
#define MUX2  2
#define MUX1  1
#define MUX0  0

#define ADCSRA  *((volatile uint8_t *)0x26)
#define ADEN  7
#define ADSC  6
#define ADATE 5
#define ADIF  4
#define ADIE  3
#define ADPS2 2
#define ADPS1 1
#define ADPS0 0

#define ADCH    *((volatile uint8_t *)0x25)
#define ADCL    *((volatile uint8_t *)0x24)
#define TWDR    *((volatile uint8_t *)0x23)

#define TWAR    *((volatile uint8_t *)0x22)
#define TWA6  7
#define TWA5  6
#define TWA4  5
#define TWA3  4
#define TWA2  3
#define TWA1  2
#define TWA0  1 
#define TWGCE 0

#define TWSR    *((volatile uint8_t *)0x21)
#define TWS7  7
#define TWS6  6
#define TWS5  5
#define TWS4  4
#define TWS3  3
#define TWPS1 1
#define TWPS0 0

#define TWBR    *((volatile uint8_t *)0x20)

#endif
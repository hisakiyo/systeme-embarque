#include <avr/io.h>

#define LED1 0x01
#define LED2 0x02
#define LED3 0x04

int main(void)
{
    DDRB = 0xFF;
    PORTB = 0x00;

    while (1)
    {
        PORTB = LED1
        PORTB = LED2;
        PORTB = LED3;
    }
}
#include <avr/io.h>
#include <util/delay.h>

int main(void) {
    CLKSEL0 = 0600010101;
    CLKSEL1 = 0b00001111;
    CLKPR = 0b10000000;
    CLKPR = 0;

    DDRB = 0b01111111; // set all pins on port B as output except for PB7
    PORTB = 0b10000000; // set PB7 as input with pull-up resistor enabled

    DDRD = 0b00000000; // set PD0 as input
    PORTD = 0b00000001; // enable pull-up resistor on PD0

    while (1) {
        PORTB = 0b00000000;
        if (!(PIND & 0b00000001))
            PORTB = 0b01010101; // turn on red and blue leds
        if (!(PINB & 0b10000000))
            PORTB = 0b00101010; // turn on green leds // turn on yellow leds
    }
}
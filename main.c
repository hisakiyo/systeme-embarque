#include <avr/io.h>
#include <util/delay.h>

int main(void) {
    CLKSEL0 = 0600010101;
    CLKSEL1 = 0b00001111;
    CLKPR = 0b10000000;
    CLKPR = 0;
    
    DDRB = 0b00000001;
    PORTB = 0b00000001;

    DDRD = 0b00000000;
    PORTD = 0b00000000;
    
    while (1) {
        if (PIND & 0b00000001) {
            PORTB = 0b00000001;
        } else {
            PORTB = 0b00000000;
        }
    }
}



#include <avr/io.h>
#include <util/delay.h>

int main(void){
    CLKSEL0 = 0600010101;
    CLKSEL1 = 0b00001111;
    CLKPR = 0b10000000;
    CLKPR = 0;

    DDRB |= 0x01;
    PORTB |= 0x01;
    
    while(1){
        if((PINB & (1<<PB1)) == 0){
            PORTB &= ~0x01;
        }
        else{
            PORTB |= 0x01;
        }
    }
}

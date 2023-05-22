#include <avr/io.h>

int main(void){
    DDRB |= 0x01;                // Sortie pour la LED
    DDRB &= ~0x02;               // Entrée pour le bouton
    PORTB |= 0x02;               // Configuration de la résistance de tirage

    while(1){
        PORTB |= 0x01;
        if(PINB & 0x02){
            PORTB &= ~0x01;
        }
    }
}
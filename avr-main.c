/*
 * File:   avr-main.c
 * Author: daniel ayala 
 *
 * Created on 27 de abril de 2021, 09:31 PM
 */


#include <avr/io.h>
#define F_CPU 100000UL
#include <util/delay.h>

int main(void) {
    DDRB = 0xFF;
    while (1) {
        PORTB = 0b00000001;
        _delay_ms(2000);
        PORTB = 000000000;
        _delay_ms(2000);
    }
}

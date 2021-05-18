/*
 * File:   avr-main.c
 * Author: rlmmx
 *
 * Created on 27 de abril de 2021, 09:31 PM
 */


#include <avr/io.h>
#include <util/delay.h>
#define F_CPU 1000000UL
int main(void) {
    DDRB=0x01;
    /* Replace with your application code */
    while (1) {
    PORTB=0x01;
_delay_ms(300);
    PORTB=0x00;
_delay_ms(300);

    }
}

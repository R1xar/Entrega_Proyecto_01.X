/*
 * File:   avr-main.c
 * Author: rlmmx
 *Tapia Ramirez Jair
 * Created on 27 de abril de 2021, 09:31 PM
 */


#include <avr/io.h>
#include <util/delay.h>
#define F_CPU 1000000UL

int main(void) {
    DDRB = 0xFF;
 
     while (1) {
         PORTB = 0b00000001;
         _delay_ms(2000);
         PORTB = 0b00000000;
         _delay_ms(2000);
         
    }
}

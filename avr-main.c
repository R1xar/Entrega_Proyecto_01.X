/*
 * File:   avr-main.c
 * Author: Enrique Vázquez Espinosa
 *
 * Created on 27 de abril de 2021, 09:31 PM
 */

#define F_CPU 10000000UL 
#include <xc.h> 
#include <util/delay.h> 
#include <avr/io.h> 

int main(void){
    DDRB=0x01; 
    PORTB=0x01;
    while (1)     {
        PORTB=0b00000001; 
        _delay_ms(5000);
        PORTB=0b00000001;
        _delay_ms(5000);
    }  
}  


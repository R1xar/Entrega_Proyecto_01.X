Entrega_Proyecto_01.X#define F_CPU 10000000UL
#include <xc.h>
#include <util/delay.h>
#include <avr/io.h>

int main(void) {
    DDRB=0x01;
    PORTB=0b00000001;
    while (1) {
        PORTB=0b00000001;
        _delay_ms(2000);
        PORTB=0b00000001;
        _delay_ms(2000);
    }
}

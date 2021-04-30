#define F_CPU 8000000UL
#include <xc.h>
#include <util/delay.h>


int main(void) {
    DDRB = 0x01;
    while (1) {
        PORTB = 0x01;
        _delay_loop_2(10000);
        PORTB = 0x00;
        _delay_loop_2(50000);
    }
}

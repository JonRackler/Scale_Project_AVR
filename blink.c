#if defined(__AVR_ATmega328__)

#endif

#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>

#define LED_PORT PB5 // pin 13 on arduino

int main(void) {
	DDRB |= (1<<LED_PORT);
	while(1) {
		PORTB |= (1<< LED_PORT);
		_delay_ms(1000);
		PORTB &= ~(1<< LED_PORT);
		_delay_ms(1000);
	}
	return(0);
}






#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

ISR(INT0_vect)
{

   	 //DDRB =0xff;  
  
   	 PORTB = 0x80;
	_delay_ms(500);
	PORTB |= 0x40;
	_delay_ms(500);
 
   	 PORTB |= 0x20;
	_delay_ms(500);
   	 PORTB |= 0x10;
	_delay_ms(500);
   	 PORTB |= 0x08;
	_delay_ms(500);
   	 PORTB |= 0x04;
	_delay_ms(500);
   	 PORTB |= 0x02;
	_delay_ms(500);
  	 PORTB |= 0x01;
	_delay_ms(500);
	 PORTB = 0x00;
	 
 
	
}

int main(void)
{

    MCUCR = 0x01;
   
    GICR = 1 << INT0;    // Enable external interrupt INT0

    //DDRA = 0xff;    
    DDRB = 0xff;     
    sei();
	

    // Enable global interrupts

    while(1)
    {
	    
        PORTB = 0x01;
        _delay_ms(50);
	PORTB |= 0x02;
        _delay_ms(50);
	 PORTB |= 0x04;
        _delay_ms(50);
	 PORTB |= 0x08;
        _delay_ms(50);
	 PORTB |= 0x10;
        _delay_ms(50);
	 PORTB |= 0x20;
        _delay_ms(50);
	 PORTB |= 0x40;
        _delay_ms(50);
	 PORTB |= 0x80;
        _delay_ms(1000);
	 PORTB = 0x00;
	_delay_ms(1000);
    }

    return 0;
}


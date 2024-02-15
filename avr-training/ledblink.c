#include <avr/io.h>
#define F_CPU 8000000
#include <util/delay.h>
void rev();
int main(void)
{
	DDRB |= 0Xff;
	
	while(1)
	{
#if 1
		{
			PORTB |= 0X01;
			_delay_ms(50);
			PORTB |= 0X02;
			_delay_ms(50);
			PORTB |= 0X04;
			_delay_ms(50);
			PORTB |= 0X08;
			_delay_ms(50);
			PORTB |= 0X10;
			_delay_ms(50);
			PORTB |= 0X20;
			_delay_ms(50);
			PORTB |= 0X40;
			_delay_ms(50);
			PORTB |= 0X80;
			_delay_ms(50);
			PORTB = 0X00;
			_delay_ms(1000);
			//!main();



}


			main()!=main();
}
#endif

}




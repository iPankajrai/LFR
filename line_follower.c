#include<avr/io.h>
#define F_CPU 16000000UL
#include<util/delay.h>
//#define lcd PORTD
//#include<ilibrary/lcd_library.h>
void main()
{ 
  //lcd_init();
  //DDRD=0xff;
  DDRB=0xff;
  DDRA=0b11111100;
  while(1)
  {
   if(PINA==0b00000011)
   PORTB= 0b00000101;  //forward
   else if(PINA==0b00000001) //going left
   PORTB= 0b00000001;  //turn right
   else if(PINA==0b00000010)  //going right
   PORTB= 0b00000100;  //turn left
   else
   PORTB= 0b00000000;  //stop
  }
}

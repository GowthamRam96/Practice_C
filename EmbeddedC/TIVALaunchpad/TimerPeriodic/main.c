#include "TM4C123.h"                    // Device header

# define BLUE (1U<<2)

void periodic_timer(int time);



int main ()
{
	SYSCTL->RCGCGPIO |= 0x20;
	GPIOF->DIR |= BLUE;
	GPIOF->DEN |= BLUE;
	
	while(1){
	
	GPIOF->DATA ^= BLUE;
		periodic_timer(20);

	}

}



void periodic_timer( int time )
{
int j;
	SYSCTL->RCGCTIMER |= 0x01;
	TIMER0->CTL |= 0x00;
	TIMER0->CFG |= 0x04;
	TIMER0->TAMR |= 0x02;
	TIMER0->TAILR |= 16000 - 1;
	TIMER0->ICR |= 0x1;
	TIMER0->CTL |= 0x01;

	for(j=0;j<time;j++)
	{
	while((TIMER0->RIS & 0x01)==0);
		TIMER0->ICR = 0x01;
	}


}
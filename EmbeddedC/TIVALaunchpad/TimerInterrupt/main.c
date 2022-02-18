#include "TM4C123.h"                    // Device header
#define GREEN (1U<<3) 
#define RED (1U<<1)
#define BLUE (1U<<2)


void timer2A_10Hz_init(void);
void timer1A_1Hz_init(void);
int main(void){

	SYSCTL->RCGCGPIO |= 0x20;
	GPIOF->DIR |= 0x0E;
	GPIOF->DEN |=0x0E;
	
	timer1A_1Hz_init();
	timer2A_10Hz_init();
	__enable_irq();
	
	while(1){
	
		GPIOF->DATA ^=GREEN;
	
	}
}

void timer1A_1Hz_init(void){
	SYSCTL->RCGCTIMER |= 0x02; // enable clock
	TIMER1->CTL = 0; // disable before timer init
	TIMER1->CFG = 0x04; // 16 bit option
	TIMER1->TAMR = 0x02; // periodic mode and down counter
	TIMER1->TAPR = 250; //16000000Hz / 250 = 64000
	TIMER1->TAILR = 64000; //64000Hz/64000 = 1Hz
	TIMER1->ICR = 0x1; //clear timer1A timeout flag
	TIMER1->IMR |= 0x01; // Interrupt mask register
	TIMER1->CTL |= 0x01; // enable Timer 1A after init
	NVIC->ISER[0] |= 0x00200000; //enable irq 21
	
	
}

void timer2A_10Hz_init(void)
{
	SYSCTL->RCGCTIMER |= 0x04; // enable clock
	TIMER2->CTL = 0; // disable before timer init
	TIMER2->CFG = 0x04; // 16 bit option
	TIMER2->TAMR = 0x02; // periodic mode and down counter
	TIMER2->TAPR = 250; //16000000Hz / 250 = 64000
	TIMER2->TAILR = 6400; //64000Hz/6400 = 10Hz
	TIMER2->ICR = 0x1; //clear timer1A timeout flag
	TIMER2->IMR |= 0x01; // Interrupt mask register
	TIMER2->CTL |= 0x01; // enable Timer 1A after init
	NVIC->ISER[0] |= 0x00800000; //enable irq 23

}


void TIMER1A_Handler(void){
	volatile int clear;
	if(TIMER1->MIS & 0x01)
		{
	GPIOF->DATA ^= RED;
		TIMER1->ICR = 0x1;
		clear = TIMER1->ICR;
	}
	else{
	TIMER1->ICR = TIMER1->MIS;
		clear = TIMER1->ICR;
	}
}


void TIMER2A_Handler(void){
	volatile int clear;
	if(TIMER2->MIS & 0x01)
		{
	GPIOF->DATA ^= RED;
		TIMER2->ICR = 0x1;
		clear = TIMER2->ICR;
	}
	else{
	TIMER2->ICR = TIMER2->MIS;
		clear = TIMER2->ICR;
	}
}

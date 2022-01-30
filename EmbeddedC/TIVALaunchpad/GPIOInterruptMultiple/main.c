#include "TM4C123.h"                    // Device header

void delayMs(int delay);
int main()
{
SYSCTL->RCGCGPIO |= 0x20;
	// unlock PF0
	GPIOF->LOCK = 0x4C4F434B;

	GPIOF->CR = 0x01;
	GPIOF->LOCK = 0;
	
	GPIOF->DIR  &=~0x11; // make PF4 and PF0 input pins.
	GPIOF->DIR |= 0x0E;
	GPIOF->DEN = 0x1F;
	//enable pull up for PF4 and PF0
	GPIOF->PUR |=0x11;
	
	__disable_irq();
	GPIOF->IS &=~0x11; // make them edge sensitive
	GPIOF->IBE &=~0x11;
	GPIOF->IEV &=~0x11;// Falling edge detection
	
	GPIOF->ICR |= 0x11; //Clear any prior interrupt
	GPIOF->IM |= 0x11;
	
	NVIC->IP[30] = 3<<5; // set priority 3 to interrupt
	NVIC->ISER[0] = 0x40000000; // Enable IRQ 30
	__enable_irq();
while(1)
{}
	
}

void GPIOF_Handler(void)// need not fetch the prototype since the system recognizes it
{
	volatile int readback;
// Toggle Green LED
	for (int i=0; i<3; i++)
	{
	GPIOF->DATA |=0x08;
	delayMs(10);
	GPIOF->DATA &=~0x08;
	delayMs(10);

	}
	GPIOF->ICR |=0x11;// Clear interrupt flag before return
	readback = GPIOF->ICR;
}


void delayMs(int delay){
for(int i =0 ;i<delay;i++)
	{
	for(int j=0;j<3180;j++);
	
}
}
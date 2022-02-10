// count occurance of an event using timer.
#include "TM4C123.h"                    // Device header


void timer3A_RisingEdgeEvent_init(void);
int timer3A_RisingEdgeEvent_capture(void);
	
uint32_t number_of_events=0;


int main()
{
	timer3A_RisingEdgeEvent_init();
	while(1)
	{
	number_of_events = timer3A_RisingEdgeEvent_capture();
	}


}

void timer3A_RisingEdgeEvent_init(void)
{
	SYSCTL-> RCGCTIMER |= 0x08; //timer block 3 - 0b 0000 1000
	SYSCTL-> RCGCGPIO |= 0x02; // activate port B pin
	GPIOB-> DIR &= ~0x04;// input
	GPIOB->DEN |= 0x04;// enable
	
	GPIOB->AFSEL |= 0x04;
	GPIOB->PCTL &= ~0x00000F00; // T3CCP0 config
	GPIOB->PCTL |= 0x00000700;
	
	TIMER3->CTL = 0x00;
	
	TIMER3->CFG = 0x04;
	
	TIMER3->TAMR = 0x13;
	
	TIMER3->TAMATCHR = 0xFFFF;
	TIMER3->TAPMR = 0xFF;
	
	TIMER3->CTL |= 1;
	
}
int timer3A_RisingEdgeEvent_capture(void)
{
return TIMER3->TAR;
}
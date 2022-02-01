#include "TM4C123.h"                    // Device header

void delay_micro(int n);
void LCD_init(void);
void delay_milli(int n);
void LCD_Cmd(unsigned char command);
void LCD_Data(unsigned char data);

int main()
{
	LCD_init();
	LCD_Cmd(0x01);
	LCD_Cmd(0x08);
	delay_milli(500);
	
	
	LCD_Data('C');
	delay_milli(1);
	LCD_Data('M');
	delay_milli(500);


}

void LCD_init(void){
	SYSCTL->RCGCGPIO = 0x01;
	SYSCTL->RCGCGPIO |= 0x02;
	GPIOA->DIR |= 0xE0; //0b 1110 0000 - RS, E and RW
	GPIOA->DEN |= 0xE0;
	GPIOB->DIR |= 0xFF;
	GPIOB->DEN |= 0xFF;
	LCD_Cmd(0x38);// 8 bit - 2 line 5*7 font
	LCD_Cmd(0x06);// increment automatically
	LCD_Cmd(0x0F);// Turn on display
 	LCD_Cmd(0x01);// clear display
	
	
}
void LCD_Data(unsigned char data){
	GPIOA->DATA = 0x20; //RS = 1; Enable E = 0; RW = 0
	GPIOB->DATA =data;
	GPIOA->DATA |= 0x80;
	delay_micro(0);
	GPIOA->DATA = 0x00;
	delay_micro(0);
}

void LCD_Cmd(unsigned char command){
	GPIOA->DATA = 0x00; //RS =0; RW = 0; E = 0;
	GPIOB->DATA = command;
	GPIOA->DATA = 0x80; //Enables E = 1
	delay_micro(0);
	GPIOA->DATA = 0x00;
	if (command<4)
		delay_milli(2);
	else
		delay_micro(37);
	
}

void delay_micro(int n){
	int i, j;
	for(i=0;i<n;i++)
		for(j=0;j<3*160;j++)
		{}
}

void delay_milli(int n)
{
	int i, j;
	for(i=0;i<n;i++)
		for(j=0;j<3180*16;j++)
	{}
}
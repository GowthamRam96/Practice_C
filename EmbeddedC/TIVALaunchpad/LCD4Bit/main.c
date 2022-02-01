#include "TM4C123.h" /* include register defintion file of TM4C123GH6PM */
#define LCD GPIOB   /* Define "LCD" as a symbolic name for GPIOB */
#define RS 0x20 /* PORTB BIT5 mask */
#define RW 0x40 /* PORTB BIT6 mask */
#define EN 0x80 /* PORTB BIT7 mask */
#define HIGH 1
#define LOW 0

/*define useful symbolic names for LCD commands */
#define clear_display     0x01
#define returnHome        0x02
#define moveCursorRight   0x06
#define moveCursorLeft    0x08
#define shiftDisplayRight 0x1C
#define shiftDisplayLeft  0x18
#define cursorBlink       0x0F
#define cursorOff         0x0C
#define cursorOn          0x0E
#define Function_set_4bit 0x28
#define Function_set_8bit 0x38
#define Entry_mode        0x06
#define Function_8_bit    0x32
#define Set5x7FontSize    0x20
#define FirstRow          0x80

/* prototypes of LCD functions */
void delay_ms(int n); /* mili second delay function */
void delay_us(int n); /* micro second delay function */ 
void LCD_init(void);  /* LCD initialization function */
void LCD_Cmd(unsigned char command); /*Used to send commands to LCD */
void LCD_Write_Char(unsigned char data); /* Writes ASCII character */
void LCD_Write_Nibble(unsigned char data, unsigned char control); /* Writes 4-bits */
void LCD_String (char *str);	/* Send string to LCD function */


int main()
{
 LCD_init();
//while(1){	
 LCD_Cmd(clear_display);
 LCD_Cmd(FirstRow); /* Force cusor to begining of first row */
 delay_ms(500);
		LCD_Write_Char('A');
		delay_ms(500); 
//}
}
/* LCD and GPIOB initialization Function */ 
void LCD_init(void)
{
 SYSCTL->RCGCGPIO |=(1<<1); /* Enable Clock to GPIOB */
 LCD->DIR |=0xFF; /* Set GPIOB all pins a digital output pins */
 LCD->DEN |=0xFF; /* Declare GPIOB pins as digital pins */

 LCD_Cmd(Set5x7FontSize);  /* select 5x7 font size and 2 rows of LCD */
 LCD_Cmd(Function_set_4bit); /* Select 4-bit Mode of LCD */
 LCD_Cmd(moveCursorRight); /* shift cursor right */
 LCD_Cmd(clear_display); /* clear whatever is written on display */
 LCD_Cmd(cursorBlink);  /* Enable Display and cursor blinking */
 
}

void LCD_Cmd(unsigned char command)
{
    LCD_Write_Nibble(command & 0xF0, 0);   /* Write upper nibble to LCD */
    LCD_Write_Nibble(command << 4, 0);     /* Write lower nibble to LCD */
    
    if (command < 4)
        delay_ms(2);         /* 2ms delay for commands 1 and 2 */
    else
        delay_us(40);        /* 40us delay for other commands */
}


void LCD_Write_Nibble(unsigned char data, unsigned char control)
{

    data &= 0xF0;       /* Extract upper nibble for data */
    control &= 0x0F;    /* Extract lower nibble for control */
    LCD->DATA = data | control;       /* Set RS and R/W to zero for write operation */
    LCD->DATA = data | control | EN;  /* Provide Pulse to Enable pin to perform wite operation */
    delay_us(0);
    LCD->DATA = data; /*Send data */
    LCD->DATA = 0; /* stop writing data to LCD */
}
void LCD_Write_Char(unsigned char data)
{
    LCD_Write_Nibble(data & 0xF0, RS);    /* Write upper nibble to LCD and RS = 1 to write data */
    LCD_Write_Nibble(data << 4, RS);      /* Write lower nibble to LCD and RS = 1 to write data */
    delay_us(40);
}


void LCD_String (char *str)	/* Send string to LCD function */
{
	int i;
	for(i=0;str[i]!=0;i++)  /* Send each char of string till the NULL */
	{
		LCD_Write_Char(str[i]);  /* Call LCD data write */
	}
}

/* Mili seconds delay function */
void delay_ms(int n)
{
 int i,j;
 for(i=0;i<n;i++)
 for(j=0;j<3180;j++)
 {}
}

/* Micro seconds delay function */
void delay_us(int n)
{
 int i,j;
 for(i=0;i<n;i++)
 for(j=0;j<3;j++)
 {}
 
}

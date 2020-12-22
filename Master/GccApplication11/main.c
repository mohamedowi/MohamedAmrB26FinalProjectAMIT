/*
 * GccApplication11.c
 *
 * Created: 12/5/2020 6:17:14 PM
 * Author : M.H
 */ 

#include "SPI.h"
#define F_CPU 8000000
#include <util/delay.h>
#include "DIO.h"
#include "UART.h"
int main(void)
{
	uint8 rec_data = 0;
	uint8 bluetooth = 0;
	UART_Init();
	SPI_Master_Init();
	SPI_Master_Init_Trans();
	_delay_ms(1000); 
	

	
    while (1) 
    {	bluetooth = UART_Rx();
		rec_data = SPI_Transiver(bluetooth);
		_delay_ms(1000);
    }
}


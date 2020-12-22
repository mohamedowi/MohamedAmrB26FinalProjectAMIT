/*
 * GccApplication12.c
 *
 * Created: 12/5/2020 10:27:07 PM
 * Author : M.H
 */ 

#include "SPI.h"
#define F_CPU 8000000
#include <util/delay.h>

int main(void)
{	uint8 slave_tx_data = 0;
	uint8 rec_data = 0 ;
	
	DIO_SetPinDir(DIO_PORTD,DIO_PIN3,DIO_PIN_OUTPUT);
	DIO_SetPinDir(DIO_PORTC,DIO_PIN2,DIO_PIN_OUTPUT);

	SPI_Slave_Init();
    while (1) 
    {
		rec_data = SPI_Transiver(slave_tx_data);
		if(rec_data == activate){
		DIO_SetPinVal(DIO_PORTD,DIO_PIN3,DIO_PIN_HIGH);
		DIO_SetPinVal(DIO_PORTC,DIO_PIN2,DIO_PIN_HIGH);
		rec_data = 0;	
		}
		
		if(rec_data == deactivate ){
		DIO_SetPinVal(DIO_PORTD,DIO_PIN3,DIO_PIN_LOW);
		DIO_SetPinVal(DIO_PORTC,DIO_PIN2,DIO_PIN_LOW);
		rec_data = 0;	
		}

		_delay_ms(1000);
    }
}


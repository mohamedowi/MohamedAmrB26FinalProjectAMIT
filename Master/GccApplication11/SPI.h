/*
 * SPI.h
 *
 * Created: 12/5/2020 6:18:21 PM
 *  Author: M.H
 */ 


#ifndef SPI_H_
#define SPI_H_

#include "ATmega32_Registers.h"
#include "DIO.h"

void SPI_Master_Init(void);

void SPI_Slave_Init(void);

void SPI_Master_Init_Trans(void);

void SPI_Master_Ter_Trans(void);

uint8 SPI_Transiver(uint8 data);




#endif /* SPI_H_ */
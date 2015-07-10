/*
 * interrupt_handler_uart.h
 *
 *  Created on: 27 May 2015
 *      Author: diaaj
 */

#ifndef INTERRUPT_HANDLER_UART_H_
#define INTERRUPT_HANDLER_UART_H_

extern char received_word;

/************************************************** ***************************
* Public function prototypes
************************************************** **************************/
void InitUart1(unsigned int BaudRate);
void IsrUart1();
unsigned char EmptyUart1();
unsigned char GetUart1(void);
unsigned char PutUart1(unsigned char in_char);

void flush_rx_buffer();

#endif /* INTERRUPT_HANDLER_UART_H_ */

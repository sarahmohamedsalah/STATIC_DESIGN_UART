/*
 * Registers.h
 *
 *  Created on: Apr 4, 2023
 *      Author: HAZEM-PC
 */

#ifndef UTILITIES_REGISTERS_H_
#define UTILITIES_REGISTERS_H_

#include "Std_Types.h"

/*============= MACRO DEFINITION =============*/
#define SREG  (*((volatile uint8*)0x5F))

#define PORTA (*((volatile uint8*)0x3B))
#define DDRA  (*((volatile uint8*)0x3A))
#define PINA  (*((volatile uint8*)0x39))
#define PORTB (*((volatile uint8*)0x38))
#define DDRB  (*((volatile uint8*)0x37))
#define PINB  (*((volatile uint8*)0x36))
#define PORTC (*((volatile uint8*)0x35))
#define DDRC  (*((volatile uint8*)0x34))
#define PINC  (*((volatile uint8*)0x33))
#define PORTD (*((volatile uint8*)0x32))
#define DDRD  (*((volatile uint8*)0x31))
#define PIND  (*((volatile uint8*)0x30))

#define PORTA_ID 	0
#define PORTB_ID 	1
#define PORTC_ID 	2
#define PORTD_ID 	3
#define MAX_PORT_ID 4

#define PIN0 	0
#define PIN1 	1
#define PIN2 	2
#define PIN3 	3
#define PIN4 	4
#define PIN5 	5
#define PIN6 	6
#define PIN7 	7
#define MAX_PIN 8

/*==========ADC registers===========*/
#define ADMUX  (*((volatile uint8*)0x27))
#define ADCSRA (*((volatile uint8*)0x26))
#define ADCH   (*((volatile uint8*)0x25))
#define ADCL   (*((volatile uint8*)0x24))
#define ADC    (*((volatile uint16*)0x24))
#define SFIOR  (*((volatile uint8*)0x50))

//ADMUX register pins
#define MUX0 	0
#define MUX1	1
#define MUX2 	2
#define MUX3 	3
#define MUX4 	4
#define ADALR 	5
#define REFS0 	6
#define REFS1 	7
//ADCSRA register pins
#define ADPS0 	0
#define ADPS1 	1
#define ADPS2 	2
#define ADIE  	3
#define ADIF    4
#define ADATE 	5
#define ADSC  	6
#define ADEN 	7

//SFIRO register auto trigger source pins
#define ADTS0 	5
#define ADTS1 	6
#define ADTS2	7

/*============= TIMER0 registers =============*/

#define TCCR0 (*((volatile uint8*)0x53))
#define TCNT0 (*((volatile uint8*)0x52))
#define OCR0  (*((volatile uint8*)0x5C))
#define TIFR  (*((volatile uint8*)0x58))
#define TIMSK (*((volatile uint8*)0x59))

//TCCR0 timer counter control register

#define CS00  0
#define CS01  1
#define CS02  2
#define WGM01 3
#define COM00 4
#define COM01 5
#define WGM00 6
#define FOC0  7
//TIMSK interrupt mask register
#define TOIE0  0
#define OCIE0  1
#define TOIE1  2
#define OCIE1B 3
#define OCIE1A 4
#define TICIE1 5
#define TOIE2  6
#define OCIE2  7
//TIFR interrupt flag register
#define TOV0  0
#define OCF0  1
#define TOV1  2
#define OCF1B 3
#define OCF1A 4
#define ICF1  5
#define TOV2  6
#define OCF2  7




#endif /* UTILITIES_REGISTERS_H_ */

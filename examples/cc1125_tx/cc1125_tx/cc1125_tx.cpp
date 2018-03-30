/*
 * cc1125_tx.cpp
 *
 * Created: 30.03.2018 16:48:30
 * Author : volodink
 */ 

#define F_CPU 16000000

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

#include "cc1125.h"

CC1125 rf;

int main(void)
{

    while (1) 
    {
		asm("nop");
    }
}


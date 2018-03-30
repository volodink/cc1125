#ifndef FASTSPI_H
#define FASTSPI_H

#include <stdint.h>

class FASTSPI {
	private:
		uint8_t _recvByte;
	public:
		FASTSPI(void);
		void begin(uint8_t freq, uint8_t bitOrder, uint8_t spiMode);
		uint8_t transfer(uint8_t _b);	
};

#endif
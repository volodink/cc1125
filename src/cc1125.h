#ifndef CC1125_H
#define CC1125_H

//#include "Arduino.h"
#include "stdint.h"
#include "fastSPI.h"

class CC1125 {
	private:
		uint8_t _recvByte;
	public:
		CC1125(void);
		
		void sendByte(uint8_t byte);
		uint8_t receiveByte(void);
		
		void sendBuffer(uint8_t *buf, int length);
		void receiveBuffer(void);
};

#endif
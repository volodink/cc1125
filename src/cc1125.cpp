#include "cc1125.h"


CC1125::CC1125(void) {
	;
}

void CC1125::sendByte(uint8_t byte) {
}

uint8_t CC1125::receiveByte(void) {
	return 0x42;
}

void CC1125::sendBuffer(uint8_t *buf, int length) {
}

void CC1125::receiveBuffer(void) {
}
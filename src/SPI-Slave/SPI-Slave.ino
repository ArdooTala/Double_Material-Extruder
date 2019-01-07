#include <SPI.h>

volatile int num = 0;

void setup() {
 	pinMode(MISO, OUTPUT);
	SPCR |= _BV(SPE);
	SPI.attachInterrupt();

	Serial.begin(9600);
}

void loop() {
	Serial.println(num);
}

ISR(SPI_STC_vect) {
	num = int(SPDR);
	Serial.println("num Updated!");
}
#include <SPI.h>

void setup() {
	pinMode(SS, OUTPUT);
	digitalWrite(SS, HIGH);
	SPI.begin();
	SPI.setClockDivider(SPI_CLOCK_DIV8);
}

void loop() {
	digitalWrite(SS, LOW);
	SPI.transfer(5318);
	digitalWrite(SS, HIGH);
	delay(1000);
}

/*
 * SuperBlinky
 *
 * Blinks two LEDs instead of one.
 *
 * License: MIT
 */

uint8_t led1 = 13;
uint8_t led2 = 6;

void setup(void)
{
	pinMode(led1,OUTPUT);
	pinMode(led2,OUTPUT);
}

void loop(void)
{
	static uint8_t state = HIGH;
	digitalWrite(led1,state);
	digitalWrite(led2,state);
	if (state!=LOW) state = LOW;
	else state = HIGH;
	delay(500);
}

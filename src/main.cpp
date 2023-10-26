#include <Arduino.h>
const int led_pin = LED_BUILTIN;
bool led_state = false;
unsigned long previous_time = 0;
const long interval = 1000;

void setup(){
	pinMode(led_pin, OUTPUT);
}

void loop(){
	unsigned long current_time = millis();

	if (current_time - previous_time >= interval){
		previous_time = current_time;
		}
		if (led_state == false) {
		led_state != led_state;
		} else {
		led_state = false;
		}
    digitalWrite(led_pin, led_state);
}
#include <Arduino.h>

int pinLED = A1;

void setup() {
    pinMode(pinLED, OUTPUT);
}

void loop() {
    digitalWrite(pinLED, HIGH);
    digitalWrite(pinLED, LOW);
    delay(10000);
}

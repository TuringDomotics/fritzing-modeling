#include "SevSeg.h"
SevSeg sevseg;
int tempSensorPin = 0;

void setup() {
  // Init PIN config
  byte numDigits = 4;
  byte digitPins[] = {2, 3, 4, 5};
  byte segmentPins[] = {6, 7, 8, 9, 10, 11, 12};
  bool resistorsOnSegments = false;
  byte hardwareConfig = COMMON_ANODE;
  sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments);
}

void loop() {
  // Read temperature from sensor by parssing voltage
  int reading = analogRead(tempSensorPin);
  float voltage = reading * 5.0;
  voltage /= 1024.0;
  int temperatureC = (int) ((voltage - 0.5) * 100);
  // Set the output to the 7 LED display
  const char* output = temperatureC + "\167C";
  sevseg.setChars(output);
  sevseg.refreshDisplay();
}

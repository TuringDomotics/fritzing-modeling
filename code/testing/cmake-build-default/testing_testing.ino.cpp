// automatically generated by arduino-cmake
#line 1 "E:/Nextcloud/TuringDomotics/fritzing-modeling/code/testing/testing.ino"
#include <Arduino.h>

#line 5 "E:/Nextcloud/TuringDomotics/fritzing-modeling/code/testing/cmake-build-default/testing_testing.ino.cpp"
#include "Arduino.h"

//=== START Forward: E:/Nextcloud/TuringDomotics/fritzing-modeling/code/testing/testing.ino
 void setup() ;
 void setup() ;
 void loop() ;
 void loop() ;
//=== END Forward: E:/Nextcloud/TuringDomotics/fritzing-modeling/code/testing/testing.ino
#line 1 "E:/Nextcloud/TuringDomotics/fritzing-modeling/code/testing/testing.ino"


int pinLED = A1;

void setup() {
    pinMode(pinLED, OUTPUT);
}

void loop() {
    digitalWrite(pinLED, HIGH);
}
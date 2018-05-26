// automatically generated by arduino-cmake
#line 1 "E:/Nextcloud/TuringDomotics/fritzing-modeling/code/displayManager/htSensor.ino"
#include <Arduino.h>
#include <LiquidCrystal.h>
#include "dht.h"

#define DHT11_PIN 7

#line 9 "E:/Nextcloud/TuringDomotics/fritzing-modeling/code/displayManager/cmake-build-htsensor-push/displayManager_htSensor.ino.cpp"
#include "Arduino.h"

//=== START Forward: E:/Nextcloud/TuringDomotics/fritzing-modeling/code/displayManager/displayManager.ino
 void setup() ;
 void setup() ;
 void loop() ;
 void loop() ;
//=== END Forward: E:/Nextcloud/TuringDomotics/fritzing-modeling/code/displayManager/displayManager.ino

//=== START Forward: E:/Nextcloud/TuringDomotics/fritzing-modeling/code/displayManager/htSensor.ino
 void setup() ;
 void setup() ;
 void loop() ;
 void loop() ;
 void readTempAndHumidity() ;
 void readTempAndHumidity() ;
//=== END Forward: E:/Nextcloud/TuringDomotics/fritzing-modeling/code/displayManager/htSensor.ino
#line 5 "E:/Nextcloud/TuringDomotics/fritzing-modeling/code/displayManager/htSensor.ino"


dht DHT;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
//    Serial.begin(9600);
    lcd.begin(16, 2);
}

void loop() {
    readTempAndHumidity();
}

void readTempAndHumidity() {
    int chk = DHT.read11(DHT11_PIN);
    lcd.setCursor(0,0);
    lcd.print("Temp: ");
    lcd.print(DHT.temperature);
    lcd.print((char)223);
    lcd.print("C");
    lcd.setCursor(0,1);
    lcd.print("Humidity: ");
    lcd.print(DHT.humidity);
    lcd.print("%");
    delay(1000);
}
//=== START : E:/Nextcloud/TuringDomotics/fritzing-modeling/code/displayManager/displayManager.ino
#line 1 "E:/Nextcloud/TuringDomotics/fritzing-modeling/code/displayManager/displayManager.ino"
#include <Arduino.h>
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
  int reading = analogRead(static_cast<uint8_t>(tempSensorPin));
  float voltage = reading * 5.0;
  voltage /= 1024.0;
  int temperatureC = (int) ((voltage - 0.5) * 100);
  // Set the output to the 7 LED display
  const char* output = temperatureC + "\167C";
  sevseg.setChars(const_cast<char *>(output));
  sevseg.refreshDisplay();
}

//=== END : E:/Nextcloud/TuringDomotics/fritzing-modeling/code/displayManager/displayManager.ino
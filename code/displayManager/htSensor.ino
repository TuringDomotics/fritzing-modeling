#include <Arduino.h>
#include <LiquidCrystal.h>
#include <dht.h>

dht DHT;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

#define DHT11_PIN 7

void readTempAndHumidity();

void setup() {
    lcd.begin(16, 2);
}

void loop() {
    readTempAndHumidity();
}

void readTempAndHumidity() {
    int chk = DHT.read11(static_cast<uint8_t>(DHT11_PIN));
    lcd.setCursor(0,0);
    lcd.print("Temp: ");
    lcd.print(DHT.temperature);
    lcd.print((char)223);
    lcd.print("C");
    lcd.setCursor(0,1);
    lcd.print("Humidity: ");
    lcd.print(DHT.humidity);
    lcd.print("%");
    delay(3000);
}
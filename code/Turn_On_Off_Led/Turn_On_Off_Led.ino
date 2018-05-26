#include <Esplora.h>
//#include <dht.h>

//Sensors
//dht DHT;
//#define DHT11_PIN 7

//PinValue
int pinLed = 2;
int pinLDR = A0;

//Variables
int brightness = 100;   
int valueLDR = 0;  

void setup() {
  Serial.begin(9600);
  pinMode(pinLed, OUTPUT);
}

void loop() {
  switchLed();
  //temperature();
  
  delay(1000);
}

void switchLed(){
  valueLDR = analogRead(pinLDR);
  Serial.println(valueLDR);
  if(valueLDR <= 75)
    analogWrite(pinLed, brightness-valueLDR-100);
  else digitalWrite(pinLed, LOW);
}

//void temperature(){
//  DHT.read11(DHT11_PIN);
//  Serial.print("Temperature = ");
//  Serial.println(DHT.temperature);
//  Serial.print("Humidity = ");
//  Serial.println(DHT.humidity);
//}



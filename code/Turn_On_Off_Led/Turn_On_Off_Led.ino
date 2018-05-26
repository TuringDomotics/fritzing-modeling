//PinValue
int pinLed = 2;
int pinLDR = A0;  

//Variables
int brightness = 255;   
int valueLDR = 0;  
int maximo = 0;

void setup() {
  Serial.begin(9600);
  pinMode(pinLed, OUTPUT);
}

void loop() {
  switchLed();
   
  delay(30);
}

void switchLed(){
  valueLDR = analogRead(pinLDR);
  Serial.println(valueLDR);
  if(valueLDR <= 75)
    analogWrite(pinLed, brightness-valueLDR-100);
  else digitalWrite(pinLed, LOW);
}



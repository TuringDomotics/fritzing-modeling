#include <Arduino.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int pinLED = 8;
int pinLDR = A8;
int pinControl = 13;

int brightness = 255;
int LDRValue = 0;
int control = 0;
bool isDifferent = false;

void ledOutput();
void screenOutput();
void clearScreen();

void setup() {
    lcd.begin(16, 2);
    pinMode(pinLED, OUTPUT);
    pinMode(pinControl, INPUT);
    Serial.begin(9600);
}

void loop() {
    int status = digitalRead(pinControl);
    if (status == HIGH) {
        isDifferent = true;
        control = (control + 1) % 3;
    } else 
        isDifferent = false;
    ledOutput();
    screenOutput();
    delay(200);
}

void ledOutput() {
    switch (control) {
        case 0:
            LDRValue = analogRead(pinLDR);
            Serial.println(LDRValue);
            if (LDRValue <= 75) {
                int newBrightness = brightness - LDRValue - 100;
                analogWrite(pinLED, newBrightness);
            } else {
                digitalWrite(pinLED, LOW);
            }
            break;
        case 1:
            digitalWrite(pinLED, HIGH);
            break;
        case 2:
            digitalWrite(pinLED, LOW);
            break;
        default:
            break;
    }
}

void screenOutput() {
    lcd.setCursor(0, 0);
    if (isDifferent)
        clearScreen();
    switch (control) {
        case 0:
            lcd.print("Auto. mode");
            break;
        case 1:
            lcd.print("Always on");
            break;
        case 2:
            lcd.print("Always off");
            break;
        default:
            break;
    }
}

void clearScreen() {
  lcd.setCursor(0, 0);
  for (int i = 0; i < 16; ++i)
  {
    lcd.write(' ');
  }
}


#include <LiquidCrystal.h>

// Connections:
// rs (LCD pin 4) to Arduino pin 12
// rw (LCD pin 5) to Arduino pin 11
// enable (LCD pin 6) to Arduino pin 10
// LCD pin 15 to Arduino pin 13
// LCD pins d4, d5, d6, d7 to Arduino pins 5, 4, 3, 2
LiquidCrystal lcd(12, 11, 10, 5, 4, 3, 2);

int backLight = 13;    // pin 13 will control the backlight

void setup()
{
  pinMode(backLight, OUTPUT);
  digitalWrite(backLight, HIGH); 
  lcd.begin(16,2);              
  lcd.clear();
  lcd.write("hello");  
  
  Serial.begin(9600);
}

void loop()
{/*
  if (Serial.available()){
    delay(100);
    lcd.clear();
    while(Serial.available() > 0){
      lcd.write(Serial.read());
    }
  }
  */
}

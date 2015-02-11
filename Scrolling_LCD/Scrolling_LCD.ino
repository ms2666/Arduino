#include <LiquidCrystal.h>

LiquidCrystal lcd(2, 4, 8, 9, 10, 11);

void setup(){
  lcd.begin(16, 2);
  Serial.begin(9600);
  lcd.print("My name is Mukund.");
}

void loop(){
  lcd.scrollDisplayLeft();
  delay(150);
  
}

#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 10, 5, 4, 3, 2);

int backLight=13;
int numRows = 2;
int numCols = 16;


void setup(){
  pinMode(backLight, OUTPUT);
  digitalWrite(backLight, HIGH);
  lcd.begin(numCols,numRows);
  lcd.clear();
  
  Serial.begin(9600);
}


void loop() {

  lcd.noAutoscroll();
  
  if (Serial.available()){
    delay(100);
    lcd.clear();
    while(Serial.available() > 0){
      lcd.write(Serial.read());
    }
  }
  
  
}

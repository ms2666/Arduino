const int ledGroundPin_1 = 10;
const int ledGroundPin_2 = 11;
int val[]={B00111111,B00000110,B01011011,B01001111,B01100110, B01101101,B01111101, B00000111, B01111111, B01101111};
int number;

void setup(){
  pinMode(ledGroundPin_1, OUTPUT);
  pinMode(ledGroundPin_2, OUTPUT);
  DDRD = B11111111;
}


void loop(){
  for(float i = 0; i<=99; i+=0.05){
    digitalWrite(ledGroundPin_1, LOW);
    digitalWrite(ledGroundPin_2, HIGH);
    PORTD = val[tensPlace(i)];
    delay(10);
    digitalWrite(ledGroundPin_1, HIGH);
    digitalWrite(ledGroundPin_2, LOW);
    PORTD = val[onesPlace(i)];
    delay(10);
  }
}

int onesPlace(int numberPassed){
  int x = numberPassed % 10;
  return x;
}

int tensPlace(int numberPassed){
  int x = numberPassed/10;
  return x;
}

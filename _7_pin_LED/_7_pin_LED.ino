int val[]={B00111111,B00000110,B01011011,B01001111,B01100110, B01101101,B01111101, B00000111, B01111111, B01101111};
int i;

void setup(){
  DDRD = B1111111;
  Serial.begin(9600);
}


void loop(){
  while(Serial.available() > 0){
    i = Serial.parseInt();
    
    int ledValue = i;
    PORTD = val[ledValue];
  }
}

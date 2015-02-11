void setup(){
  Serial.begin(9600);
  pinMode(9, OUTPUT);
}


void loop(){
  for(int i =100; i<=200; i++){
    analogWrite(9, i);
    delay(10);
  }
  for(int i=200; i>=100; i--){
    analogWrite(9, i);
    delay(10);
  }
}

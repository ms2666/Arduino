int i;
int ledPin = 11;

void setup(){
  Serial.begin(9600);

  pinMode(ledPin, OUTPUT);
  
}


void loop(){
  
  Serial.println("hello");
  Serial.flush();
  
  while(Serial.available() > 0){
    i = Serial.parseInt();
    //Serial.print(i);
    int ledValue = i;
    if (ledValue >=0 && ledValue <= 255){
      analogWrite(ledPin, ledValue);
    } else {
      Serial.write("Number either too high or too low");
    }
    
    Serial.flush();
  }
  
}

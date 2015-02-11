const int redPin = 3;
const int greenPin = 5;
const int bluePin = 10;

void setup(){
    
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  
  Serial.begin(9600);
}

void loop(){

  for(int i=0; i<= 255; i++){
    setColor(255-i, 0, i);
    delay(10);
  }
  
  for(int i=255; i>=0; i--){
    setColor(255-i, 0, i);
    delay(10);
  }
  
  
  
}

void setColor(int red, int green, int blue){
    
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}

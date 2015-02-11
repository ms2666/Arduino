int ledPin = 11;

void setup()
{
  pinMode(ledPin, OUTPUT);
  analogReference(DEFAULT);
  Serial.begin(9600); 
}


void loop()
{
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  
  sensorValue = constrain(sensorValue, 400, 500);
  int ledValue = map(sensorValue, 400, 500, 0, 255);
  
  analogWrite(ledPin, ledValue);
 
}

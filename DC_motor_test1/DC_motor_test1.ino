int motorPin = 9;



void setup()
{
  pinMode (motorPin, OUTPUT);
}


void loop()
{
  analogWrite(motorPin, 255);
}

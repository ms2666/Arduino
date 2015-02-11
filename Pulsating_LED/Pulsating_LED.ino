int switchPin = 8;
int ledPin = 13;
boolean switchState = LOW;
boolean previousState = LOW;
boolean ledOn = false;

//============================================================

void setup()
{
  pinMode(switchPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

//============================================================

boolean fix(boolean previous)
{
  boolean currentState = digitalRead(switchPin);
  if (currentState != previous)
  {
    delay(5);
    currentState = digitalRead(switchPin);
  }
  return currentState;
}

//============================================================

void loop()
{
   switchState = fix(previousState);
   if(previousState == LOW && switchState == HIGH)
   {
     ledOn = !ledOn;
   }
   previousState = switchState;
   digitalWrite(ledPin, ledOn);
   
}

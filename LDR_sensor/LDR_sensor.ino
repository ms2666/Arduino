int sensePin = 0;
int ledPin = 11;
int maxValue = 600;
int minValue = 400;

void setup()
{
  analogReference(DEFAULT);
  
  pinMode(ledPin, OUTPUT);
  
  Serial.begin(9600);
}


void loop()
{
  Serial.println(analogRead(sensePin));
  int val = analogRead(sensePin);
  
  val = constrain(val, minValue, maxValue);
  int ledLevel = map(val, minValue, maxValue, 255, 0);
  
  analogWrite(ledPin, ledLevel);
}

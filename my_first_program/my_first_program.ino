//Mukund's First Arduino Program

int ledPin = 13;

void setup()
{
  //initialize digital pins as outputs
  pinMode (ledPin, OUTPUT);
}

void loop()
{
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
}


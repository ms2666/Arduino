int pin = 7;
unsigned long duration;
int ledPin = 9;

void setup()
{
  Serial.begin(9600);
  pinMode(pin, INPUT);
}

void loop()
{
  duration = pulseIn(pin, HIGH);
  analogWrite(ledPin, duration/3)
  Serial.print("The percentage of time this PWM is on: ");
  Serial.print(duration/5);
  Serial.print("%\n");
  delay(500);
}

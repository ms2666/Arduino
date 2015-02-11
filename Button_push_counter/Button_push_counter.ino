int buttonPushCounter = 0;
int buttonState = 0;
int lastButtonState = 0;

int buttonPin = 2;
int ledPin = 13;


void setup()
{
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}


void loop()
{
  buttonState = digitalRead(buttonPin);

  if(buttonState != lastButtonState){
    if(buttonState == HIGH){
      buttonPushCounter++;
      Serial.println("on");
      Serial.print("number of button pushes:  ");
      Serial.println(buttonPushCounter);
    }
    else{
      Serial.println("off");
    }
  }
  
  lastButtonState = buttonState;
}

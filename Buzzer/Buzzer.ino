int buzzer=8;//Connect the buzz positive Pin to Digital Pin 8 
void setup()
{
  pinMode(buzzer,OUTPUT);//Set Pin Mode as output
}
void loop()
{
  unsigned char i,j;
  while(1)
  {
    for(i=0;i<80;i++) //Sound effect 1
    {
      digitalWrite(buzzer,HIGH);//Make some sound
      delay(1);//Delay 1ms
      digitalWrite(buzzer,LOW);//Be quiet 
      delay(1);//Delay 1ms
    }
    for(i=0;i<100;i++) //Sound effect 2
    {
      digitalWrite(buzzer,HIGH);//Make some sound
      delay(2);//Delay 2ms
      digitalWrite(buzzer,LOW);//Be quiet
      delay(2);//Delay 2ms
    }
  }
}

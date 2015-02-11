#define CHANNEL_1_PIN 34

volatile unsigned long timer_start;
volatile int pulse_time;
volatile int last_interrupt_time;

// Interrupt handler
void calcSignal()
{
    last_interrupt_time = micros();
    if(digitalRead(CHANNEL_1_PIN) == HIGH)
    {
        timer_start = micros();
    }
    else
    {
        if(timer_start &gt; 0)
        {
            pulse_time = ((volatile int)micros() - timer_start);
            timer_start = 0;
        }
    }
}

// Normal Arduino stuff
void setup()
{
    timer_start = 0;
    attachInterrupt(CHANNEL_1_PIN, calcSignal, CHANGE);
    Serial.begin(115200);
}

void loop()
{
    Serial.println(pulse_time);
    delay(20);
}
  int led = 9;
  int ledstate = LOW;
  unsigned long previousMillis = 0;
  const long interval = 1000;
void setup()
{
  pinMode(led,OUTPUT);
}

void loop()
{
  unsigned long currentMillis = millis();
  
    if(currentMillis - previousMillis > interval)
    {
      previousMillis = currentMillis;
        if (ledstate == LOW) {
      ledstate = HIGH;
    } else {
      ledstate = LOW;
    }
    }
  digitalWrite(led, ledstate);
}

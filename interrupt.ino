int state = 0;
void setup() {
    pinMode(11,OUTPUT);
    pinMode(13,OUTPUT);

     attachInterrupt(0,changestate,RISING);
}

void loop() {
  // put your main code here, to run repeatedly:
 
  
  digitalWrite(11,1);
  delay(1000);
  digitalWrite(11,0);
  delay(1000);

  
}

void changestate()
{
  state = !state;
  digitalWrite(13,state);
}

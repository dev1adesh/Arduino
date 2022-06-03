#include<RH_ASK.h>
#include<SPI.h>

RH_ASK rf;
void setup() {
  // put your setup code here, to run once:
//to initialise
rf.init();
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
uint8_t buf[2];
uint8_t buflen=sizeof(buf);
if(rf.recv(buf, &buflen))
{
  Serial.print("Message Recieved");
  Serial.println((char*)buf);
}
}

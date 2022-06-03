#include<RH_ASK.h>
#include<SPI.h>
RH_ASK rf;
void setup() {
  // put your setup code here, to run once:
//to initialise
rf.init();
}

void loop() {
  // put your main code here, to run repeatedly:
const char *msg="he";
rf.send((uint8_t*)msg,strlen(msg));
rf.waitPacketSent();//it will get stuck here
delay(1000);
}

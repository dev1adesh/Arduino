#include <Servo.h>
Servo XServo;
int Xpin=A0;
int Ypin=A1;
int Spin=2;
int Servopin=11;
int buzzPin=7;
int WV;
int Xval;
int Sval;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(Xpin,INPUT);
pinMode(Ypin,INPUT);
pinMode(Spin,INPUT);
pinMode(Servopin,OUTPUT);
pinMode(buzzPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:


Xval=analogRead(Xpin);
WV=(180.0/1023.0)*Xval;
Sval=digitalRead(Spin);

XServo.write(WV);

delay(200);

XServo.attach(Xpin);

Serial.print("X Value = ");
Serial.print(Xval);
Serial.print("Y Value = ");

Serial.print("Switch State is ");
Serial.println(Sval);

}

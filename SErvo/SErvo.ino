#include <Servo.h>
Servo servodaffa;
int servopin = 7;
void setup() {
  // put your setup code here, to run once:
  servodaffa.attach(servopin);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  servodaffa.write(120);
  delay(100);
 
}

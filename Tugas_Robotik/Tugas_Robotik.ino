#include <Servo.h>
Servo daffa;
int d = 0;
void setup() {
  Serial.begin(9600);
  daffa.attach(2);
}

void loop() {
 if(
  {
    daffa.write(d);
  }
}

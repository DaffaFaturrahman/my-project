#include <Servo.h>
Servo daffa;
int pos = 0;
void setup() {
  daffa.attach(5);

}

void loop() {
  for(pos=0; pos < 180; pos+=1)
  {
    daffa.write(pos);
    delay(15);
  }
  for(pos=180; pos>=1; pos-=1)
  {
    daffa.write(pos);
    delay(15);
  }
}

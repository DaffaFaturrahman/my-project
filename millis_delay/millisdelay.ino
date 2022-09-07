#include <millisDelay.h>
#define button1 5
#define button2 7
int relay = 3;
int butstate1,butstate2;
int state1,state2 = 0;
millisDelay relayDelay;
void setup() {
  pinMode(5,INPUT);
  pinMode(7,INPUT);
  pinMode(3,OUTPUT);
  relayDelay.start(10000);
}

void loop() {
  butstate1 = digitalRead(button1);
  butstate2 = digitalRead(button2);

  if(butstate2 == 1){
    digitalWrite(3,0);
    state2 = 0;
  }
  if(butstate1 == 1){
  digitalWrite(3,1);
  state1 = 1;
  }
 if(relayDelay.justFinished()){
  digitalWrite(3,0);
 }

}
 

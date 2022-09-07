#include <Servo.h>
Servo servodapdan;
const int button1 = 2;
const int button2 = 3;
const int button3 = 4;
const int button4 = 5;
const int button5 = 6;
int buttonS1 = 0;
int buttonS2 = 0;
int buttonS3 = 0;
int buttonS4 = 0;
int buttonS5 = 0;
int target = 0;
int now = 0;
void setup() {
  servodapdan.attach(9);
  servodapdan.write(90);
 pinMode(button1,INPUT);
 pinMode(button2,INPUT); 
 pinMode(button3,INPUT);
 pinMode(button4,INPUT); 
 pinMode(button5,INPUT);
}

void loop() {
  buttonS1=digitalRead(button1);
   buttonS2=digitalRead(button2);
   buttonS3=digitalRead(button3);
   buttonS4=digitalRead(button4);
   buttonS5=digitalRead(button5);
  if(buttonS1==HIGH)
  target = 0;
  if(buttonS2==HIGH)
  target = 45;
  if(buttonS3==HIGH)
  target = 90;
  if(buttonS4==HIGH)
  target = 135;
  if(buttonS5==HIGH)
  target = 180;

  if(target>now){
    for(int daf; daf<=target; daf++){
      servodapdan.write(daf);
     delay(5);}
    now=target;
  }
 if(now>target){
    for(int daf=now; daf>=target; daf--){
      servodapdan.write(daf);
      delay(5);}
      now=target;
      }
  }

#include <Servo.h>
Servo servo;
int sensor = A0;
int servopin = 4 ;
void setup() {
  Serial.begin(9600);   
  pinMode(A0,INPUT);
  servo.attach(servopin);
  servo.write(0);        
}

void loop() {
  int sensorldr=analogRead(A0);
  Serial.begin(sensorldr);
  sensorldr=map(sensorldr,0,1023,0,255);
  if (sensorldr<=90)
  {
    servo.write(90);
    delay(500);
  }
 if (sensorldr>=90)
 {
    servo.write(0);
    delay(500);
 }
}

#include <AFMotor.h>
AF_DCMotor m1(1);
AF_DCMotor m2(2);
const int ps1 = A0;
const int ps2 = A1;
const int ps3 = A2;
const int ps4 = A3;
int waktu = 50;
int a = 3;
int b = 5;
int c = 6; 
int d = 9;
int s1, s2, s3, s4 ; 

void setup() {
  Serial.begin(9600);
  pinMode(ps1,INPUT);
  pinMode(ps2,INPUT);
  pinMode(ps3,INPUT);
  pinMode(ps4,INPUT);
  m1.setSpeed(200);
  m2.setSpeed(200); 
}

void loop() {
  s1 = digitalRead(ps1);
  s2 = digitalRead(ps2);
  s3 = digitalRead(ps3);
  s4 = digitalRead(ps4);
  
  if(ps1 == HIGH);
  {
  m1.run(BACKWARD);
  m2.run(FORWARD); 
 delay(waktu);
}
if(ps2 == HIGH);
{
  
 m1.run(FORWARD);
 m2.run(FORWARD);
  delay(waktu);
}
 if(ps3 == HIGH);
{
 m1.run(FORWARD);
 m2.run(FORWARD);
  delay(waktu);
}
if(ps4 == HIGH);
{ 
  m1.run(FORWARD);
  m2.run(BACKWARD);
  delay(waktu);
}
}

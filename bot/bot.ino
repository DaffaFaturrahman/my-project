#include <SoftwareSerial.h>
SoftwareSerial module_bluetooth(10, 11); 
int In_1 = 4;
int In_2 = 5;
int In_3 = 6;
int In_4 = 7;
const int sensor = 9;
const int kipas = 13;
char data = 0;
int sensorState = 0;
 
void setup() {
    Serial.begin(9600);
    
    pinMode(13,OUTPUT); //kipas
    pinMode(4,OUTPUT); //in1
    pinMode(5,OUTPUT); //in2
    pinMode(6,OUTPUT); //in3
    pinMode(7,OUTPUT); //in4
    pinMode(9,INPUT); //sensor
    
}
void loop() {
    sensorState = digitalRead(sensor);

  if(Serial.available() > 0){
    data = Serial.read(); Serial.print(data);
    Serial.print("\n");

    if(data == '1'){

      digitalWrite(In_1,1);
      digitalWrite(In_2,0);
      digitalWrite(In_3,0);
      digitalWrite(In_4,1);
    }
    if(data == '0'){
      digitalWrite(kipas,1);
      digitalWrite(In_1,0);
      digitalWrite(In_2,0);
      digitalWrite(In_3,0);
      digitalWrite(In_4,0);
    }
    if(data == '2') {
      digitalWrite(In_1,0);
      digitalWrite(In_2,1);
      digitalWrite(In_3,1);
      digitalWrite(In_4,0);
    }
    if(data == '3') {
      digitalWrite(In_1,0);
      digitalWrite(In_2,1);
      digitalWrite(In_3,0);
      digitalWrite(In_4,1);
    }
    if(data == '4') {
      digitalWrite(In_1,1);
      digitalWrite(In_2,0);
      digitalWrite(In_3,1);
      digitalWrite(In_4,0);
    }
    if(sensorState == LOW){
      digitalWrite(kipas,0);
    }
    else;
    
}
}

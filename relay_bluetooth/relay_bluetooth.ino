#define r1 8
#include <SoftwareSerial.h>
SoftwareSerial module_bluetooth(0, 1);


char data = 0 ;
void setup() {
  Serial.begin(9600);
  pinMode(r1, OUTPUT);
}

void loop() {
  if(Serial.available() > 0)  
  {
    data = Serial.read();Serial.print(data);    //Pembacaan dan ditampilkan data yang masuk   
    Serial.print("\n"); 
    //Data yang masuk    
    if(data == '0'){
    digitalWrite(r1,1); //NC
    }
   
    if(data == '1'){
    digitalWrite(r1,0); //NO
    }
}
}

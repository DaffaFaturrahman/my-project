/*
  Nama    : Daffa Faturrahman
  Kelas   : A
  Project : 4 Push Button Led
  Date    : 1 Agustus 2020
 */


#define led 2
#define button 8
int state = 0;

void setup() {
  Serial.begin(9600);
 pinMode(led,OUTPUT);
 pinMode(button,INPUT);
}

void loop() {
 state = digitalRead(button);
 if(state ==HIGH){
  digitalWrite(led,1);
  Serial.println("infrared high");
 }
 else{
  digitalWrite(led,0);
  Serial.println("infrared LOW");
 }
}

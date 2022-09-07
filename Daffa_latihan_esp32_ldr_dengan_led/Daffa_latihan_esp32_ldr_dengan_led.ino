/*
  Nama    : Daffa Faturrahman
  Kelas   : A
  Project : 6 LDR dengan LED
  Date    : 6 Agustus 2020
 */
int LDR;
int led1 = 5;
int led2 = 18;
int led3 = 19;

void setup() {
Serial.begin(9600);
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);

}

void loop() {
LDR = analogRead(34);
Serial.println(LDR);
delay(500);

if (LDR>2000){
  digitalWrite(led1,0);
  digitalWrite(led2,0);
  digitalWrite(led3,0);
}
else if (LDR>1400){
  digitalWrite(led1,1);
  digitalWrite(led2,0);
  digitalWrite(led3,0);
}
else if (LDR>900){
  digitalWrite(led1,1);
  digitalWrite(led2,1);
  digitalWrite(led3,0);
}
else if (LDR<500){
  digitalWrite(led1,1);
  digitalWrite(led2,1);
  digitalWrite(led3,1);
}  
}

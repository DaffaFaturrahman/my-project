int m1 = 3;  // motor kiri maju
int m2 = 4;  // motor kiri mundur
int m3 = 5;  // motor kanan maju
int m4 = 6;  // motor kanan mundur
void setup() {
Serial.begin(9600);


pinMode(m1,OUTPUT);
pinMode(m2,OUTPUT);
pinMode(m3,OUTPUT);
pinMode(m4,OUTPUT);

}

void loop() {
  maju();
  delay(3000);
   belok_kanan();
   delay(1000);
   maju();
   delay(2000);
   belok_kiri();
  delay(1000);
    maju();
    delay(2000);
  balik_kanan();
  delay(1000);
  maju();
  delay(2000);
  balik_kiri();
  delay(1000);

 
  berhenti();
  delay(5000);
  
}
void berhenti (){
  digitalWrite(m1,0);
  digitalWrite(m2,0);
  digitalWrite(m3,0);
  digitalWrite(m4,0);
}
void maju (){
  digitalWrite(m1,1);
  digitalWrite(m2,0);
  digitalWrite(m3,1);
  digitalWrite(m4,0);
  
}
void mundur (){
  
  digitalWrite(m1,0);
  digitalWrite(m2,1);
  digitalWrite(m3,0);
  digitalWrite(m4,1);
}
void belok_kanan (){
  
  digitalWrite(m1,1);
  digitalWrite(m2,0);
  digitalWrite(m3,0);
  digitalWrite(m4,0);
}
void belok_kiri (){
  
  digitalWrite(m1,0);
  digitalWrite(m2,0);
  digitalWrite(m3,1);
  digitalWrite(m4,0);
}
void balik_kanan (){
  
  digitalWrite(m1,0);
  digitalWrite(m2,1);
  digitalWrite(m3,0);
  digitalWrite(m4,1);
}
void balik_kiri (){
  
  digitalWrite(m1,0);
  digitalWrite(m2,1);
  digitalWrite(m3,1);
  digitalWrite(m4,0);
}

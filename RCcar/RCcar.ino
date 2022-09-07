int m1 = 5;  //kanan maju
int m2 = 4;  //kanan mundur
int m3 = 3;  //kiri maju
int m4 = 6;  //kiri mundur
int v = 8;
void setup() {
  Serial.begin(9600);
   pinMode(v,OUTPUT);
pinMode(m1,OUTPUT);
pinMode(m2,OUTPUT);
pinMode(m3,OUTPUT);
pinMode(m4,OUTPUT);
digitalWrite(v,1);
berhenti();
delay(2000);
}
void loop() {
  maju();
  delay(2000);
  belok_kiri();
  delay(2000);
  belok_kanan();
  delay(2000);
}
void berhenti(){
  digitalWrite(m1,0);
  digitalWrite(m2,0);
  digitalWrite(m3,0);
  digitalWrite(m4,0);
}
void maju(){
  digitalWrite(m1,1);
  digitalWrite(m2,0);
  digitalWrite(m3,1);
  digitalWrite(m4,0);
  
}
void mundur(){
  
  digitalWrite(m1,0);
  digitalWrite(m2,1);
  digitalWrite(m3,0);
  digitalWrite(m4,1);
}
void belok_kanan(){
  
  digitalWrite(m1,0);
  digitalWrite(m2,0);
  digitalWrite(m3,1);
  digitalWrite(m4,0);
}
void belok_kiri(){
  
  digitalWrite(m1,1);
  digitalWrite(m2,0);
  digitalWrite(m3,0);
  digitalWrite(m4,0);
}
void balik_kanan(){
  
  digitalWrite(m1,0);
  digitalWrite(m2,1);
  digitalWrite(m3,1);
  digitalWrite(m4,0);
}
void balik_kiri (){
  
  digitalWrite(m1,1);
  digitalWrite(m2,0);
  digitalWrite(m3,0);
  digitalWrite(m4,1);
}

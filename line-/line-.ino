int v = 8;
int m1 = 5;  //kanan maju
int m2 = 6;  //kanan mundur
int m3 = 3;  //kiri maju
int m4 = 4;  //kiri mundur
int s1,s2,s3,s4;

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
s1 = analogRead(A0);
s2 = analogRead(A1);
s3 = analogRead(A2);
s4 = analogRead(A3);

Serial.print("sensor 1=");
Serial.println(s1);
Serial.print("sensor 2=");
Serial.println(s2);
Serial.print("sensor 3=");
Serial.println(s3);
Serial.print("sensor 4=");
Serial.println(s4);

Serial.println();
Serial.println(); 
delay(100);

if(s1 > 700){
  Serial.print("belok kanan");
  belok_kanan();
}
if( s2 > 700 ){
  Serial.print("maju");
  maju();
}
if( s3 > 700 ){
  Serial.print("maju");
  maju();
}
if(s4 > 68  0){
  Serial.print("belok kiri");
  belok_kiri();
  }
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

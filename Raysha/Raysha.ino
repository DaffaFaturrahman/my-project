int in1 = 5;
int in2 = 6;
int EN1 = 10;
const int pb1 = 7;
const int pb2 = 8;
const int pb3 = 9;

void setup() {
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(pb1,INPUT);
  pinMode(pb2,INPUT);
  pinMode(pb3,INPUT);
  pinMode(EN1,OUTPUT);
}

void loop() {
//BUTTON UNTUK BERPUTAR CEPAT SEARAH JARUM JAM (KANAN)
if(digitalRead(pb1)==LOW){
  digitalWrite(in1,1);
  digitalWrite(in2,0);
  analogWrite(EN1,200);
  
}
//BUTTON UNTUK BERPUTAR LAMBAT BERLAWANAN ARAH JARUM JAM (KIRI)
if(digitalRead(pb2)==LOW){
  digitalWrite(in1,0);
  digitalWrite(in2,1);
  analogWrite(EN1,100);

}
//BUTTON UNTUK STOP/MENONAKTIFKAN
if(digitalRead(pb3)==LOW){
  digitalWrite(in1,0);
  digitalWrite(in2,0);
  analogWrite(EN1,0);

}
}

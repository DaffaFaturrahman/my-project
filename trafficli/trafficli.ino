#define MERAH1 2
#define KUNING1 3
#define HIJAU1 4
#define MERAH2 5
#define KUNING2 6
#define HIJAU2 7
#define MERAH3 8
#define KUNING3 9
#define HIJAU3 10
#define MERAH4 11
#define KUNING4 12
#define HIJAU4 13

void setup() {
pinMode(MERAH1,OUTPUT);
pinMode(KUNING1,OUTPUT);
pinMode(HIJAU1,OUTPUT);
pinMode(MERAH2,OUTPUT);
pinMode(KUNING2,OUTPUT);
pinMode(HIJAU2,OUTPUT);
pinMode(MERAH3,OUTPUT);
pinMode(KUNING3,OUTPUT);
pinMode(MERAH4,OUTPUT);
pinMode(KUNING4,OUTPUT);
pinMode(HIJAU4,OUTPUT);
digitalWrite(MERAH1,LOW);
digitalWrite(KUNING1,LOW);
digitalWrite(HIJAU1,LOW);
digitalWrite(MERAH2,LOW);
digitalWrite(KUNING2,LOW);
digitalWrite(HIJAU2,LOW);
digitalWrite(MERAH3,LOW);
digitalWrite(KUNING3,LOW);
digitalWrite(HIJAU3,LOW);
digitalWrite(MERAH4,LOW);
digitalWrite(KUNING4,LOW);
digitalWrite(HIJAU4,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(HIJAU1,HIGH);
  digitalWrite(MERAH2,HIGH);
  digitalWrite(MERAH3,HIGH);
  digitalWrite(MERAH4,HIGH);
  delay(500);
  digitalWrite(KUNING1,HIGH);
  digitalWrite(HIJAU1,LOW);
  delay(500);
  digitalWrite(KUNING1,LOW);
  digitalWrite(MERAH1,HIGH);
  digitalWrite(HIJAU2,HIGH);
  digitalWrite(MERAH2,LOW);
  delay(500);
  digitalWrite(KUNING2,HIGH);
  digitalWrite(HIJAU2,LOW);
  delay(500);
  digitalWrite(KUNING2,LOW);
  digitalWrite(MERAH2,HIGH);
  digitalWrite(HIJAU3,HIGH);
  digitalWrite(MERAH3,LOW);
  delay(500);
  digitalWrite(KUNING3,HIGH);
  digitalWrite(HIJAU3,LOW);
  delay(500);
  digitalWrite(KUNING3,LOW);
  digitalWrite(MERAH3,HIGH);
  digitalWrite(HIJAU4,HIGH);
  digitalWrite(MERAH4,LOW);
  delay(500);
  digitalWrite(KUNING3,HIGH);
  digitalWrite(HIJAU4,LOW);
  delay(500);
  digitalWrite(KUNING4,LOW);
  digitalWrite(MERAH4,HIGH);
  digitalWrite(HIJAU1,HIGH);
  digitalWrite(MERAH1,LOW);
  
  

}

/*
  Nama    : Daffa Faturrahman
  Kelas   : A
  Project : 7 LDR dengan Relay
  Date    : 7 Agustus 2020
 */

int LDR;
int relay = 5;

void setup() {
  Serial.begin(9600);
  pinMode(relay,OUTPUT);
  
}

void loop() {
  LDR = analogRead(4);
  Serial.println(LDR);
  delay(300);

  if(LDR > 800){
    digitalWrite(relay,1);
  }
  else{
    digitalWrite(relay,0);
  }
  delay(1000);
}

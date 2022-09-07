#define r1 8
int sensorLDR = A0;
void setup() {
    Serial.begin(9600);
  pinMode(r1,OUTPUT);
  
}

void loop() {
  int LDR=analogRead(A0);
  if(LDR>770){
    Serial.print("ON");
    digitalWrite(r1,HIGH); //NC
  }
  if(LDR<=550){
    Serial.print("OFF");
    digitalWrite(r1,LOW);
  }
  digitalWrite(ok,200);
  
}

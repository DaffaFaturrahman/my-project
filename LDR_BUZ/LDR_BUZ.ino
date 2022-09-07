int buz = 7;
int ldr = A0 ;
void setup() {
  Serial.begin(9600);
  pinMode(buz,OUTPUT);
  pinMode(ldr,INPUT_PULLUP);

  
}
void loop() {
    if(digitalRead(ldr)==HIGH){
      digitalWrite(buz,1);
  }
    if(digitalRead(ldr)==LOW){
      digitalWrite(buz,0);
    }
}

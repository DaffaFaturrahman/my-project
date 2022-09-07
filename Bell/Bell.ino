int ldr = A0;
int buz = 2 ;
void setup() {
  Serial.begin(9600);
  pinMode(ldr,INPUT_PULLUP);
  pinMode(2,OUTPUT);

}

void loop() {
  int sensorldr=analogRead(A0);
  Serial.begin(sensorldr);
  sensorldr=map(sensorldr,0,1023,0,255);
  if(sensorldr<=90)
  {
    digitalWrite(buz,1);
    
  }
  if(sensorldr>=90)
  {
    digitalWrite(buz,0);
  }

}

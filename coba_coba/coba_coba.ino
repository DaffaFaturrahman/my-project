int LEDdaffa = 2;
void setup() {
  pinMode(LEDdaffa,OUTPUT);
  
}

void loop() {
  digitalWrite(LEDdaffa,HIGH);
  delay(2000);
  digitalWrite(LEDdaffa,
  LOW);
  delay(2000);
}

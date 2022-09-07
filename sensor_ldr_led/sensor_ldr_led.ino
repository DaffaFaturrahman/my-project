int sensor = A0;
int led = 2;
void setup() {
  Serial.begin(9600);   
  pinMode(A0,INPUT);
  pinMode(led,OUTPUT);
}

void loop() {
  int ldrAnalog=analogRead(A0);

  if(ldrAnalog<=420)
  {
  digitalWrite(led,0);
  delay(150);
  }
  
  if(ldrAnalog>420)
  {
  digitalWrite(led,1);
  delay(150);
  }
}

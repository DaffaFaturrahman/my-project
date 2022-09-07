const int MotDC = 12 ;

void setup() {
  // put your setup code here, to run once:
  pinMode (MotDC, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  // kecepatan tinggi'
  analogWrite (MotDC,255);
  delay (5000);

  //kecepatan medium
  analogWrite (MotDC,128);
  delay (5000);
}

void setup() {
  // put your setup code here, to run once:
  pinMode (A0, INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int A0;
   analogRead (A0);
   digitalWrite (A0, HIGH); // turn
   // the led on (HIGH IS THE VOLTAGE LEVEL 1);....
   digitalWrite (A0, LOW); // turn
   
}

int Pb1 = 2;
int Pb2 = 4;
int LED = 3;
int LED2 = 5;
int Pb3 = 6;
void setup() {
  // put your setup code here, to run once:
pinMode (LED,OUTPUT);
pinMode (Pb1,INPUT_PULLUP);
pinMode (Pb2, INPUT_PULLUP);
pinMode (LED2, OUTPUT);
pinMode (Pb3, INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(Pb1)==LOW)
 {
 digitalWrite (LED,HIGH);
 digitalWrite (LED2,LOW);
 }
 if (digitalRead(Pb2)==LOW)
 {
  digitalWrite (LED,LOW);
  digitalWrite (LED2,LOW);
 }

 }

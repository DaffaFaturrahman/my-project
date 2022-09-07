int Pb1 = 2;
int Pb2 = 4;
int LED = 3;
void setup() {
  // put your setup code here, to run once:
pinMode (LED,OUTPUT);
pinMode (Pb1,INPUT);
pinMode (Pb2,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (digitalRead(Pb1)==0)
 {
  calibrate();
 }{
  digitalWrite (LED,LOW);
 }}
 void calibrate() {
  digitalWrite (LED,LOW);
  delay(1000);
 digitalWrite (LED,HIGH);
 delay(100);
 digitalWrite (LED,LOW);
 delay(100);
 digitalWrite(LED,1);
 delay(100);
 digitalWrite(LED,0);
 delay(1000);

 if (digitalRead(Pb2)==0){
      digitalWrite (LED,LOW);
  delay(1000);
 digitalWrite (LED,HIGH);
 delay(100);
 digitalWrite (LED,LOW);
 delay(100);
 digitalWrite(LED,1);
 delay(100);
 digitalWrite(LED,0);
 delay(1000);
 }
 }
 
  

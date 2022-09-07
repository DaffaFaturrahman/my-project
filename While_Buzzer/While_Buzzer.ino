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
pinMode (Pb3, INPUT);

}

void loop() {
  if(digitalRead(Pb1)==0){
    digitalWrite(LED,1);
    delay(100);
    digitalWrite(LED,0);
    delay(100);
  }
    if(digitalRead(Pb2)==0){
   
    digitalWrite (LED,0);
    
    }
  }

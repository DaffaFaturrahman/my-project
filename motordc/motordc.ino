int pb1 = 2;
int pb2 = 3;
int pb3 = 5;
int pb4 = 6;
const int IN1 = 9;
const int IN2 = 10;
int EN1 = 11;
void sped (){
  analogWrite(EN1,255);
}
void setup() {
  // put your setup code here, to run once:
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(pb1,INPUT);
  pinMode(pb2,INPUT);
  pinMode(pb3,INPUT);
  pinMode(pb4,INPUT);
  

  

}

void loop() {
  
  if(digitalRead(pb1)==0){
    digitalWrite(IN1,0);
    digitalWrite(IN2,1);
    sped();
  }
  if(digitalRead(pb2)==LOW){
    digitalWrite(IN1,1);
    digitalWrite(IN2,0);
    sped();
  }
  if(digitalRead(pb3)==0){
    digitalWrite(IN1,0);
    digitalWrite(IN2,1);
    delay(5000);
    digitalWrite(IN1,0);
    digitalWrite(IN2,0);
    delay(1000);
    digitalWrite(IN1,1);
    digitalWrite(IN2,0);
    sped();
  }
  if(digitalRead(pb4)==0){
    digitalWrite(IN1,0);
    digitalWrite(IN2,0);
    sped();
  }
  
}

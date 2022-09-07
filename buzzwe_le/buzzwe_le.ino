int pb1 = 2;
int pb2 = 7;
int pb3 = 8;
int buzzer = 3;
int LED1 = 4;
int LED2 = 5;
int LED3 = 6;
void setup() {
  // put your setup code here, to run once:
pinMode(pb1,INPUT_PULLUP);
pinMode (pb2,INPUT_PULLUP);
pinMode (pb3,INPUT_PULLUP);
pinMode (buzzer,OUTPUT);
pinMode (LED1,OUTPUT);
pinMode (LED2,OUTPUT);
pinMode (LED3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(pb1)==0){
    digitalWrite(LED1,0);
    delay(1000);
    digitalWrite(LED1,1);
    delay(3000);
    digitalWrite (LED1,0);
    delay(1000);
  }
  if (digitalRead(pb2)==0){
        digitalWrite(buzzer,0);
      delay (1000);
      digitalWrite(buzzer,1);
      delay(5000);
      digitalWrite(buzzer,0);
      delay(1000);
  }
      if(digitalRead(pb3)==0){
        digitalWrite(LED2,0);
        digitalWrite(LED3,0);
        delay(1000);
        digitalWrite(LED2,1);
        digitalWrite (LED3,0);
        delay(700);
        digitalWrite(LED3,1);
        digitalWrite (LED2,0);
        delay(700);
        digitalWrite (LED3,0);
        digitalWrite (LED2,1);
        delay(700);
        digitalWrite (LED2,0);
        digitalWrite (LED3,1);
        delay(700);
        digitalWrite (LED2,1);
        digitalWrite (LED3,0);
        delay(700);
        digitalWrite (LED2,0);
        digitalWrite (LED3,1);
        delay(700);
        digitalWrite (LED2,1);
        digitalWrite (LED3,0);
        delay(700);
        digitalWrite(LED2,0);
        digitalWrite(LED3,0);
        delay(1000);
      }
    }

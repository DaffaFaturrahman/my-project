/*
  Nama    : Daffa Faturrahman
  Kelas   : A
  Project : 2 Led Blinking(2)
  Date    : 28 Juli 2020
 */

 
 
 #define ledpin1 5
 #define ledpin2 18
 #define ledpin3 19
 void setup() {
 pinMode(ledpin1,OUTPUT);
 pinMode(ledpin2,OUTPUT);
 pinMode(ledpin3,OUTPUT);
    
}

void loop() {
 digitalWrite(ledpin1,1);
 delay(1000);
 digitalWrite(ledpin1,0);
 delay(1000);
 digitalWrite(ledpin2,1);
 delay(1000);
 digitalWrite(ledpin2,0);
 delay(1000);
 digitalWrite(ledpin3,1);
 delay(1000);
 digitalWrite(ledpin3,0);
 delay(1000);
 
}

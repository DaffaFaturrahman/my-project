int s1,s2,s3,s4;

void setup() { 
Serial.begin(9600);

}

void loop() {
s1 = analogRead(A0);
s2 = analogRead(A1);
s3 = analogRead(A2);
s4 = analogRead(A3);

Serial.print("sensor 1=");
Serial.println(s1);
Serial.print("sensor 2=");
Serial.println(s2);
Serial.print("sensor 3=");
Serial.println(s3);
Serial.print("sensor 4=");
Serial.println(s4);

Serial.println();
Serial.println();
delay(100);




}

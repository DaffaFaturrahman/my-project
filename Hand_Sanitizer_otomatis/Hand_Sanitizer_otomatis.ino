#include <Servo.h>
#include <Servo.h>
Servo daffa;
Servo daffa1;
int jarak = 10; //jarak untuk belok
int trigpin = 5;
int echopin = 6;
int v = 2;
int ve = 3;

void setup() {
  //Baud Rate untuk komunikasi mikrokontroler dengan komputer
  Serial.begin(9600);
  daffa.attach(7);
  daffa1.attach(8);
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
  daffa.write(0);
  pinMode(v,OUTPUT);
  digitalWrite(v,1);
  pinMode(ve,OUTPUT);
  digitalWrite(ve,1);

}
void loop() {
  
  digitalWrite(ve,1);
  digitalWrite(v,1);
//Penentuan pin Trigger, Echo
  int cm = sensor_ping(5, 6);

  // Penentuan Kondisi
  if (cm < jarak) { //Kondisi maju
    daffa.write(180);
    daffa1.write(180);
    delay(1000);
    daffa.write(0);
    daffa1.write(0); 
  
  }

}
  
  //fungsi mendeteksi dengan sensor, menggunakan pin Trigger dan Echo
int sensor_ping(const int trigPin, const int echoPin) {
  long duration, cm ;

  //pinmode trigpin sebagai output
  
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(100);
  digitalWrite(trigPin, LOW);

  //pinmode echopin sebagai input
  duration = pulseIn(echoPin, HIGH);
  cm = microsecondsToCentimeters(duration);

  //Mengeprint output pada serial monitor
  Serial.print(cm);
  Serial.print("cm");

  //Memberikan jarak 1 line kebawah (ENTER)
  Serial.println();
  delay(100);
  return (cm);
}

//mengkonversi data sensor menjadi satuan detik
long microsecondsToCentimeters(long microseconds) {
  return microseconds / 29 / 2;
}

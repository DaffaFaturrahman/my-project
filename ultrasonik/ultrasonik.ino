int v = 2;

void setup() {
  //Baud Rate untuk komunikasi mikrokontroler dengan komputer
  Serial.begin(9600);

  pinMode(v,OUTPUT);
  digitalWrite(v,1);
}
void loop() {

  digitalWrite(v,1);
  //Penentuan pin Trigger, Echo
  int cm = sensor_ping(8, 7);
}
//fungsi mendeteksi dengan sensor, menggunakan pin Trigger dan Echo
int sensor_ping(const int trigPin, const int echoPin) {
  long duration, cm ;

  //pinmode trigpin sebagai output
  pinMode(trigPin, OUTPUT);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  //pinmode echopin sebagai input
  pinMode(echoPin, INPUT);
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

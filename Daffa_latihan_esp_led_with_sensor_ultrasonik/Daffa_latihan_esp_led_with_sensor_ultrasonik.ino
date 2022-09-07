
#define trigpin 10
#define echopin 11

float duration, distance;

void setup() {
  Serial.begin(115200);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  
}

void loop() {
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

  
}

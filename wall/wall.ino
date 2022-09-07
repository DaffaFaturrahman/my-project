/* Berikut merupakan rkodingan
   Wall Follower untuk menyelesaikan
   rintangan seperti berikut:

   FINISH
  |   ---|
  |      |
  |      |
  |---   |
  |      |
  |      |
  |   ---|
  |      |
  |      |
  |---   |
   START

   Legenda:
   + START    =     Posisi awal robot
   + FINISH   =     Tujuan akhir robot
   + ---      =     dinding atau checkpoint
   +  |       =     dinding atau checkpoint
*/

//Deklarasi pin motor
int M11 = 3;
int M12 = 5;
int M21 = 6;
int M22 = 9;
int ENA = 10;
int ENB = 11;
int jarak = 30; //jarak untuk belok
int waktukanan = 1000; //waktu untuk berbelok
int waktukiri = 1000; //waktu untuk berbelok
void sped (){
  analogWrite(ENA,200);
  analogWrite(ENB,200);
}
void setup() {
  //Baud Rate untuk komunikasi mikrokontroler dengan komputer
  Serial.begin(9600);

  //Penentuan mode pin sebagai output
  pinMode(M11, OUTPUT);
  pinMode(M12, OUTPUT);
  pinMode(M21, OUTPUT);
  pinMode(M22, OUTPUT);
  pinMode(ENA,OUTPUT);
  pinMode(ENB,OUTPUT);
}
void loop() {

  //Penentuan pin Trigger, Echo
  int cm = sensor_ping(8, 7);

  // Penentuan Kondisi
  if (cm > jarak) { //Kondisi maju
    MAJU ();
  }
  else if (cm < jarak) { 
   KANAN();
   Serial.print("KIRI");
   delay(700);
  }
}

//fungsi maju
void berhenti () {
  digitalWrite(M11, 0);//kri mundur
  digitalWrite(M12, 0);//kiri maju 
  digitalWrite(M21, 0);//kanan mundur
  digitalWrite(M22, 0);//kanan maju
  sped();
}
void MAJU () {
  digitalWrite(M11, 0);//kri mundur
  digitalWrite(M12, 1);//kiri maju 
  digitalWrite(M21, 0);//kanan mundur
  digitalWrite(M22, 1);//kanan maju
  sped();
}

//fungsi belok kanan
void KANAN () {
  digitalWrite(M11, 0);
  digitalWrite(M12, 1);
  digitalWrite(M21, 1);
  digitalWrite(M22, 0);
  sped();
}

//fungsi belok kiri
void KIRI () {
  analogWrite(M11, 1);
  analogWrite(M12, 0);
  analogWrite(M21, 0);
  analogWrite(M22, 1);
  sped();
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


//ultrasonic 1 untuk autowasher
const int echoPin1 =8;
const int trigPin1 =9;
 int distance1 =0;

//ultrasonic 2 untuk mengukur air bersih
const int echoPin2 =6;
const int trigPin2 =7;
 int distance2 =0;

//ultrasonic 3 untuk mengukur air kotor
const int echoPin3 =4;
const int trigPin3 =5;
 int distance3 =0;

int relay = 10; //relay bakal pompa air
int air = 11; //sinyal bakal air bersih

int ledmerah = 2;
int ledkuning = 3;
int ledhijau = 13;


void setup() {
 
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
  pinMode(trigPin3, OUTPUT);
  pinMode(echoPin3, INPUT);
  pinMode(relay,OUTPUT);
  pinMode(air,OUTPUT);
  pinMode(ledmerah,OUTPUT);
  pinMode(ledkuning,OUTPUT);
  pinMode(ledhijau,OUTPUT);
  Serial.begin(115200);
 
}

void loop() {
//bakal autowasher
if(distance1 <= 25){
    digitalWrite(relay,0);
    digitalWrite(13,1);
    Serial.println("Air Keluar");
    delay(10);
}
if(distance1 >= 20){
  digitalWrite(relay,1);
    digitalWrite(13,0);
  delay(10);
}

//bakal air bersih
if(distance2 >= 30){
  digitalWrite(11,1);
  digitalWrite(2,1);
  Serial.println("Air bersih akan habis");
  delay(100);
}
if(distance2 <= 30){
  digitalWrite(11,0);
  digitalWrite(2,0);
  delay(100);
}


//bakal air kotor
if(distance3 <= 8){
  digitalWrite(3,1);
  Serial.println("Air kotor segera penuh");
  delay(100);
}
if(distance3 >= 8){
  digitalWrite(3,0);
  delay(100);
}

 
  distance1 = getDistance(trigPin1, echoPin1);
  printDistance(1, distance1);
  delay(10);
 
  distance2 = getDistance(trigPin2, echoPin2);
  printDistance(2, distance2);
  delay(10);
 
  distance3 = getDistance(trigPin3, echoPin3);
  printDistance(3, distance3);
  delay(10);
  Serial.println("");
 
}

int getDistance (int trigPin, int echoPin){

 digitalWrite(trigPin, HIGH);
 delayMicroseconds(10);
 digitalWrite(trigPin, LOW);
 unsigned long pulseTime = pulseIn(echoPin, HIGH);
 int distance = pulseTime/58;
 return distance;

}

 void printDistance(int id, int dist){
 
     Serial.print(id);
     Serial.print("------>");  
    Serial.print(dist, DEC);
    Serial.println(" cm");
   
 }

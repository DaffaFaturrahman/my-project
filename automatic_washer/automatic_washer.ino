//ultrasonic 1
const int echoPin1 =8;
const int trigPin1 =9;
const int distance1 =0;

//ultrasonic 2
const int echoPin2 =6;
const int trigPin2 =7;
const int distance2 =0;

//ultrasonic 3
const int echoPin3 =4;
const int trigPin3 =5;
const int distance3 =0;

  
void setup() {
 
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
  pinMode(trigPin3, OUTPUT);
  pinMode(echoPin3, INPUT);

  Serial.begin(9600);
 
}

void loop() {

  distance1 = getDistance(trigPin1, echoPin1);
  printDistance(1, distance1);
  delay(150);

  distance2 = getDistance(trigPin2, echoPin2);
  printDistance(2, distance2);
  delay(150);

  distance3 = getDistance(trigPin3, echoPin3);
  printDistance(3, distance3);
  delay(150);
  Serial.println("");
  delay(500);
 

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

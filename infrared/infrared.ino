int IRSensor = 17; // connect ir sensor to arduino pin 2
int LED = 13; // conect Led to arduino pin 13

void setup() 
{


Serial.begin(115200);
  pinMode (IRSensor, INPUT); // sensor pin INPUT
  pinMode (LED, OUTPUT); // Led pin OUTPUT
}

void loop(){
  int statusSensor = digitalRead (IRSensor);
  
  if (statusSensor == 1){
    digitalWrite(LED, 0); // LED 
    Serial.println("infrared HIGH");

  }
  
  else
  {
    digitalWrite(LED, 1); // LED 
    Serial.println("infrared LOW");
  }
  
}

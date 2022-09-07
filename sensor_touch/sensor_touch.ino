int touch = 5;// connect output to push button

int val = 0; // push value from pin 2
int lightON = 0;//light status
int pushed = 0;//push status


void setup() {
  Serial.begin(9600);
  pinMode(touch, INPUT); 
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  val = digitalRead(touch);// read the push button value

  if(val == HIGH && lightON == LOW){

    pushed = 1-pushed;
    delay(100);
  }    

  lightON = val;

      if(pushed == HIGH){
        Serial.println("Light ON");
        digitalWrite(LED_BUILTIN, LOW); 
       
      }else{
        Serial.println("Light OFF");
        digitalWrite(LED_BUILTIN, HIGH);
   
      }     


  delay(100);
}

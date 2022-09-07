#include <LiquidCrystal.h>
LiquidCrystal lcd(11,10,5,4,3,2);
int sensor = A0;
int led = 6;
void setup() {
  Serial.begin(9600);   
  pinMode(A0,INPUT);
  lcd.begin(16,2);
  lcd.clear();
  pinMode(led,OUTPUT);
}

void loop() {
  int ldrAnalog=analogRead(A0);
    lcd.setCursor(0,0);
    lcd.print(ldrAnalog);
    lcd.print("ohm  ");
    delay(300);
   
      if(ldrAnalog<=850)
  {
   
  digitalWrite(led,0);
  lcd.setCursor(0,1);
  lcd.print("LED OFF");
  delay(150);
  }
  if(ldrAnalog>1000)
  {
  
    digitalWrite(led,1);
    lcd.setCursor(0,1);
    lcd.print("LED ON ");
    delay(150);
  }
    

}

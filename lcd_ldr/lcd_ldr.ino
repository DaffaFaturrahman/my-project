#include <LiquidCrystal.h>
LiquidCrystal lcd(12,10,5,4,3,2);
int sensor = A0;
void setup() {
  Serial.begin(9600);   
  pinMode(A0,INPUT);
  lcd.begin(16,2);
  lcd.clear();
}

void loop() {
  int ldrAnalog=analogRead(A0);
    lcd.setCursor(0,0);
    lcd.print(ldrAnalog);
    lcd.print("ohm");
    delay(300);

    lcd.setCursor(0,1);
    lcd.print("ShilmaMaulanalFajri");  
   
}

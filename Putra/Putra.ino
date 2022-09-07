#include <LiquidCrystal.h>
LiquidCrystal lcd (11,10,5,4,3,2);
int sensor = A0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode (A0,INPUT);
  lcd.begin (16,2);
  lcd.clear ();
}

void loop() {
  // put your main code here, to run repeatedly:
 int tegAnalog=analogRead(A0);
   lcd.setCursor (0,0);
   lcd.print (tegAnalog);
   lcd.print ("ohm");
   delay (300);
 {
  int putra ;
  lcd.setCursor (0,1);
  lcd.print ("NurHidayat");
  }
}

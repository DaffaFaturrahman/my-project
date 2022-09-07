#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
  int Zaki ;
  lcd.setCursor(0,0);
  lcd.print("MuhammadZakiMubarak");
    lcd.setCursor (0,1);
    lcd.print("SMKN 5 KOTA BEKASI");
    for (Zaki = 0 ;Zaki<16; Zaki++);
    lcd.scrollDisplayLeft();
    delay(180);
  
  }

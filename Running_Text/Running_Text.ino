#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
  int Daffa ;
  lcd.setCursor(0,0);
  lcd.print("Daffa Faturrahman");
   for (Daffa = 0 ;Daffa<16; Daffa++){
    lcd.scrollDisplayRight();
    delay(200);
}
int Daf;
    lcd.setCursor (0,1);
    lcd.print("SMKN 5 KOTA BEKASI");
    for (Daf = 0 ;Daf<16; Daf++){
     lcd.scrollDisplayLeft();
     delay(500);
    }
}

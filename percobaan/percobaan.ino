#define BLYNK_PRINT Serial
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);



#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
#include <Wire.h>
#include <Adafruit_MLX90614.h>
Adafruit_MLX90614 mlx = Adafruit_MLX90614();

char auth[]= "9RPCgqnRipe2tDjfJ-Ic37CjGaXjSvjr";
char ssid[]= "LOCKDOWN!!!";
char pass[]= "lagierorwifinya";

void notifyOnButtonPress()
{
  int airbersih = 14;
  int airkotor = 12;

  if(digitalRead(airbersih)==LOW){
    Blynk.notify("Air Bersih Habis");
  }
  if(digitalRead(airkotor)==LOW){
    Blynk.notify("Air Kotor Full");
  }
}
void setup() {
  lcd.init();
  lcd.backlight();
  mlx.begin();
  Blynk.begin(auth, ssid, pass);
  
}
void loop(){
Blynk.run();
  
  lcd.setCursor(0,0);
  lcd.print("Suhu Anda=");
  lcd.setCursor(11,0);
  lcd.print(mlx.readObjectTempC());
  lcd.setCursor(15,0);
  lcd.print("C");
  
  if(mlx.readObjectTempC()<37.7){
    lcd.setCursor(3,1);
    lcd.print("KAMU AMAN");
  }
  else {(mlx.readObjectTempC()>37.7);
    lcd.setCursor(0,1);
    lcd.print("SEBAIKNYA PULANG");
    }
  delay(2000);

 

  }

  

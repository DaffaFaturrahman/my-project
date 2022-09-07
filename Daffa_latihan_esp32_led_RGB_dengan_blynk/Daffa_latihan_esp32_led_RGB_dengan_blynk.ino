/*
  Nama     : Daffa Faturrahman
  Kelas    : A
  Pr1oject : 11 LED RGB dengan Blynk
  Date     : 10 Agustus 2020
 */
 #define BLYNK_PRINT Serial

 #include <WiFi.h>
 #include <WiFiClient.h>
 #include <BlynkSimpleEsp32.h>

 char auth[] = "y2j9sUkCW3Ikk_5Crma4HWHSGd5brMEq";
 char ssid[] = "LOCKDOWN!!!";
 char pass[] = "lagierorwifinya";

 #define led1 12   //red
 #define led2 13  //green
 #define led3 14  //blue
 int PWM_LED1;
 int PWM_LED2;
 int PWM_LED3;
 

void setup() {
Serial.begin(9600);
Blynk.begin(auth, ssid, pass);

  // tetapkan RGB led ke channel
 ledcAttachPin(led1,1); 
 ledcAttachPin(led2,2);
 ledcAttachPin(led3,3);

  // 12kHz PWM,12-bit resolution
 ledcSetup(1, 12000, 12);
 ledcSetup(2, 12000, 12);
 ledcSetup(3, 12000, 12);


}
BLYNK_WRITE(V0){
  PWM_LED1 = param.asInt();
  ledcWrite(1, PWM_LED1); //write red komponen ke channel 1
}

BLYNK_WRITE(V1){
  PWM_LED2 = param.asInt();
  ledcWrite(2, PWM_LED2); //write green komponen ke channel 2
}
BLYNK_WRITE(V2){
  PWM_LED3 = param.asInt();
  ledcWrite(3, PWM_LED3); //write blue komponen ke channel 3
}  

void loop() {
  Blynk.run();
}

 

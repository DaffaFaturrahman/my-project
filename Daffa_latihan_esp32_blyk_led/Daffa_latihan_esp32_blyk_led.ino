/*
  Nama     : Daffa Faturrahman
  Kelas    : A
  Pr1oject : 10 LED dengan Blynk
  Date     : 9 Agustus 2020
 */
#define BLYNK_PRINT Serial

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "ndwiQfQ71hXGBKs7gyLtWg_Qq-Lful2U";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "LOCKDOWN!!!";
char pass[] = "lagierorwifinya";

void setup()
{
  // Debug console
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);
}

void loop()
{
  Blynk.run();
  // You can inject your own code or combine it with other sketches.
  // Check other examples on how to communicate with Blynk. Remember
  // to avoid delay() function!
}

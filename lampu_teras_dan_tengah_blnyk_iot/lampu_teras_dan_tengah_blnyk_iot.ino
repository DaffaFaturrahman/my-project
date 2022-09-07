#define BLYNK_PRINT Serial

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

//token
char auth[] = "6s-Ln7hWshWStV2Eriirp_uOFgprnafH";

 // ssid dan password internet
char ssid[] = "LOCKDOWN!!!";
char pass[] = "lagierorwifinya";

void setup() {
Serial.begin(9600);
Blynk.begin(auth, ssid, pass);
}

void loop() {
Blynk.run();
}

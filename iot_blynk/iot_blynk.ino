#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

//token
char auth[] = "iVoqxk6xanL223oMkFVlP50boRi8_LH8";

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


#include <WiFi.h>
#include "DHT.h"

#include <Arduino.h>
#include <WiFiMulti.h>
#include <HTTPClient.h>
#define USE_SERIAL Serial

WiFiMulti wifiMulti;

#define DHTPIN 4
#define DHTTYPE DHT11 

const char* ssid     = "LOCKDOWN!!!";
const char* password = "lagierorwifinya";

const char* host = "192.168.1.12";

DHT dht(DHTPIN, DHTTYPE);
void setup()
{
    pinMode(2,OUTPUT);
    Serial.begin(115200);
    delay(10);
    dht.begin();
    // We start by connecting to a WiFi network

    Serial.println();
    Serial.println();
    Serial.print("Connecting to ");
    Serial.println(ssid);

    WiFi.begin(ssid, password);

    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }

    Serial.println("");
    Serial.println("WiFi connected");
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());
    wifiMulti.addAP("LOCKDOWN!!!", "lagierorwifinya");

}

int value = 0;

void loop()
{
    if((wifiMulti.run() == WL_CONNECTED)) {

        HTTPClient http;

        USE_SERIAL.print("[HTTP] begin...\n");
        // configure traged server and url
        //http.begin("https://www.howsmyssl.com/a/check", ca); //HTTPS
        http.begin("192.168.1.12", 8080, "/suhudankelembapan/bacanilai.php?id=1"); //HTTP

        USE_SERIAL.print("[HTTP] GET...\n");
        // start connection and send HTTP header
        int httpCode = http.GET();

        // httpCode will be negative on error
        if(httpCode > 0) {
            // HTTP header has been send and Server response header has been handled
            USE_SERIAL.printf("[HTTP] GET... code: %d\n", httpCode);

            // file found at server
            if(httpCode == HTTP_CODE_OK) {
                String payload = http.getString();
                USE_SERIAL.println(payload);
                int x = payload.toInt();

              if(x == 1){
                digitalWrite(2,HIGH);
                Serial.println("Led 1 ON");
              }
              else{
                digitalWrite(2,LOW);
                Serial.println("Led 1 OFF");  
              }
            }
            
        } else {
            USE_SERIAL.printf("[HTTP] GET... failed, error: %s\n", http.errorToString(httpCode).c_str());
        }

        http.end();
    }
    delay(5000);
    ++value;
    
     float h = dht.readHumidity();
     float t = dht.readTemperature();

     Serial.print(F("Humidity: "));
     Serial.print(h);
     Serial.print(F("%  Temperature: "));
     Serial.print(t);
     Serial.println(F("°C "));
    
    Serial.print("connecting to ");
    Serial.println(host);

    // Use WiFiClient class to create TCP connections
    WiFiClient client;
    const int httpPort = 8080;
    if (!client.connect(host, httpPort)) {
        Serial.println("connection failed");
        return;
    }

    // We now create a URI for the request
    String url = "http://localhost/suhudankelembapan/update-data.php?";
    url += "&temperature=";
    url += t;
    url += "&humidity=";
    url += h;

    Serial.print("Requesting URL: ");
    Serial.println(url);

    // This will send the request to the server
    client.print(String("GET ") + url + " HTTP/1.1\r\n" +
                 "Host: " + host + "\r\n" +
                 "Connection: close\r\n\r\n");
    unsigned long timeout = millis();
    while (client.available() == 0) {
        if (millis() - timeout > 5000) {
            Serial.println(">>> Client Timeout !");
            client.stop();
            return;
        }
    }

    // Read all the lines of the reply from server and print them to Serial
    while(client.available()) {
        String line = client.readStringUntil('\r');
        Serial.print(line);
    }

    Serial.println();
    Serial.println("closing connection");
}

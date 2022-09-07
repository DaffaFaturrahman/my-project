/*
  Nama    : Daffa Faturrahman
  Kelas   : A
  Project : 8 DHT11
  Date    : 8 Agustus 2020
 */

#include  "DHT.h"
#define DHTpin 4
#define DHTtype DHT11
DHT dht(DHTpin, DHTtype);

void setup() {
Serial.begin(115200);
Serial.println("DHT11 sensor!");
dht.begin();  
}

void loop() {
float h = dht.readHumidity();
float t = dht.readTemperature();

if (isnan(h) || isnan(t)){
  Serial.println("sensor tidak dapat membaca");
  return;
}
Serial.print("Humidity: ");
Serial.print(h);
Serial.print(" %\t ");
Serial.print("Temperature: ");
Serial.print(t);
Serial.println(" *C ");
delay(500);

}

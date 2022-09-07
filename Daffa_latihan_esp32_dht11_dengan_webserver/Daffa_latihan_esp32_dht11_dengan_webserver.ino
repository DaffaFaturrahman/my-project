/*
  Nama     : Daffa Faturrahman
  Kelas    : A
  Pr1oject : 9 DHT11 Web Server
  Date     : 9 Agustus 2020
 */
#include <WiFi.h>
#include <WebServer.h>

#include "DHT.h"
#define DHTPIN 17
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

const char* ssid = "LOCKDOWN!!!";
const char* password = "lagierorwifinya";

WebServer server(80);

void setup() {
  Serial.begin(115200);
  delay(100);
  dht.begin();

  Serial.println("Terhubung Ke ");
  Serial.println(ssid);

  WiFi.begin(ssid, password); //fungsi untuk join dengan jaringan wifi

  while (WiFi.status() !=  WL_CONNECTED) { // untuk terbuhung dengan internet
    delay(1000);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi Terhubung..!");
  Serial.print("IP: ");
  Serial.println(WiFi.localIP()); //memberi tau alamat local ip

  server.on("/",handle_OnConnect);
  server.onNotFound(handle_NotFound);
  server.begin();
  Serial.println("HTTP server dimulai");
}

void loop() {
  server.handleClient();
}

void handle_OnConnect() {
  float Suhu = dht.readTemperature();
  float Kelembaban = dht.readHumidity();
  server.send(200, "text/html",SendHTML(Suhu,Kelembaban));
}

void handle_NotFound() {
  server.send(404, "text/plain", "Tidak Ditemukan");
}

String SendHTML(float Temperaturestat,float Humiditystat){
   String ptr = "<!DOCTYPE html> <html>\n";
   ptr +="<head><meta name=\"viewport\" content=\"widht=device=widht, initial-scale=1.0, user-scalable=no\">\n";
   ptr +="<title>Laporan Suhu & Kelembaban</title>\n";
   ptr +="<style>html { font-family: Helvetica; display: inline-block; margin: 0px auto; text-align: center;}\n";  
   ptr +="body{margin-top: 50px;}h1{color: #444444;margin: 50px auto 30px;}\n";
   ptr +="p {font-size: 24px;color:#444444;margin-bottom; 10px;}\n";
   ptr +="</style>\n";

   ptr +="<script>\n";
   ptr +="setInterval(loadDoc,200);\n";
   ptr +="function loadDoc() {\n";
   ptr +="var xhttp = new XMLHttpRequest();\n";
   ptr +="xhttp.onreadystatechange = function() {\n";
   ptr +="if (ts.readyState == 4 && this.status == 200) {\n";
   ptr +="document.getElementById(\"webpage\").innerHTML =this.responseText}\n";
   ptr +="};\n";
   ptr +="xhttp.open(\"GET\", \"/\", true);\n";
   ptr +="xhttp.send();\n";
   ptr +="}\n";
   ptr +="</script>\n";

   ptr +="</head>\n";
   ptr +="<body>\n";
   ptr +="<div id=\"webpage\">\n";
   ptr +="<h1>Laporan Suhu dan Kelembabam</h1>\n";
   ptr +="<h2>Daffa Faturrahman</h2>\n"; 

   ptr +="<p>Suhu: ";
   ptr +=(int)Temperaturestat;
   ptr +=" *C</p>";
   ptr +="<p>Kelembaban: ";
   ptr +=(int)Humiditystat;
   ptr +="%</p>";

   

   ptr +="</div>\n";
   ptr +="</body>\n";
   ptr +="</html>\n";
   return ptr;
}

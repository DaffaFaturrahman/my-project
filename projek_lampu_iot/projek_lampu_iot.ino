#include <WiFi.h>
#include <WiFiClientSecure.h>
#include <UniversalTelegramBot.h>

char ssid[] = "LOCKDOWN!!!";     
char password[] = "lagierorwifinya"; 

#define BOTtoken "1642841532:AAEEzHTGjCV_L_Qa3LCJ50Hh-M4xsQhM3S0"  

WiFiClientSecure client;
UniversalTelegramBot bot(BOTtoken, client);

int Bot_mtbs = 1000; 
long Bot_lasttime;  
bool Start = false;

int relay1 = 5;
int relay2 = 18;
int relay3 = 19;
int kondisilampu1 = 0;
int kondisilampu2 = 0;
int kondisilampu3 = 0;


void setup() {
  Serial.begin(115200);

 
  Serial.print("Connecting Wifi: ");
  Serial.println(ssid);

 
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());

  pinMode(relay1, OUTPUT); 
  pinMode(relay2, OUTPUT); 
  pinMode(relay3, OUTPUT); 
  digitalWrite(relay1, 0);
  digitalWrite(relay2, 0);
  digitalWrite(relay3, 0); 
}
void handleNewMessages(int numNewMessages) {
  Serial.println("handleNewMessages");
  Serial.println(String(numNewMessages));

  for (int i=0; i<numNewMessages; i++) {
    String chat_id = String(bot.messages[i].chat_id);
    String text = bot.messages[i].text;

    String from_name = bot.messages[i].from_name;
    if (from_name == "") from_name = "Guest";

    if (text == "/nyalainlampu1") {
      kondisilampu1 = 1;
      digitalWrite(relay1, 0);   
      bot.sendMessage(chat_id, "Lampu1 nyala", "");
    }

    if (text == "/matiinlampu1") {
      kondisilampu1 = 0;
      digitalWrite(relay1, 1);    
      bot.sendMessage(chat_id, "Lampu1 mati", "");
    }

    if (text == "/kondisilampu1") {
      if(kondisilampu1){
        bot.sendMessage(chat_id, "Lampu1 menyala", "");
      } else {
        bot.sendMessage(chat_id, "Lampu1 mati", "");
      }
    }
    
    if (text == "/nyalainlampu2") {
      kondisilampu2 = 1;
      digitalWrite(relay2, 1);
      bot.sendMessage(chat_id, "Lampu2 nyala", "");
    }

    if (text == "/matiinlampu2") {
      kondisilampu2 = 0;
      digitalWrite(relay2, 0);    
      bot.sendMessage(chat_id, "Lampu2 mati", "");
    }

    if (text == "/kondisilampu2") {
      if(kondisilampu2){
        bot.sendMessage(chat_id, "Lampu2 menyala", "");
      } else {
        bot.sendMessage(chat_id, "Lampu2 mati", "");
      }
    }
    if (text == "/nyalainlampu3") {
      kondisilampu3 = 1;
      digitalWrite(relay3, 1);   
      bot.sendMessage(chat_id, "Lampu3 nyala", "");
    }

    if (text == "/matiinlampu3") {
      kondisilampu3 = 0;
      digitalWrite(relay3, 0);    
      bot.sendMessage(chat_id, "Lampu3 mati", "");
    }

    if (text == "/kondisilampu3") {
      if(kondisilampu3){
        bot.sendMessage(chat_id, "Lampu3 menyala", "");
      } else {
        bot.sendMessage(chat_id, "Lampu3 mati", "");
      }
    }
    if (text == "/nyalainsemualampu") {
      kondisilampu1 = 1;
      kondisilampu2 = 1;
      kondisilampu3 = 1;
      digitalWrite(relay1, 0);
      digitalWrite(relay2, 1);
      digitalWrite(relay3, 1);
      bot.sendMessage(chat_id, "Semua Lampu Menyala", "");
    }

    if (text == "/matiinsemualampu") {
      kondisilampu1 = 0;
      kondisilampu2 = 0;
      kondisilampu3 = 0;
      digitalWrite(relay1, 1);
      digitalWrite(relay2, 0);
      digitalWrite(relay3, 0);
      bot.sendMessage(chat_id, "Semua Lampu Mati", "");  
    
    }

    if (text == "/kondisiseluruhlampu") {
      if(kondisilampu1){
        bot.sendMessage(chat_id, "Lampu1 menyala", "");
      } else {
        bot.sendMessage(chat_id, "Lampu1 mati", "");
      }
      if(kondisilampu2){
        bot.sendMessage(chat_id,"Lampu2 menyala", "");
      }else{
        bot.sendMessage(chat_id,"Lampu2 mati", "");
      }
      if(kondisilampu3){
        bot.sendMessage(chat_id,"Lampu3 menyala", "");
      }else{
        bot.sendMessage(chat_id,"Lampu3 mati", "");
    }
    }

    if (text == "/start") {
      String welcome = "Selamat datang di Robotik SMKN 5 Bekasi, " + from_name + ".\n";
      welcome += "Ini bot untuk menyalakan dan mematikan lampu.\n\n";
      welcome += "/nyalainlampu1 : untuk menghidupkan lampu1 \n";
      welcome += "/matiinlampu1 : untuk mematikan lampu1\n";
      welcome += "/kondisilampu1 : untuk mengecek keadaan lampu1\n";
      
      welcome += "/nyalainlampu2 : untuk manyalakan lampu2\n";
      welcome += "/matiinlampu2 : untuk mematikan lampu2\n";
      welcome += "/kondisilampu2 : untuk mengecek keadaan lampu2\n";
      
      welcome += "/nyalainlampu3 : untuk manyalakan lampu3\n";
      welcome += "/matiinlampu3 : untuk mematikan lampu3\n";
      welcome += "/kondisilampu3 : untuk mengecek keadaan lampu3\n";

      welcome += "/nyalainsemualampu : untuk manyalakan lampu3\n";
      welcome += "/matiinsemualampu : untuk mematikan lampu3\n";
      welcome += "/kondisiseluruhlampu : untuk mengecek keadaan lampu3\n";
      
      bot.sendMessage(chat_id, welcome, "Markdown");
    }
  }
}


void loop() {
  if (millis() > Bot_lasttime + Bot_mtbs)  {
    int numNewMessages = bot.getUpdates(bot.last_message_received + 1);

    while(numNewMessages) {
      Serial.println("got response");
      handleNewMessages(numNewMessages);
      numNewMessages = bot.getUpdates(bot.last_message_received + 1);
    }

    Bot_lasttime = millis();
  }
}

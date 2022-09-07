/*
  Nama    : Daffa Faturrahman
  Kelas   : A
  Project : 5 Potensiometer dengan Led
  Date    : 1 Agustus 2020
 */
#define ANALOG_PIN_0 34
int analog_value = 0;
#define led 5
int freq = 5000;
int ledChannel = 0;
int resolution = 8;
int dutyCycle = 0;

void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println("ESP 32 Analog IN/OUT Test");

  ledcSetup(ledChannel, freq, resolution);
  ledcAttachPin(led, ledChannel);
  ledcWrite(ledChannel, dutyCycle); 
}

void loop() {
  analog_value = analogRead(ANALOG_PIN_0);
  Serial.println(analog_value);
  dutyCycle = map(analog_value, 0, 4095, 0, 255);
  ledcWrite(ledChannel, dutyCycle);
  delay(500);
}

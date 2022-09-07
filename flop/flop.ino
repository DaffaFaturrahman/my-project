int toto = 13 ;
void setup() {
  // put your setup code here, to run once:
  // konfigurasi
  pinMode (toto, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//program utama

digitalWrite (toto, HIGH);
delay (1000);
digitalWrite (toto,LOW);
delay (1000);
digitalWrite (toto, HIGH);
delay (1000);
digitalWrite (toto, LOW);
delay (1000);
}

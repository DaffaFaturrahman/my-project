int Toko = 2 ;
int Tolo = 3 ;
int Tika = 4 ;
int Tiko = 5 ;
int Tutu = 6 ;
int Tuman = 7 ;
int Toti = 8 ;
int Tito = 9 ;
int Toto = 10 ;
int Tila = 11 ;
int Tomo = 12 ;
int Titi = 13 ;
void setup() {
  // put your setup code here, to run once:
  // konfigurasi
  pinMode (Toko,OUTPUT);
  pinMode (Tolo,OUTPUT);
  pinMode (Tika,OUTPUT);
  pinMode (Tiko,OUTPUT);
  pinMode (Tutu,OUTPUT);
  pinMode (Tuman,OUTPUT);
  pinMode (Toti,OUTPUT);
  pinMode (Tito,OUTPUT);
  pinMode (Toto,OUTPUT);
  pinMode (Tila,OUTPUT);
  pinMode (Tomo,OUTPUT);
  pinMode (Titi,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // program utama
//  digitalWrite (Toti, 0);
//  digitalWrite (Tito, 0);
// digitalWrite (Toto, 0);
//  digitaalWrite (Tila, 0);
  digitalWrite (Toko, HIGH); // turn
  digitalWrite (Tolo, LOW); // turn
  digitalWrite (Tika, LOW); // turn
  digitalWrite (Tiko, HIGH); // turn
  digitalWrite (Tutu, LOW); // turn
  digitalWrite (Tuman, LOW); // turn
  digitalWrite (Toti, HIGH); // turn
  digitalWrite (Tila, HIGH); // turn
  digitalWrite (Tito, LOW); // turn 
  digitalWrite (Toto, LOW); // turn
  digitalWrite (Tomo, LOW); // turn
  digitalWrite (Titi, LOW); // turn
//  the led on (HIGH IS THE VOLTAGE LEVEL 1);....
    delay (5000) ; // wait for a second
    digitalWrite (Toti,HIGH); // turn
    digitalWrite (Toko,HIGH); // turn
    digitalWrite (Tiko,HIGH); // turn
  // the led of by making the voltage low
  delay (5000); //wait for a second
  digitalWrite (Toti,LOW); // turn
    delay (10) ; // wait for a second
    digitalWrite (Tila, HIGH); // turn
  // the led of by making the voltage low
  delay (10); //wait for a second
  digitalWrite (Tila, LOW); // turn
  //  the led on (HIGH IS THE VOLTAGE LEVEL 1);....
    delay (100) ; // wait for a second
    digitalWrite (Tomo, HIGH); // turn
     digitalWrite (Tito, HIGH); // turn
  // the led of by making the voltage low
  delay (3000); //wait for a second
  digitalWrite (Tomo, LOW); // turn 
   digitalWrite (Tito, LOW); // turn
  //  the led on (HIGH IS THE VOLTAGE LEVEL 1);....
    delay (100) ; // wait for a second
    digitalWrite (Toto, HIGH); // turn
     digitalWrite (Titi, HIGH); // turn
  // the led of by making the voltage low
  delay (5000); //wait for a second
  digitalWrite (Toto, LOW); // turn
   digitalWrite (Titi, LOW); // turn
  
      
    
  
  

}

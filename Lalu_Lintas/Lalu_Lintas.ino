int Merah1 = 2 ;
int Kuning2 = 3 ;
int Hijau3 = 4 ;
int Merah4 = 5 ;
int Kuning5 = 6 ;
int Hijau6 = 7 ;
int Merah7 = 8 ;
int Kuning8 = 9 ;
int Hijau9 = 10 ;
int Merah10 = 11 ;
int Kuning11 = 12 ;
int Hijau12 = 13 ;
void setup() {
  // put your setup code here, to run once:
  // konfigurasi
  pinMode (Merah1, OUTPUT);
  pinMode (Merah4, OUTPUT);
  pinMode (Merah7, OUTPUT);
  pinMode (Merah10, OUTPUT);
  pinMode (Kuning2, OUTPUT);
  pinMode (Kuning5, OUTPUT);
  pinMode (Kuning8, OUTPUT); 
  pinMode (Kuning11, OUTPUT);
  pinMode (Hijau3, OUTPUT); 
  pinMode (Hijau6, OUTPUT);
  pinMode (Hijau9, OUTPUT);
  pinMode (Hijau12, OUTPUT);
  
  

}

void loop() {
  // put your main code here, to run repeatedly:
  // program utama
  //  the led on (HIGH IS THE VOLTAGE LEVEL 1);....
  digitalWrite (Hijau3,HIGH );//turn
  digitalWrite (Merah1, LOW); //turn
  digitalWrite (Merah4, HIGH); // turn
  digitalWrite (Merah7, HIGH); // turn
  digitalWrite (Merah10, HIGH);// turn
  delay (5000);
  digitalWrite (Kuning2, HIGH); //turn
  digitalWrite (Hijau3, LOW); // turn
  delay (1000);
  digitalWrite (Kuning2,LOW);
  digitalWrite (Merah1, HIGH);
 digitalWrite (Kuning5, HIGH );//turn
 digitalWrite (Merah4, LOW );//turn
 delay (1000);
 digitalWrite (Kuning5,LOW );//turn
  digitalWrite (Hijau6,HIGH );//turn
  digitalWrite (Merah4, LOW);//turn
  digitalWrite (Merah7,HIGH );//turn
  digitalWrite (Merah10,HIGH );//turn
  digitalWrite (Merah1,HIGH );//turn
  digitalWrite (Kuning2, LOW );//turn
  delay (5000);
  digitalWrite (Kuning5, HIGH );//turn
  digitalWrite (Hijau6,LOW );//turn
  delay (1000);
  digitalWrite (Kuning5,LOW);
  digitalWrite (Merah4,HIGH);
  digitalWrite (Kuning8, HIGH );//turn
  digitalWrite (Merah7, LOW );//turn
  delay (1000);
  digitalWrite (Kuning8,LOW); // turn
  digitalWrite (Hijau9,HIGH );//turn
  digitalWrite (Merah1,HIGH );//turn
  digitalWrite (Merah4,HIGH );//turn
  digitalWrite (Merah7,LOW );//turn
  digitalWrite (Merah10,HIGH );//turn
  digitalWrite (Kuning5,LOW );//turn
  delay (5000);
  digitalWrite (Kuning8,HIGH );//turn
  digitalWrite (Hijau9, LOW);//turn
  delay (1000);
  digitalWrite (Kuning8, LOW); //turn
  digitalWrite (Merah7,HIGH);// turn
  digitalWrite (Kuning11, HIGH);//turn
  digitalWrite (Merah10,LOW); // turn
  delay (1000);
  digitalWrite (Kuning11, LOW); // turn
  digitalWrite (Merah7,LOW); // turn
  digitalWrite (Hijau12,HIGH );//turn
  digitalWrite (Merah10,LOW);// turn
  digitalWrite (Merah7,HIGH );//turn
  digitalWrite (Merah1,HIGH );//turn
  digitalWrite (Merah4,HIGH );//turn
  digitalWrite (Kuning8, LOW);//turn
  delay (5000);
  digitalWrite (Kuning11,HIGH );//turn
  digitalWrite (Hijau12,LOW );//turn
  delay (1000);
  digitalWrite (Kuning2, HIGH); // turn
  digitalWrite (Merah1, LOW); // turn
  digitalWrite (Kuning11, LOW);// turn
  digitalWrite (Merah10,HIGH); //turn
  delay (1000);
  digitalWrite (Kuning2, LOW); // turn
  digitalWrite (Kuning11,LOW); //turn
  digitalWrite (Hijau3,HIGH );//turn
  digitalWrite (Merah1,LOW );//turn
  digitalWrite (Merah4,HIGH );//turn
  digitalWrite (Merah7,HIGH );//turn
  digitalWrite (Merah10,HIGH );//turn
  digitalWrite (Kuning11, LOW );//turn
  delay (5000);

  
 
}

int merah1 = 1 ;
int kuning1 = 2 ;
int hijau1 = 3 ;
int merah2 = 4 ;
int kuning2 = 5 ;
int hijau2 = 6 ;
int merah3= 7 ;
int kuning3 = 8 ;
int hijau3 = 9 ;
int merah4 = 10 ;
int kuning4 = 11 ;
int hijau4 = 12 ;
void setup() {
  // put your setup code here, to run once:
    // konfigurrrrrasi
    pinMode (1, OUTPUT) ;
    pinMode (2, OUTPUT) ;
    pinMode (3, OUTPUT) ;
    pinMode (4, OUTPUT) ;
    pinMode (5, OUTPUT) ;
    pinMode (6, OUTPUT);
    pinMode (7, OUTPUT) ;
    pinMode (8, OUTPUT) ;
    pinMode (9, OUTPUT) ;
    pinMode (10, OUTPUT) ;
    pinMode (11, OUTPUT) ;
    pinMode (12, OUTPUT) ;

     
}

void loop() {
  // put your main code here, to run repeatedly:
  // PROGRAM UTAMA 
  digitalWrite (hijau1, HIGH);
  digitalWrite (kuning1,LOW);
  digitalWrite (merah1,LOW) ;
  delay (5000);
  digitalWrite (hijau1, LOW);
  digitalWrite (kuning1, HIGH);
  digitalWrite (merah1,LOW) ;
  delay(3000);
  digitalWrite (hijau1, LOW);
  digitalWrite (kuning1, LOW);
  digitalWrite (merah1,HIGH) ;
  delay(1000);
  digitalWrite (hijau2, HIGH);
  digitalWrite (kuning2, LOW);
  digitalWrite (merah2,LOW) ;
  delay(5000);
  digitalWrite (hijau2, LOW);
  digitalWrite (kuning2, HIGH);
  digitalWrite (merah2,LOW) ;
  delay(3000);
  digitalWrite (hijau2, LOW);
  digitalWrite (kuning2, LOW);
  digitalWrite (merah2,HIGH) ;
  delay(1000);1
  digitalWrite (hijau3, HIGH);
  digitalWrite (kuning3, LOW);
  digitalWrite (merah3,LOW) ;
  delay(5000);
  digitalWrite (hijau3, LOW);
  digitalWrite (kuning3, HIGH);
  digitalWrite (merah3,LOW) ;
  delay(3000);
  digitalWrite (hijau3, LOW);
  digitalWrite (kuning2, LOW);
  digitalWrite (merah2,HIGH) ;
  delay(1000);
  
  
}

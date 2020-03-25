# branchement et code tinkercad 


![schema tinkercad capteur ultraSon et LCD]( https://github.com/institut-galilee/2020-potential-eureka/blob/master/src/img/TrafficLight3.png)

```C
// librairie à utiliser pour lcd
#include <LiquidCrystal.h>

// initialise la libraire
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int pingPin = 7;
const int ledPin = 9;
long cmAvant = 1;
long duration;
long cm = 1;
int tempsAvant=1;
int tempsApres=1;
long vitesse;

void setup() {
  
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("vitesse en km/h");
}

void loop() {

 

  pinMode(pingPin, OUTPUT);
  digitalWrite(pingPin, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(pingPin, LOW);


  pinMode(pingPin, INPUT);
  duration = pulseIn(pingPin, HIGH);
	
  tempsAvant = tempsApres;
  tempsApres = millis();
  
  // conversion du temps en distance
  cmAvant = cm;
  cm = microsecondsToCentimeters(duration);
	
  int duree = (tempsApres-tempsAvant);
  vitesse = (0.01*(cmAvant - cm))/(duree*0.001);
  vitesse = vitesse * 3,6; //en km/h 
  
  // affiche distance
  if(vitesse>5){
  Serial.print("Distance: ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.print("    Vitesse: ");
  Serial.print(vitesse);
  Serial.print("km/h");
  Serial.print("    DistanceAvant: ");
  Serial.print(cmAvant);
  Serial.print("cm");
  Serial.print("    Duree: ");
  Serial.print(duree);
  Serial.print("ms");
  Serial.println();
    
  // curseur de column 0, line 1

  lcd.setCursor(0, 1);

  lcd.print(vitesse);
  }

  // allume la led si vitesse supérieur à 30km/h
  if(vitesse > 30) {
    digitalWrite(ledPin, HIGH);
  }
  else {
    digitalWrite(ledPin, LOW);
  }
  
  

 
  
  delay(100);
}


long microsecondsToCentimeters(long microseconds) {
  // vitesse son est 340 m/s ou 29 microsend par centimètre .
  // distance divisé par 2 car le ping doit arrivé a l'objet puis revenir (aller-retour).
  return microseconds / 29 / 2;
}
 

```

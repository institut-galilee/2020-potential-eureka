# branchement et code tinkercad 


![schema tinkercad led]( https://github.com/institut-galilee/2020-potential-eureka/blob/master/src/img/TrafficLight.png)



```C
enum LightStates {
  Feux1Rouge, 
  Feux1Vert, 
  Feux1Orange,
  Feux2Rouge, 
  Feux2Vert, 
  Feux2Orange
};
 



// définition des broches
const int led_rouge_feux_1 = 4;
const int led_jaune_feux_1 = 5;
const int led_verte_feux_1 = 6;
const int led_rouge_feux_2 = 7;
const int led_jaune_feux_2 = 8;
const int led_verte_feux_2 = 9;
const int btn = 2;
const int sensor = A0; 
const int ledSensor = 13; 
const int sensorLDR = A1; // select the input pin for LDR

const int led_rouge_pieton_1 = 10;
const int led_verte_pieton_1 = 11;

long interval = 5000;
long interval2 = 1000;
unsigned long previousMillis = 0;
unsigned long currentMillis = 0;
enum LightStates Feux1;
enum LightStates Feux2;
int etatPieton = 0;
int modeNuit = 0;
int sensorLDRValue = 0;
int etatLDR = 1; //actif


void setup()
{
  
   Serial.begin(9600);        // initialise le port serie
  
    //init bouton
   pinMode(btn, INPUT_PULLUP); //INPUT_PULLUP
   digitalWrite(btn, HIGH);
   attachInterrupt(0, pieton, FALLING);
  
  
    // initialisation en sortie de toutes les broches
    pinMode(led_rouge_feux_1, OUTPUT);
    pinMode(led_jaune_feux_1, OUTPUT);
    pinMode(led_verte_feux_1, OUTPUT);
    pinMode(led_rouge_feux_2, OUTPUT);
    pinMode(led_jaune_feux_2, OUTPUT);
    pinMode(led_verte_feux_2, OUTPUT);
  
    pinMode(led_rouge_pieton_1, OUTPUT);
    pinMode(led_verte_pieton_1, OUTPUT);
  
    pinMode(sensor, INPUT);
  	pinMode(ledSensor, OUTPUT);

    // on initialise toutes les LED éteintes au début du programme
    // (sauf les deux feux rouges)
    digitalWrite(led_rouge_feux_1, HIGH);
    digitalWrite(led_jaune_feux_1, HIGH);
    digitalWrite(led_verte_feux_1, LOW);
    digitalWrite(led_rouge_feux_2, LOW);
    digitalWrite(led_jaune_feux_2, HIGH);
    digitalWrite(led_verte_feux_2, HIGH);
  
 	digitalWrite(ledSensor, HIGH);
  
  	Feux1 = Feux1Vert; 
  	Feux2 = Feux2Rouge; 
  
    digitalWrite(led_rouge_pieton_1, LOW);
  	digitalWrite(led_verte_pieton_1, HIGH);
}

void loop()
{
  	currentMillis = millis();
  	
  if(modeNuit == 0){
  	 if(Feux1 == Feux1Vert){
       if(Feux2 == Feux2Rouge){
         if(currentMillis - previousMillis  > interval ){
           // feux1 devient rouge et feux2 devient vert
           digitalWrite(led_jaune_feux_1, LOW);
           digitalWrite(led_verte_feux_1, HIGH);
           previousMillis = millis();
           Feux1 = Feux1Orange;
           etatPieton = 1;
    
         }
       } 
     }
  	else if(Feux2 == Feux2Vert){
      if(Feux1 == Feux1Rouge){ 
        if(currentMillis - previousMillis  > interval ){
           // feux1 devient rouge et feux2 devient vert
           digitalWrite(led_jaune_feux_2, LOW);
           digitalWrite(led_verte_feux_2, HIGH);
           previousMillis = millis();
           Feux2 = Feux2Orange;
           //Feux2 = Feux2Vert ;
           digitalWrite(led_rouge_pieton_1, LOW);
  		   digitalWrite(led_verte_pieton_1, HIGH);
         }
       }
     }
   else if(Feux1 == Feux1Orange){
     if(currentMillis - previousMillis  > interval2 ){
       // feux1 devient rouge et feux2 devient vert
   		 digitalWrite(led_jaune_feux_1, HIGH);
   		 digitalWrite(led_rouge_feux_1, LOW);
         digitalWrite(led_rouge_feux_2, HIGH);
   		 digitalWrite(led_verte_feux_2, LOW);
         previousMillis = millis();
         Feux1 = Feux1Rouge;
       	 Feux2 = Feux2Vert;
         digitalWrite(led_rouge_pieton_1, HIGH);
  		 digitalWrite(led_verte_pieton_1, LOW);
      	
      }
   } 
   else if(Feux2 == Feux2Orange){
     if(currentMillis - previousMillis  > interval2 ){
       // feux1 devient rouge et feux2 devient vert
   		 digitalWrite(led_jaune_feux_2, HIGH);
   		 digitalWrite(led_rouge_feux_2, LOW);
         digitalWrite(led_rouge_feux_1, HIGH);
   		 digitalWrite(led_verte_feux_1, LOW);
         previousMillis = millis();
         Feux2 = Feux2Rouge;
       	 Feux1 = Feux1Vert;
      }
   }
	
  int etatSensor = digitalRead(sensor);
  //Serial.println(digitalRead(sensor)); 
  if( etatSensor == 1 && Feux1 == Feux1Rouge ){ //si il y a du mouvement
  	digitalWrite(ledSensor, LOW);
  }
  else{
  	digitalWrite(ledSensor, HIGH);

  }
  }   
  
  
  // mode nuit envoyé un 'n' comme commande
  if (Serial.available() > 0) { 
    String mot = Serial.readString(); //lire un mot
    //char carac = Serial.read();
    //char carac = 'a';
    //Serial.println(carac);
    
    Serial.println(mot);
    
    if(mot == "nuit"){ //nuit
      	
      	modeNuit = 1;
      	Serial.println("Mode nuit active");
    }
    
    if(mot == "jour"){ //jour
      	
      	modeNuit = 0;
      	Serial.println("Mode nuit desactive");
    }
    
    if(mot == "LDRactif"){ //LDR actif
      	
      	etatLDR = 1;
      	Serial.println("LDR actif");
    }  
      
  if(mot == "LDRinactif"){ //LDR eteint
      	
      	etatLDR = 0;
      	Serial.println("LDR inactif");
    }
   }
     
  if(modeNuit == 1){
    	digitalWrite(led_rouge_pieton_1, HIGH);
  		digitalWrite(led_verte_pieton_1, HIGH);
      
      	digitalWrite(led_rouge_feux_1, HIGH);
   		digitalWrite(led_jaune_feux_1, LOW);
   		digitalWrite(led_verte_feux_1, HIGH);
   		digitalWrite(led_rouge_feux_2, HIGH);
   		digitalWrite(led_jaune_feux_2, LOW);
   		digitalWrite(led_verte_feux_2, HIGH);
      
      	Feux2 = Feux2Orange;
       	Feux1 = Feux1Orange;
      
      	delay(500);
        digitalWrite(led_jaune_feux_1, HIGH);
        digitalWrite(led_jaune_feux_2, HIGH);
    	delay(500);
    	

    
  }
  
  sensorLDRValue = analogRead(sensorLDR); // read the value from the sensor
  //Serial.println(sensorLDRValue); //prints the values coming from the sensor on the screen
  
  if(etatLDR == 1 && sensorLDRValue <= 125){ //active le mode nuit quand il n'a pas asser de lumiere
   	modeNuit = 1; 
  }
  else if (etatLDR == 1 && sensorLDRValue > 125){
    modeNuit = 0;
  }
    
}
  
  
 



void pieton(){
  if(Feux2 == Feux2Rouge){
    if(etatPieton==0){
 	 	previousMillis = previousMillis - 2500;
      	etatPieton = 1;
    }
  }
}






```

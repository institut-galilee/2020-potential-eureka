// telecharger la libraire IRremote.h pour la telecommande https://github.com/z3t0/Arduino-IRremote.git
//boarddefs.h modifier ligne ou il y arduino mega commenter seconde 
//ligne et décommenter 1er ligne pour les timer


#include <IRremote.h> //include the library
#define Button_1 0xFFA25D
#define Button_2 0xFF629D
#define Button_3 0xFFE21D
int receiver = 24; //initialize pin 24 as recevier pin.
IRrecv irrecv(receiver); //create a new instance of receiver
decode_results results;
int buzzer = 22;
//uint32_t Previous; 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  irrecv.enableIRIn(); //start the receiver
  pinMode(buzzer,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (irrecv.decode(&results)) { //if we have received an IR signal
    switch(results.value) {
           case Button_1 : tone(buzzer, 100); break;
           case Button_2 : noTone(buzzer); break;
           case Button_3 : tone(buzzer, 800); break;
      } 
      Serial.println (results.value, HEX); //display HEX results 
      irrecv.resume(); //next value
  }
}

// telecharger la libraire IRremote.h pour la telecommande https://github.com/z3t0/Arduino-IRremote.git


#include <IRremote.h>
int receiver = 24
IRrecv irrec(receiver);
decode_results results;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
 irrecv.enableIRIn(); //start the receive

}

void loop() {
  // put your main code here, to run repeatedly:
  if (irrecv.decode(&results)) { //if we have received an IR signal
    Serial.println (results.value, HEX); //display HEX results 
     irrecv.resume(); //next value
  }

}

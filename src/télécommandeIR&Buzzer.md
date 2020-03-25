# branchement et code tinkercad 


![schema tinkercad remote IR]( https://github.com/institut-galilee/2020-potential-eureka/blob/master/src/img/TrafficLight.png)


```C

#include <IRremote.h> //https://forum.arduino.cc/index.php?topic=133553.0

const int buzzer = 13;
int RECV_PIN = 11;

//IR Library stuff
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup() {
  
  //Enable serial usage and IR signal in
  Serial.begin(9600);
  irrecv.enableIRIn(); 
  
  
  pinMode(buzzer, OUTPUT); 
 
  digitalWrite(buzzer,LOW);
}

    

void loop() {

    
  	if (irrecv.decode(&results)) {//irrecv.decode(&results) returns true if anything is recieved, and stores info in varible results
    unsigned int value = results.value; //Get the value of results as an unsigned int, so we can use switch case
    Serial.println(value);
    switch (value) {
      case 2295: //1
      	digitalWrite(buzzer,LOW);
      	break;
      
      case 34935: //2
      	digitalWrite(buzzer,HIGH);
      	break;
      
    /* case 18615: //3

      	break;*/
      
     /* case 10455: //4

     	break;*/
    }
    
    
    irrecv.resume(); // Receive the next value
}
  
}


```

# Contre-rendu de la séance du 18 mars 2020

Comme il nous manque du matériel notamment les capteurs qui sont essentiels à notre projet, Emiliano les a commandé ce jour là.

Comme le kit est chez Faïza, elle a essayé de voir si la télecommande fournie dans notre kit n'avez pas de problème. Pour cela elle a utilisé le sketch qui a été fait Emiliano

- schematic of the remote ir and led sketch
![shematic remote ir and led](https://github.com/institut-galilee/2020-potential-eureka/blob/master/projet/séance18-03/schematic_remote_ir_et_led.png)

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

Description:
Lorsqu'on appuye sur le bouton 2 de la télécommande, la led s'allume. Le bouton 1 sert à l'éteindre.

- remote ir and led sketch
![remote ir and led](https://github.com/institut-galilee/2020-potential-eureka/blob/master/projet/séance18-03/remote_ir_and_led.png)


On peut voir que ça a été reproduit mais on s'est rendu compte que la télécommande ne fonctionnait pas. On a donc dû en commander une autre. C'est pour cela qu'on a décider de commander un nouveau kit.

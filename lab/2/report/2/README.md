# Rapport Practice 2

- BUZZER
![sketch buzzer](https://github.com/institut-galilee/2020-potential-eureka/blob/master/lab/2/report/2/buzzer.png)

![photo buzzer](https://github.com/institut-galilee/2020-potential-eureka/blob/master/lab/2/report/2/PhotoBuzzer.jpg)

```C
const byte buzzer = 13;

void setup() {
  // initialize serial:
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT); 
}

    

void loop() {
  // if there's any serial available, read it:
  while (Serial.available() > 0) {
	
    // look for the next valid integer in the incoming serial stream:
    // look for the next valid byte in the incoming serial stream:
    
   	String b = Serial.readString()  ;
    Serial.println(b);
    Serial.println(b.toInt());
    tone(buzzer, b.toInt());


    
  }
}
```


- LDR

![sketch LDR](https://github.com/institut-galilee/2020-potential-eureka/blob/master/lab/2/report/2/photosensor.png)

![photo LDR](https://github.com/institut-galilee/2020-potential-eureka/blob/master/lab/2/report/2/PhotoLDR.jpg)

```C
int sensorPin = A0; // select the input pin for LDR

int sensorValue = 0; // variable to store the value coming from the sensor
void setup() {
Serial.begin(9600); //sets serial port for communication
}
void loop() {
sensorValue = analogRead(sensorPin); // read the value from the sensor
Serial.println(sensorValue); //prints the values coming from the sensor on the screen

delay(100);

}


```


# Rapport Practice 2

- BUZZER
![sketch buzzer](https://github.com/institut-galilee/2020-potential-eureka/blob/master/lab/2/report/2/buzzer.png)

![photo buzzer](https://github.com/institut-galilee/2020-potential-eureka/blob/master/lab/2/report/2/PhotoBuzzer.jpg)*

```
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

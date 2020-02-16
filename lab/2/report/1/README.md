# RAPPORT TP2_1

- random sketch
![sketch fire](https://github.com/institut-galilee/2020-potential-eureka/blob/master/lab/2/report/1/sketch.png)

- schematic of the random sketch
![schematic fire](https://github.com/institut-galilee/2020-potential-eureka/blob/master/lab/2/report/1/schematic.png)

```C
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(5000); // Wait for 5000 millisecond(s)
  digitalWrite(13, LOW);
  delay(100); // Wait for 100 millisecond(s)
  
  digitalWrite(12, HIGH);
  delay(1500); // Wait for 1500 millisecond(s)
  digitalWrite(12, LOW);
  delay(100); // Wait for 100 millisecond(s)
  
  digitalWrite(11, HIGH);
  delay(5000); // Wait for 5000 millisecond(s)
  digitalWrite(11, LOW);
  delay(100); // Wait for 100 millisecond(s)
}
```

- description



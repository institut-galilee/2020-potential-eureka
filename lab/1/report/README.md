# RAPPORT TP1
- Simple resistance

![sketch resistance simple](https://github.com/institut-galilee/2020-potential-eureka/blob/master/lab/1/report/simpleResistance.png)


- Resistance variable

![sketch resistance variable](https://github.com/institut-galilee/2020-potential-eureka/blob/master/lab/1/report/resistanceVariable.png)

```C
// Controler resistance variable

int pwm = 0;

void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{

  pwm = analogRead(A0); 
  Serial.println(pwm); 
  analogWrite(13,pwm);
  

}

```

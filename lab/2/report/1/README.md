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

Le sketch qui a été choisi est la simulation d'un feu tricolore en lien avec notre projet.
Pour cela, nous avons utilisé:
- microcontrolleur
- 3 LEDs (vert, jaune, rouge)
- 3 résistances
- 4 câbles
- un câble USB
- une breadboard

Le programme permet d'allumer d'abord la LED verte pendant 5000ms puis l'éteint, allume la LED jaune (représente le feu orange ici) pendant 1500ms, s'éteint, la LED rouge s'allume pendant 5000ms, s'éteint et ainsi de suite.
La durée entre l'extinction d'une LED et l'allumage de la prochaine est de 100ms.


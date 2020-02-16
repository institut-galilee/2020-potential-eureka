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

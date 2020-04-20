int greenLedPin = 4;
int yellowLedPin = 5;
int redLedPin = 6;

int lightSensorPin = A1;
int analogValue = 0;

void setup() {
  pinMode(greenLedPin, OUTPUT);
  pinMode(yellowLedPin,OUTPUT);
  pinMode(redLedPin,OUTPUT);
  digitalWrite(yellowLedPin, HIGH);
  Serial.begin(9600);
}

void loop(){
  analogValue = analogRead(lightSensorPin);
  Serial.println(analogValue);
  if(analogValue < 250){            
    digitalWrite(redLedPin, HIGH);
    digitalWrite(greenLedPin, LOW);
  }
  if(analogValue > 250){            
    digitalWrite(greenLedPin, HIGH);
    digitalWrite(redLedPin, LOW);
  }
  delay(200);
}

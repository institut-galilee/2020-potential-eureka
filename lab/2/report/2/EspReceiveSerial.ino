HardwareSerial Serial1(0);
void setup() {
  // initialize both serial ports:
  Serial.begin(9600);
  Serial1.begin(9600); // pour recevoir data de rx et tx
}
void loop() {
  
  if (Serial1.available()) {
    Serial.println(Serial1.read());
  
  }
}

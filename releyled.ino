int pinRelay = 2;

void setup() {
  
  pinMode(pinRelay, OUTPUT);
}

void loop() {
  
  digitalWrite(pinRelay, HIGH);
  delay(1000); 
  
  
  digitalWrite(pinRelay, LOW);
  delay(1000); 
}

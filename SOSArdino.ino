void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);

}


void blinkOnce(int time){ 
  digitalWrite(LED_BUILTIN, HIGH);
  delay(time);
  digitalWrite(LED_BUILTIN, LOW);
  delay(time);
}

void loop() {
  blinkOnce(1000); 
}
void setup() {
  pinMode(7, OUTPUT); // LED 1
  pinMode(6, OUTPUT); // LED 2
}

void loop() {
  digitalWrite(7, HIGH); // Turn on LED 1
  digitalWrite(6, HIGH); // Turn on LED 2
  delay(100);

  digitalWrite(7, LOW);  // Turn off LED 1
  digitalWrite(6, LOW);  // Turn off LED 2
  delay(100);
}

int led = 12; // Pin number for the LED

void setup() {
  pinMode(led, OUTPUT); // Configure pin 12 as an output
}

void loop() {
  digitalWrite(led, HIGH); // Turn the LED on
  delay(1000); // Pause for 1 second
  digitalWrite(led, LOW); // Turn the LED off
  delay(1000); // Pause for 1 second
}

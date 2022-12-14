char D13 = 13;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(D13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(D13, HIGH);   // Set digital output signal to HIGH/ON/1
  delay(1000);               // wait for a second
  digitalWrite(D13, LOW);    // Set digital output signal to LOW/OFF/0
  delay(1000);              // wait for a second
}

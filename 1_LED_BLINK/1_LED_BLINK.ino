char D13 = 13;
char D08 = 8;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(D13, OUTPUT);
  pinMode(D08, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(D13, HIGH);   // Set digital output signal to HIGH/ON/1
  digitalWrite(D08, LOW);
  delay(1000);                       // wait for a second
  digitalWrite(D13, LOW);    // Set digital output signal to LOW/OFF/0
  digitalWrite(D08, HIGH);
  delay(1000);                       // wait for a second
}

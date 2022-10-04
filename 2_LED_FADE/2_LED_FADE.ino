char led_3 = 3;
short max_brightness = 255;
short min_brightness = 0;
short brightness = 5;
short step = 25;

void setup() {
  // Set Digital3 to output a digital signal
  pinMode(led_3, OUTPUT);
}

void loop() {
  // use Pulse Width Modulation with analogWrite to produce fade effect
  analogWrite(led_3, brightness);
  brightness += step;

  // If the current brightness is 255 or above, set it to 255 then reverse the step
  if (brightness >= max_brightness) { 
    brightness = max_brightness;
    step = -step; 
  }

  // If the current brightness is 0 or below, set it to 0 and reset the step
  if (brightness <= 0) {
    brightness = min_brightness;
    step = 25;
  }
  delay(25);
}

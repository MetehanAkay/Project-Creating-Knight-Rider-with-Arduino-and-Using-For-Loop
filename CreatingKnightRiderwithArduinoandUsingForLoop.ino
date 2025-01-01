int leds[] = {2, 3, 4, 5, 6, 7};

void setup() {

  for (int i=0; i<6; i++) {
  
    pinMode(leds[i], OUTPUT);
  
  }
  // 0 1 2 3 4 5
}

void loop() {

  for (int i=0; i<6; i++) {

    digitalWrite(leds[i], HIGH);
    delay(50);
    digitalWrite(leds[i], LOW);

  }

  for (int j=5; j>-1; j--) {

    digitalWrite(leds[j], HIGH);
    delay(50);
    digitalWrite(leds[j], LOW);

  }

}

int ledCount = 9;
int ledPins[] = {5, 6, 7, 8, 9, 10, 11, 12, 13};
int ledDelay = 300;

void setup() {
  for (int thisLed = 0; thisLed < ledCount; thisLed++) {
    pinMode(ledPins[thisLed], OUTPUT);
  }
}

void loop() {
  digitalWrite(ledPins[4], HIGH);
  delay(ledDelay);
  digitalWrite(ledPins[4], LOW);
  for (int offset = 1; offset <= 4; offset++) {
    digitalWrite(ledPins[4 - offset], HIGH);
    digitalWrite(ledPins[4 + offset], HIGH);
    delay(ledDelay);
    digitalWrite(ledPins[4 - offset], LOW);
    digitalWrite(ledPins[4 + offset], LOW);
  }
  delay(ledDelay);

  for (int offset = 4; offset >= 1; offset--) {
    digitalWrite(ledPins[4 - offset], HIGH);
    digitalWrite(ledPins[4 + offset], HIGH);
    delay(ledDelay);
    digitalWrite(ledPins[4 - offset], LOW);
    digitalWrite(ledPins[4 + offset], LOW);
  }
  digitalWrite(ledPins[4], HIGH);
  delay(ledDelay);
  digitalWrite(ledPins[4], LOW);
  delay(ledDelay);

  for (int thisLed = 0; thisLed < 5; thisLed++) {
    digitalWrite(ledPins[thisLed], HIGH);
    delay(ledDelay);
    digitalWrite(ledPins[thisLed], LOW);
  }
  digitalWrite(ledPins[4], HIGH);
  delay(ledDelay);
  digitalWrite(ledPins[4], LOW);
  delay(ledDelay);
  digitalWrite(ledPins[4], HIGH);
  delay(ledDelay);
  digitalWrite(ledPins[4], LOW);
  for (int thisLed = 5; thisLed < 9; thisLed++) {
    digitalWrite(ledPins[thisLed], HIGH);
    delay(ledDelay);
    digitalWrite(ledPins[thisLed], LOW);
  }
  delay(ledDelay);

  for (int thisLed = 0; thisLed < ledCount; thisLed += 2) {
    digitalWrite(ledPins[thisLed], HIGH);
    delay(ledDelay);
    digitalWrite(ledPins[thisLed], LOW);
  }
  delay(1000);

  for (int thisLed = 1; thisLed < ledCount; thisLed += 2) {
    digitalWrite(ledPins[thisLed], HIGH);
    delay(ledDelay);
    digitalWrite(ledPins[thisLed], LOW);
  }
  delay(1000);
}

const int ledPins[] = {22, 21, 19, 18, 17};
const int ledInit = 23;
const int numLeds = sizeof(ledPins) / sizeof(ledPins[0]);
const int esperar = 500;


void setup() {
  pinMode(ledInit, OUTPUT);
  digitalWrite(ledInit, HIGH);
  delay(400);

  for (int i = 0; i < numLeds; i++) {
    if (ledPins[i] == 17) {
      digitalWrite(ledInit, LOW);
    }

    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], HIGH);
    delay(esperar);
    digitalWrite(ledPins[i], LOW);
    delay(esperar);

  }

}

void loop() {

  }

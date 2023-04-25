// C++ code
const int pins[] = {6, 7, 8, 9, 10, 11, 12, 13};
const int numPins = sizeof(pins) / sizeof(pins[0]);

void setup()
{
  for (int i = 0; i < numPins; i++) {
    pinMode(pins[i], OUTPUT);
  }
}

void loop()
{
  for (int i = 0; i < numPins; i++) {
    digitalWrite(pins[i], HIGH);
    delay(200);
    digitalWrite(pins[i], LOW);
  }

  for (int i = numPins - 2; i > 0; i--) {
    digitalWrite(pins[i], HIGH);
    delay(200);
    digitalWrite(pins[i], LOW);
  }
}
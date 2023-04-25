// C++ code
//
int ledPins [] = {13, 12, 11, 10, 9, 8, 7};

void setup()
{
  for (int i = 0; i < sizeof ledPins /sizeof ledPins[0]; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop()
{
  int potVal = analogRead(A5);
  int ledCount = map(potVal, 0, 1023, 0, 8);
  for (int i = 0; i < ledCount; i++) {
    digitalWrite(ledPins[i], HIGH);
  }
  
  delay(100);
  
  for (int i = 0; i < sizeof ledPins / sizeof ledPins[0]; i++) {
    digitalWrite(ledPins[i], LOW);
  }
}
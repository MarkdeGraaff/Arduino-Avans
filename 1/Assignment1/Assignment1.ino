// C++ code
//
int pins [] = {11, 12};
void setup()
{
  for(int i = 0; i < sizeof pins / sizeof pins[0]; i++) {
    pinMode(pins[i], OUTPUT);
  }
}

void loop()
{
  for(int i = 0; i < sizeof pins / sizeof pins[0]; i++) {
    digitalWrite(pins[i], HIGH);
    delay(1000);
    digitalWrite(pins[i], LOW);
  }
}
// C++ code
//
int rPin = 11;
int gPin = 10;
int bPin = 9;
int R, G, B = 0;

void setup()
{
  pinMode(rPin, OUTPUT);
  pinMode(gPin, OUTPUT);
  pinMode(bPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  for(R = 0; R < 255; R += 51){
    for(G = 0; G < 255; G += 51) {
      for (B = 0; B < 255; B += 51) {
        digitalWrite(rPin, R);
        digitalWrite(gPin, G);
        digitalWrite(bPin, B);
        delay(100);
      }
    }
  }  
}
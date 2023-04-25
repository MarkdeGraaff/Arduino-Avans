// C++ code
//
int bPin = 2;
int oButton = 2;
int state = 0;
int button;

void setup()
{
  pinMode(bPin, INPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  button = digitalRead(bPin);
  Serial.println(button);
  if(button && !oButton)
  {
    if(state == 0)
    {
      digitalWrite(12, HIGH);
      state = 1;
    }
    else {
      digitalWrite(12, LOW);
      state = 0;
    }
    oButton = 1;
  }
  else if(!button && oButton)
  {
    oButton = 0;
  }
}
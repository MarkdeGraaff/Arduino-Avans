// C++ code
//
int sensor = A5;
float temp;
float vout;

void setup()
{
  pinMode(sensor, INPUT);
  Serial.begin(9600);
}

void loop()
{
  vout = analogRead(sensor);
  temp = (vout*500)/1023;
  Serial.println(temp);
  delay(1000);
}
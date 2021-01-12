int enable1 = 11;
int in1 = 10;
int in2 = 9;

void setup()
{
  pinMode(enable1,OUTPUT);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
}

void loop()
{
  //digitalWrite(enable1, HIGH);
  analogWrite(enable1, 255); //0-255
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
}
// C++ code
//
int green = 2;
int yello = 4;
int red = 7;
void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yello, OUTPUT);
  pinMode(green, OUTPUT);
  
}

void loop()
{
  digitalWrite(green, HIGH);
  delay(7000); // Wait for 1000 millisecond(s)
  digitalWrite(green, LOW);
  delay(1000);
  for (int i = 0;i<=2;i++){
    digitalWrite(green, HIGH);
  	delay(1000);
  	digitalWrite(green, LOW);
  	delay(1000);
  }
  digitalWrite(yello, HIGH);
  delay(2000); // Wait for 1000 millisecond(s)
  digitalWrite(yello, LOW);
  delay(1000);
  digitalWrite(red, HIGH);
  delay(7000); // Wait for 1000 millisecond(s)
  digitalWrite(red, LOW);
  delay(1000);
}

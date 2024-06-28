// C++ code
//
int green = 2;
int yello = 4;
int red = 7;
int button = 8;

void setup()
{
  pinMode(button, INPUT);
  pinMode(red, OUTPUT);
  pinMode(yello, OUTPUT);
  pinMode(green, OUTPUT);
  
}

void loop()
{
  digitalWrite(red, HIGH);
  delay(10000); 
  digitalWrite(red, LOW);
  delay(1000);
  
  digitalWrite(green, HIGH);
  delay(5000);
  if (digitalRead(button) == HIGH) {
    digitalWrite(green, HIGH);
    delay(5000);
    for (int i = 0; i <= 2; i++) {
      digitalWrite(yello, HIGH);
      delay(500);
      digitalWrite(yello, LOW);
      delay(500);
      digitalWrite(green, LOW);
      
    }
    digitalWrite(red, HIGH);
    delay(10000);
    digitalWrite(red, LOW);
    delay(1000);
  } 
  
  digitalWrite(green, HIGH);
  delay(5000); 
  digitalWrite(green, LOW);
  delay(1000);
  for (int i = 0;i<=2;i++){
    digitalWrite(green, HIGH);
  	delay(1000);
  	digitalWrite(green, LOW);
  	delay(1000);
  }
  
  digitalWrite(yello, HIGH);
  delay(2000); 
  digitalWrite(yello, LOW);
  delay(1000);
   
    
}

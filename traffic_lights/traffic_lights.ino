// the setup function runs once when you press reset or power the board
void setup() 
{ pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

// the loop function runs over and over again forever
void loop() 
{ 
  digitalWrite(2, HIGH); //Verde
  delay(3000);
  digitalWrite(2, LOW);
  delay(1000);
  digitalWrite(2, HIGH);  // Verde
  delay(1000);
  digitalWrite(2, LOW);
  delay(1000);
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  delay(1000);
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  delay(1000);
  digitalWrite(3, HIGH); //Amarillo
  delay(1000);
  digitalWrite(3, LOW);
  delay(1000);
  digitalWrite(4, HIGH); //Rojo
  delay(3000);
  digitalWrite(4, LOW);
  delay(1000);
}

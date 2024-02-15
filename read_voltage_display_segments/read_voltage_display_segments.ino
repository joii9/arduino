/*
This program enable A0 as analogRead(A0), also it enable Serial.println(voltage)
It declare six sentences if for light a eight segments display with his respective voltage in integer numbers
*/
int a,b,c,d,e,f,g; //Declare 7 variables that they will have a state to turn on the light of a display


// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
    
}

// the loop routine runs over and over again forever:
void loop() {

  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  int voltage = sensorValue * (5.0 / 1023.0);
  // print out the value you read:
  Serial.println(voltage);

  if (voltage==0)
  {
    a=b=c=d=e=f=HIGH;
    g=LOW;
  }
  if (voltage==1)
  {
    b=c=HIGH;
    a=d=e=f=g=LOW;
  }
  if (voltage==2)
  {
    a=b=g=e=d=HIGH;
    c=f=LOW;
  }
  if (voltage==3)
  {
    a=b=c=d=g=HIGH;
    e=f=LOW;
  }
  if (voltage==4)
  {
    b=c=f=g=HIGH;
    a=d=e=LOW;
  }
  if (voltage==5)
  {
    a=f=g=c=d=HIGH;
    b=e=LOW;
  }
  digitalWrite(8,a); //In this case is because the output number 1 corresponds to TX and always is energized I had to move the pin to the number eight to enable the segment a of the display
  digitalWrite(2,b); //Segment of the display
  digitalWrite(3,c); //Segment of the display
  digitalWrite(4,d); //Segment of the display
  digitalWrite(5,e); //Segment of the display
  digitalWrite(6,f); //Segment of the display
  digitalWrite(7,g); //Segment of the display
}

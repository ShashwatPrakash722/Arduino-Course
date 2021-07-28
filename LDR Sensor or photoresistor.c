// C++ code
//
int const ledpin = 7;
int const sensorPin = 0;

void setup()
{
  pinMode(7, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int input = analogRead(sensorPin); // digitalRead its insity
  Serial.println(input);
  if (input>250){ // If its exceed this
    digitalWrite(7,HIGH);
  }
  else{
    digitalWrite(7,LOW); 
  }
}

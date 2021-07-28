#define trigpin 1
#define echopin 2 //defining pins
void setup()
{
  pinMode(trigpin,OUTPUT);
  pinMode(echopin, INPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}
 
void loop()
{
  digitalWrite(trigpin, HIGH); // This is transmission
  delayMicroseconds(10);
  digitalWrite(trigpin, LOW);
 
  int duration = pulseIn(echopin, HIGH); // This is recieving giving to the echo

  int distance = duration * 0.034 / 2; 
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
if(distance>300){
  digitalWrite(12, LOW);}
else{
  digitalWrite(12, HIGH);
}
}  

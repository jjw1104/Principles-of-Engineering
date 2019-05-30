int trigPin = 11;
int echoPin = 12;

int yellow = 6;
int red = 9;
int green = 5;

long duration;
int distance;


void setup() {
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT); 
Serial.begin(9600); 

pinMode(yellow,OUTPUT);
pinMode(red,OUTPUT);
pinMode(green,OUTPUT);

}

void loop() {

digitalWrite(trigPin, LOW);
delayMicroseconds(2);

digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);

distance= duration/74/2;

Serial.print("Distance: ");
Serial.println(distance);
Serial.print("Brightness: ");
Serial.println(analogRead(0));
delay(250);
if(analogRead(0) <= 250 )
  {
  digitalWrite(red,HIGH);
  digitalWrite(green,LOW);
  digitalWrite(yellow,LOW);
  }
  if(analogRead(0) > 300 && analogRead(0) <=600)
  {
  digitalWrite(red,LOW);
  digitalWrite(green,LOW);
  digitalWrite(yellow,HIGH);
  }
  if(analogRead(0)> 700)
  {
  digitalWrite(red,LOW);
  digitalWrite(green,HIGH);
  digitalWrite(yellow,LOW);
  }

  
}

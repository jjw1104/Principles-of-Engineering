int trigPin = 11;
int echoPin = 12;

int yellow = 6;
int red = 9;
int green = 5;
int brightness = 5;    
int fadeAmount = 5; 
int ledbrightness = 255;
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
for(int i = 0; i < 11; i++)
{
  if(distance == i)
  {
    ledbrightness = 25 * i;
    }
  }

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
if(analogRead(0) <= 300 )
  {
  analogWrite(red,ledbrightness);
  analogWrite(green,0);
  analogWrite(yellow,0);
  }
  if(analogRead(0) > 300 && analogRead(0) <=600)
  {
  analogWrite(red,0);
  analogWrite(green,0);
  analogWrite(yellow,ledbrightness);
  }
  if(analogRead(0)> 600)
  {
  analogWrite(red,0);
  analogWrite(green,ledbrightness);
  analogWrite(yellow,0);
  }



}

int red=13;
int yellow=5;
int green=6;

// regular = 460ish,  darkness = 100ish maybe 150ish,  extra light = 700ish
 

void setup() {

  Serial.begin(9600);
pinMode(red, OUTPUT);
pinMode(yellow, OUTPUT);
pinMode(green, OUTPUT);
}

void loop() {
Serial.print("PhotoRead: ");
Serial.println(analogRead(0));

if ( analogRead(0)>400 && analogRead(0)<500) 
{
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
    digitalWrite(green, LOW);
    delay(500);
}

if (analogRead(0)<200)
{
 digitalWrite(red, HIGH);
  digitalWrite(yellow, LOW);
    digitalWrite(green, LOW);
}

if (analogRead(0)>700)
{
 digitalWrite(red, LOW);
  digitalWrite(yellow, HIGH);
  delay(500);
  digitalWrite(yellow, LOW);
  delay(500);
    digitalWrite(green, HIGH);
    delay(500);
     digitalWrite(green, LOW);
     delay(500);
}





}

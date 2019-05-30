int red=13;
int yellow=5;
int green=8;


void setup() {

  Serial.begin(9600);
pinMode(red, OUTPUT);
pinMode(yellow, OUTPUT);
pinMode(green, OUTPUT);
}

void loop() {

Serial.println(analogRead(0));

if ( analogRead(0)<500); {
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
    digitalWrite(green, LOW);
   
  }
if (analogRead(0)<200);{

}







}

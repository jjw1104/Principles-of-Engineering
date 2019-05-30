// 9-20-18 photo resistor used to control 3 lights blinking 
// depending on adding or covering light



int red=13;
int yellow=5;
int green=8;

// regular = 470ish
// darkness = 100ish maybe 150ish
// extra light = 700ish

void setup() {
  
  Serial.begin(9600);
pinMode(red, OUTPUT);
pinMode(yellow, OUTPUT);
pinMode(green, OUTPUT);


Serial.println("done with setup... continue");
}

void loop() {
  
Serial.print("PhotoRead: ");
Serial.println(analogRead(0));
delay(100);

 if(analogRead(0)>250 && analogRead(0)<500)
{
   digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
    digitalWrite(green, LOW);
    Serial.println("regular light level all lights off");
    delay(300);
  }

if(analogRead(0)<200){
digitalWrite(red, HIGH);
digitalWrite(yellow, LOW);
    digitalWrite(green, LOW);
    delay(300);
    digitalWrite(red, LOW);
    delay(300);
    
    
Serial.println("darkness red flashes");
}

 if(analogRead(0)>600)
{
   digitalWrite(red, LOW);
  digitalWrite(yellow, HIGH);
   delay(500);
     digitalWrite(yellow, LOW);
      digitalWrite(green, HIGH);
          delay(500);
    digitalWrite(green, LOW);
     
    Serial.println("extra light green and yellow flash");
  }


}

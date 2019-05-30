// green=5, yellow=6, red=9


/*
  Fade

  This example shows how to fade an LED on pin 9 using the analogWrite()
  function.

  The analogWrite() function uses PWM, so if you want to change the pin you're
  using, be sure to use another PWM capable pin. On most Arduino, the PWM pins
  are identified with a "~" sign, like ~3, ~5, ~6, ~9, ~10 and ~11.

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Fade
*/
int green= 5;
int yellow= 6;
int red = 9;
int brightness = 5;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup() {

  pinMode(red, OUTPUT);
    pinMode(green, OUTPUT);
      pinMode(yellow, OUTPUT);
  
}


void loop() { 


while( brightness!=0) {
   analogWrite(red, brightness);

  brightness = brightness + fadeAmount;

  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }

  delay(30);
}

 brightness=5;
 digitalWrite(red, LOW);
 digitalWrite(green, LOW);

while( brightness!=0) {
   analogWrite(yellow, brightness);

  brightness = brightness + fadeAmount;

  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  
  }
  delay(30);
}

    
      
 brightness=5;
 digitalWrite(red, LOW);
 digitalWrite(yellow, LOW);


while( brightness!=0) {
   analogWrite(green, brightness);

  brightness = brightness + fadeAmount;

  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }

  delay(30);
}

brightness=5;
 digitalWrite(green, LOW);
 digitalWrite(yellow, LOW);


}

#include <Wire.h>
#include "Adafruit_TCS34725.h"
int input;
float red, green, blue;
Adafruit_TCS34725 tcs = Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_50MS, TCS34725_GAIN_4X);
bool colorchoser1=false;
bool colorchoser2=false;
bool colorchoser3=false;
bool colorchoser4=false;

void setup() {
  Serial.begin(9600);
  delay(20);
  Serial.println("\t\t\t\t\t\tWelcome To AutoChatcher");
  Serial.println("Please Declare Criminal Color");
}

void loop() {
  tcs.getRGB(&red, &green, &blue);
  Serial.print("R:\t"); Serial.print(int(red)); 
  Serial.print("\tG:\t"); Serial.print(int(green)); 
  Serial.print("\tB:\t"); Serial.print(int(blue));
  Serial.print("\n");
    
  if (Serial.available()) {
    input = Serial.read();

    // initializing criminal color

    if (input == 82 ) {
      Serial.print ("Criminal Color Set To: " );
      Serial.println("Red");
      colorchoser1=true;
      colorchoser2=false;
      colorchoser3=false;
      colorchoser4=false;
    }
    if (input == 71 ) {
      Serial.print ("Criminal Color Set To: " );
      Serial.println("Green");
      colorchoser2=true;
      colorchoser1=false;
      colorchoser3=false;
      colorchoser4=false;
    }
    if (input == 66 ) {
      Serial.print ("Criminal Color Set To: " );
      Serial.println("Black");
      colorchoser3=true;
      colorchoser1=false;
      colorchoser2=false;
      colorchoser4=false;
    }
    if (input == 87 ) {
      Serial.print ("Criminal Color Set To: " );
      Serial.println("White");
      colorchoser4=true;
      colorchoser1=false;
      colorchoser2=false;
      colorchoser3=false;
    }
  }
  // checking for color

  //fix numbers not accurate
  
  if ( colorchoser1=true && red>= 120 && red<=160 && green>= 65 && green<=90 && blue>= 40 && blue<=60) { //red
    Serial.println("Red Criminal");
  }

  
   if ( colorchoser2=true && red>= 135 && red<=150 && green>= 74 && green<=82 && blue>= 48 && blue<=56) { //green
    Serial.println("Green Criminal");
  }

  
   if ( colorchoser3=true && red>= 135 && red<=150 && green>= 74 && green<=82 && blue>= 48 && blue<=56) { //black
    Serial.println("Black Criminal");
  }

  
   if ( colorchoser4=true && red>= 135 && red<=150 && green>= 74 && green<=82 && blue>= 48 && blue<=56) { //white
    Serial.println("White Criminal");
  }

  
}

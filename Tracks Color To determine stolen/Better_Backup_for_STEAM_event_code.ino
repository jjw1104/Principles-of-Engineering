#include <Wire.h>
#include "Adafruit_TCS34725.h"
int input;
float red, green, blue;
Adafruit_TCS34725 tcs = Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_50MS, TCS34725_GAIN_4X);
bool colorchoser1 = false;
bool colorchoser2 = false;
bool colorchoser3 = false;
bool colorchoser4 = false;

void setup() {
  Serial.begin(9600);
  delay(20);
  Serial.println("\t\t\t\t\t\tWelcome To AutoChatcher");
  Serial.println("Please Declare Criminal Color..");
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
      colorchoser1 = true;
      colorchoser2 = false;
      colorchoser3 = false;
      colorchoser4 = false;
    }
    if (input == 71 ) {
      Serial.print ("Criminal Color Set To: " );
      Serial.println("Green");
      colorchoser2 = true;
      colorchoser1 = false;
      colorchoser3 = false;
      colorchoser4 = false;
    }
    if (input == 66 ) {
      Serial.print ("Criminal Color Set To: " );
      Serial.println("Black");
      colorchoser3 = true;
      colorchoser1 = false;
      colorchoser2 = false;
      colorchoser4 = false;
    }
    if (input == 87 ) {
      Serial.print ("Criminal Color Set To: " );
      Serial.println("White");
      colorchoser4 = true;
      colorchoser1 = false;
      colorchoser2 = false;
      colorchoser3 = false;
    }
  }
  // checking for color

  //fix numbers not accurate


  //red
  if ( colorchoser1 == true && red >= 112 && red <= 118 && green >= 76 && green <= 81 && blue >= 47 && blue <= 551) { //red
    Serial.println("License Plate: Red");
    Serial.println("Car Status: Stolen"); 
  }
    if ( colorchoser1 == false && red >= 112 && red <= 118 && green >= 76 && green <= 81 && blue >= 47 && blue <= 551) { //red
    Serial.println("License Plate: Red");
    Serial.println("Car Status: Civilian"); 
  }


  //green
  if ( colorchoser2 == true && red >= 104 && red <= 108 && green >= 84 && green <= 89 && blue >= 49 && blue <= 51) { //green
    Serial.println("License Plate: Green");
    Serial.println("Car Status: Stolen");
  }
  if ( colorchoser2 == false && red >= 104 && red <= 108 && green >= 84 && green <= 89 && blue >= 49 && blue <= 51) { //green
    Serial.println("License Plate: Green");
    Serial.println("Car Status: Civilian");
  }



  //black
  if ( colorchoser3 == true && red >= 106 && red <= 109 && green >= 82 && green <= 85 && blue >= 50 && blue <= 53) { //black
    Serial.println("License Plate: Black");
    Serial.println("Car Status: Stolen");
  }
  if ( colorchoser3 == false && red >= 106 && red <= 109 && green >= 82 && green <= 85 && blue >= 50 && blue <= 53) { //black
    Serial.println("License Plate: Black");
    Serial.println("Car Status: Civilian");
  }


  //white
  if ( colorchoser4 == true && red >= 102 && red <= 107 && green >= 82 && green <= 84 && blue >= 52 && blue <= 55) { //white
    Serial.println("License Plate: White");
    Serial.println("Car Status: Stolen");
  }
  if ( colorchoser4 == false && red >= 102 && red <= 107 && green >= 82 && green <= 84 && blue >= 52 && blue <= 55) { //white
    Serial.println("License Plate: White");
    Serial.println("Car Status: Civilian");
  }
}

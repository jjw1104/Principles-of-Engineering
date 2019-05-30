#include <Wire.h>
#include "Adafruit_TCS34725.h"
int input;
float red, green, blue;
Adafruit_TCS34725 tcs = Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_50MS, TCS34725_GAIN_4X);
bool colorchoser1 = false;
bool colorchoser2 = false;
bool colorchoser3 = false;
bool starter = false;
int greenled = 13;
int redled = 4;

void setup() {
  Serial.begin(9600);
  pinMode(greenled, OUTPUT);
  pinMode(redled, OUTPUT);
  delay(20);
  Serial.println("\t\t\t\t\t\tWelcome To CornerCop");
  Serial.println("   ");
  Serial.println("Please Declare Color For Stolen Car..");
}

void loop() {
  tcs.getRGB(&red, &green, &blue);


  if (Serial.available()) {
    input = Serial.read();

    // initializing criminal color

    if (input == 82 ) {
      Serial.print ("Criminal Color Set To: " );
      Serial.println("Red");
      colorchoser1 = true;
      colorchoser2 = false;
      colorchoser3 = false;
    }
    if (input == 80 ) {
      Serial.print ("Criminal Color Set To: " );
      Serial.println("Purple");
      colorchoser2 = true;
      colorchoser1 = false;
      colorchoser3 = false;
    }
    if (input == 66 ) {
      Serial.print ("Criminal Color Set To: " );
      Serial.println("Black");
      colorchoser3 = true;
      colorchoser1 = false;
      colorchoser2 = false;
    }

  }
  // checking for color



  //fix numbers not accurate

  if (input == 82 || input == 80 || input == 66) {

    starter = true;
  }
  if (starter == true) {
    //red
    if ( starter == true && colorchoser1 == true && red >= 98 && red <= 114 && green >= 76 && green <= 84 && blue >= 52 && blue <= 56) { //red
      Serial.println("  ");
      Serial.println("License Plate: Red");
      Serial.println("Car Status: Stolen");
      Serial.println("Location: 1st Street");
      digitalWrite(greenled, HIGH);
      digitalWrite(redled, LOW);
      delay(1000);
    }
    else if ( starter == true && colorchoser1 == false && red >= 98 && red <= 114 && green >= 76 && green <= 84 && blue >= 52 && blue <= 56) { //red
      Serial.println("  ");
      Serial.println("License Plate: Red");
      Serial.println("Car Status: Civilian");
      Serial.println("Location: 1st Street");
      digitalWrite(greenled, LOW);
      digitalWrite(redled, HIGH);
      delay(1000);
    }


    //purple
    else if ( starter == true && colorchoser2 == true && red >= 92 && red <= 97 && green >= 83 && green <= 86 && blue >= 55 && blue <= 60) { //purple
      Serial.println("  ");
      Serial.println("License Plate: Purple");
      Serial.println("Car Status: Stolen");
      Serial.println("Location: 1st Street");
      digitalWrite(greenled, HIGH);
      digitalWrite(redled, LOW);
      delay(1000);
    }
    else if ( starter == true && colorchoser2 == false && red >= 92 && red <= 97 && green >= 83 && green <= 86 && blue >= 55 && blue <= 60) { //purple
      Serial.println("  ");
      Serial.println("License Plate: Purple");
      Serial.println("Car Status: Civilian");
      Serial.println("Location: 1st Street");
      digitalWrite(greenled, LOW);
      digitalWrite(redled, HIGH);
      delay(1000);
    }



    //black
    else if ( starter == true && colorchoser3 == true && red >= 90 && red <= 95 && green >= 85 && green <= 89 && blue >= 54 && blue <= 58) { //black
      Serial.println("  ");
      Serial.println("License Plate: Black");
      Serial.println("Car Status: Stolen");
      Serial.println("Location: 1st Street");
      digitalWrite(greenled, HIGH);
      digitalWrite(redled, LOW);
      delay(1000);
    }
    else if ( starter == true && colorchoser3 == false && red >= 90 && red <= 95 && green >= 85 && green <= 89 && blue >= 54 && blue <= 58) { //black
      Serial.println("  ");
      Serial.println("License Plate: Black");
      Serial.println("Car Status: Civilian");
      Serial.println("Location: 1st Street");
      digitalWrite(greenled, LOW);
      digitalWrite(redled, HIGH);
      delay(1000);
    }
    else {
      Serial.println("  ");
      Serial.println("searching for plate...");
      digitalWrite(greenled, LOW);
      digitalWrite(redled, LOW);
      delay(2500);
    }

  }
}

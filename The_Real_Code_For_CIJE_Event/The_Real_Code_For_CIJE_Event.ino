#include <Wire.h>
#include "Adafruit_TCS34725.h"
int input;
float red, green, blue;
Adafruit_TCS34725 tcs = Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_50MS, TCS34725_GAIN_4X);
bool colorchoser1 = false;
bool colorchoser2 = false;
bool colorchoser3 = false;
bool colorchoser4 = false;
int greenled=4;
int redled= 3;

void setup() {
  Serial.begin(9600);
  delay(20);
  Serial.println("\t\t\t\t\t\tWelcome To CornerCop");
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

  }
  // checking for color

 
  
 //fix numbers not accurate
  if(red==92 && green==87 && blue==55) {
    Serial.println("searching for plate...");
    digitalWrite(greenled,LOW);
    digitalWrite(redled,LOW);
  }
  //red
  if ( colorchoser1 == true && red >= 92 && red <= 100 && green >= 82 && green <= 86 && blue >= 52 && blue <= 55) { //red
    Serial.println("  ");
    Serial.println("License Plate: Red");
    Serial.println("Car Status: Stolen");
    Serial.println("Location: 1st Street"); 
    digitalWrite(greenled,HIGH);
    digitalWrite(redled,LOW);
    delay(1000);
  }
    if ( colorchoser1 == false && red >= 92 && red <= 100 && green >= 82 && green <= 86 && blue >= 52 && blue <= 55) { //red
    Serial.println("  ");
    Serial.println("License Plate: Red");
    Serial.println("Car Status: Civilian"); 
    Serial.println("Location: 1st Street"); 
    digitalWrite(greenled,LOW);
    digitalWrite(redled,HIGH);
    delay(1000);
  }


  //green
  if ( colorchoser2 == true && red >= 88 && red <= 90 && green >= 90 && green <= 93 && blue >= 53 && blue <= 55) { //green
    Serial.println("  ");
    Serial.println("License Plate: Green");
    Serial.println("Car Status: Stolen");
    Serial.println("Location: 1st Street"); 
    digitalWrite(greenled,HIGH);
    digitalWrite(redled,LOW);
    delay(1000);
  }
  if ( colorchoser2 == false && red >= 88 && red <= 90 && green >= 90 && green <= 93 && blue >= 53 && blue <= 55) { //green
   Serial.println("  ");
    Serial.println("License Plate: Green");
    Serial.println("Car Status: Civilian");
    Serial.println("Location: 1st Street"); 
    digitalWrite(greenled,LOW);
    digitalWrite(redled,HIGH);
    delay(1000);
  }



  //black
  if ( colorchoser3 == true && red >= 88 && red <= 91 && green >= 89 && green <= 90 && blue >= 56 && blue <= 57) { //black
   Serial.println("  ");
    Serial.println("License Plate: Black");
    Serial.println("Car Status: Stolen");
    Serial.println("Location: 1st Street"); 
    digitalWrite(greenled,HIGH);
    digitalWrite(redled,LOW);
    delay(1000);
  }
  if ( colorchoser3 == false && red >= 88 && red <= 91 && green >= 89 && green <= 90 && blue >= 56 && blue <= 57) { //black
   Serial.println("  ");
    Serial.println("License Plate: Black");
    Serial.println("Car Status: Civilian");
    Serial.println("Location: 1st Street"); 
    digitalWrite(greenled,LOW);
    digitalWrite(redled,HIGH);
    delay(1000);
    
  }


}

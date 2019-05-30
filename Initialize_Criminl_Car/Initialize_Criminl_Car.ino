#include <Wire.h>
#include "Adafruit_TCS34725.h"
int input;
float red, green, blue;
Adafruit_TCS34725 tcs = Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_50MS, TCS34725_GAIN_4X);

void setup() {
  Serial.begin(9600);
  delay(20);
  Serial.println("\t\t\t\t\t\tWelcome To AutoChatcher");
  Serial.println("Please Declare Criminal Color");
}

void loop() {
  tcs.getRGB(&red, &green, &blue);   
  if (Serial.available()) {
    input = Serial.read();

    // initializing criminal color

    if (input == 82 ) {
      Serial.print ("Criminal Color Set To: " );
      Serial.println("Red");
    }
    if (input == 71 ) {
      Serial.print ("Criminal Color Set To: " );
      Serial.println("Green");
    }
    if (input == 66 ) {
      Serial.print ("Criminal Color Set To: " );
      Serial.println("Black");
    }
    if (input == 87 ) {
      Serial.print ("Criminal Color Set To: " );
      Serial.println("White");
    }
  }
}

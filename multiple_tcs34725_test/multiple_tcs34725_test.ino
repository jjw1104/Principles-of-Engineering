#include <Wire.h>
#include "Adafruit_TCS34725softi2c.h"

/* Example code for the Adafruit TCS34725 breakout library */

/* Connect SCL    to digital 8
   Connect SDA    to digital 9
   Connect VDD    to 3.3V DC
   Connect GROUND to common ground */
   
// You can use any digital pin for emulate SDA / SCL
#define SCLpin 8
#define SDApin 9



/* Initialise with specific int time and gain values */
Adafruit_TCS34725softi2c tcs = Adafruit_TCS34725softi2c(TCS34725_INTEGRATIONTIME_700MS, TCS34725_GAIN_1X, SDApin, SCLpin);

void setup(void) {
  Serial.begin(9600);
  
  if (tcs.begin()) {
    Serial.println("Found sensor");
  } else {
    Serial.println("No TCS34725 found ... check your connections");
    while (1);
  }
  
  // Now we're ready to get readings!
}

void loop(void) {
  uint16_t r, g, b, c;
  
  tcs.getRawData(&r, &g, &b, &c);
  
  Serial.print("R: "); Serial.print(r, DEC); Serial.print(" ");
  Serial.print("G: "); Serial.print(g, DEC); Serial.print(" ");
  Serial.print("B: "); Serial.print(b, DEC); Serial.print(" ");
  Serial.print("C: "); Serial.print(c, DEC); Serial.print(" ");
  Serial.println(" ");
}

char msg[30]; 
#include <Wire.h>
#include "Adafruit_TCS34725.h"
float red, green, blue;
Adafruit_TCS34725 tcs = Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_50MS, TCS34725_GAIN_4X);

void sense()
{
  while(true)
    {
      tcs.getRGB(&red, &green, &blue);
        Serial.print("R:\t"); Serial.print(int(red)); 
  Serial.print("\tG:\t"); Serial.print(int(green)); 
  Serial.print("\tB:\t"); Serial.print(int(blue));
  Serial.print("\n");
      }
  }

void setup() {
 Serial.begin(9600);
 delay(100);
 Serial.println("WELCOME TO AUTOCACHER DATABASE...");
 Serial.println("ENTER COLOR FOR CRIMINAL CAR");
}

void loop() {
sense();
while (!Serial.available ());
delay(20);

for(int cnt = 0; Serial.available(); cnt++) {
  msg[cnt] = Serial.read();
}
Serial.println ( );
Serial.print("CRIMINAL CAR SET TO "); 
Serial.print(msg);


    


}

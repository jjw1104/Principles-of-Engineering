int PhotoRead; // 0, 255  29,825
int Shift;
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup() {

Serial.begin(9600);
lcd.begin();

  lcd.backlight();
  
}

void loop() {
PhotoRead = analogRead(0);
lcd.print(Shift);
Shift= map(PhotoRead,26,760,0,255);

Serial.print("PhotoRead:");
Serial.print(PhotoRead );
Serial.print("    ");
Serial.print("Shift:");
Serial.println(Shift);
delay(75);

lcd.clear();

}

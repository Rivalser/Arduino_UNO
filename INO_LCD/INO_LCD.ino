#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();

}

void loop()
{
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Just do it!");
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Rivalser Arduino!");
  delay(2000);
  lcd.clear();

}

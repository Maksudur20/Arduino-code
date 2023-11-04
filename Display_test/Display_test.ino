#include <Wire.h>
#include <LiquidCrystal_I2C.h>
 // CHANGE THIS AS PER YOUR NEED

LiquidCrystal_I2C lcd(0x27, 20, 4); // CHANGE THE 0X27 ADDRESS TO YOUR SCREEN ADDRESS IF NEEDED
void setup()
{
  lcd.init();
  lcd.backlight();
  

}
void loop()
{
   lcd.setCursor(0, 0);
  lcd.print(" Dear Customers");
  //delay(3000);
  //lcd.clear();
   lcd.setCursor(2, 1);
  lcd.print(" Welcome To");
  delay(3000);
  lcd.clear();

  lcd.setCursor(0, 2);
  lcd.print("Our Online Shop ");
  lcd.setCursor(1, 3);
  lcd.print("DishanTech BD");
  delay(3000);
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("We are provide");
  lcd.setCursor(1, 1);
  lcd.print("Electronics,IT");
  delay(3000);
  lcd.clear();
  
lcd.setCursor(1, 2);
  lcd.print("Robotics Parts");
  lcd.setCursor(2, 3);
  lcd.print("Best Quality");
  delay(3000);
  lcd.clear();

    
lcd.setCursor(2, 0);
  lcd.print("Your Project");
  lcd.setCursor(2, 1);
  lcd.print("Our Headache");
  delay(3000);
  lcd.clear();

  lcd.setCursor(1, 0);
  lcd.print("Follow us FB page");
  lcd.setCursor(1, 1);
  lcd.print("DishanTech BD");
  delay(3000);
  lcd.clear();

  lcd.setCursor(0, 1);
  lcd.print("Subscribe our");
  lcd.setCursor(3, 2);
  lcd.print("channel");
  lcd.setCursor(2, 3);
  lcd.print("DishanTech BD");
  delay(3000);
  lcd.clear();

}
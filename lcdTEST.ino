#include <LiquidCrystal.h>

//4 bit mode
LiquidCrystal lcd(7, 8, 1, 2, 3, 4); // RS, E, D1, D2, D3, D4

void setup() {
    lcd.begin(20, 1);
    lcd.print("Hello, World!");
    lcd.cursor();
    lcd.setCursor(0,1);
}

void loop() {
  for (int z = 1; z < 9; z++)
  {
    for (int i = 0; i < 20; i++)
    {
      lcd.setCursor(i, 1); 
      lcd.setCursor(13, 1);
      lcd.print(String(z));
      lcd.setCursor(i, 1);
      delay(120 - z*10);
    }
    for(int n = 19; n > 0; n--)
    {
      lcd.setCursor(13, 1);
      lcd.print(String(z));
      lcd.setCursor(n, 1); 
      delay(120 - z*10);
    }
  }
}

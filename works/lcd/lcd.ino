// include the library code:
#include <LiquidCrystal.h>


// initialization librairie avec les pins de l'Arduino
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


void setup() {
  lcd.begin(16, 2);
}


void loop() {
  // Colonne 0 = 1ere colonne
  // Ligne 0 = 1ère ligne
  
  // Position colonne 0, ligne 0
  lcd.setCursor(0,0);
  lcd.print("Youpi");
  
  // Position colonne 0, ligne 1
  lcd.setCursor(0, 1);
  lcd.print("Chrono :");
  
  // Position colonne 10, ligne 1
  lcd.setCursor(10, 1);
  lcd.print(millis() / 60);  
}
 

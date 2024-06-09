#include <LiquidCrystal.h>

// Configuration des broches de l'écran LCD
const int rs = 8;
const int en = 7;
const int d4 = 12;
const int d5 = 11;
const int d6 = 10;
const int d7 = 9;

// Déclaration de l'objet LCD
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// Texte à faire défiler
String message = "Ce monde est loin d'etre parfait !";

void setup() {
  // Définition du nombre de colonnes et de lignes de l'écran LCD
  lcd.begin(16, 2);
}

void loop() {
  // Effacer l'écran
  lcd.clear();

  // Afficher le texte complet
  lcd.setCursor(0, 0);
  lcd.print(message);

  // Attendre un bref moment pour que le texte soit visible avant le défilement
  delay(1000);

  // Faire défiler le texte de gauche à droite
  for (int positionCounter = 0; positionCounter < message.length() + 16; positionCounter++) {
    lcd.scrollDisplayLeft();
    delay(150); 
  }

  // Pause avant de sortir de la boucle loop
  delay(1000);
}

const int ledRed1 = 2;
const int ledYellow1 = 3;
const int ledGreen1 = 4;

const int ledRed2 = 5;
const int ledYellow2 = 6;
const int ledGreen2 = 7;

void setup(){
  pinMode(ledRed1, OUTPUT);
  pinMode(ledYellow1, OUTPUT);
  pinMode(ledGreen1, OUTPUT);
  
  pinMode(ledRed2, OUTPUT);
  pinMode(ledYellow2, OUTPUT);
  pinMode(ledGreen2, OUTPUT);
}

void loop(){
  
  // Phase 1: Direction 1 - Vert, Direction 2 - Rouge
  digitalWrite(ledRed1, LOW);
  digitalWrite(ledGreen1, HIGH);
  digitalWrite(ledRed2, HIGH);
  delay(3000); // Vert pour Direction 1

  // Transition 1: Direction 1 - Jaune
  digitalWrite(ledGreen1, LOW);
  digitalWrite(ledYellow1, HIGH);
  delay(2000); // Jaune pour Direction 1
  digitalWrite(ledYellow1, LOW);

  // Phase de sécurité : Assurer le rouge des deux directions pendant une courte période
  digitalWrite(ledRed1, HIGH);
  delay(1000); // Tous les deux rouges pour une courte période

  // Phase 2: Direction 1 - Rouge, Direction 2 - Vert
  digitalWrite(ledRed1, HIGH);
  digitalWrite(ledRed2, LOW);
  digitalWrite(ledGreen2, HIGH);
  delay(3000); // Vert pour Direction 2

  // Transition 2: Direction 2 - Jaune
  digitalWrite(ledGreen2, LOW);
  digitalWrite(ledYellow2, HIGH);
  delay(2000); // Jaune pour Direction 2
  digitalWrite(ledYellow2, LOW);

  // Phase de sécurité : Assurer le rouge des deux directions pendant une courte période
  digitalWrite(ledRed2, HIGH);
  delay(1000); // Tous les deux rouges pour une courte période
  
}
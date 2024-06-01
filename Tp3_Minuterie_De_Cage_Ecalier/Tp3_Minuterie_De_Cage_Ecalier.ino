const int buttonPin = 2;    
const int ledPin = 3;       

void setup() {
  pinMode(ledPin, OUTPUT);     
  pinMode(buttonPin, INPUT_PULLUP);  
}

void loop() {
  // Lecture de l'état du bouton
  int buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) {
    digitalWrite(ledPin, HIGH); // Allumer la LED
    delay(5000); 
    digitalWrite(ledPin, LOW); // Éteindre la LED
  }
}

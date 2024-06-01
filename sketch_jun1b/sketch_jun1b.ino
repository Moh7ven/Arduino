const int ledRed1 = 2;
const int ledYellow1 = 3;
const int ledGreen1 = 4;

const int ledRed2 = 5;
const int ledYellow2 = 6;
const int ledGreen2 = 7;

void setup() {
  
  pinMode(ledRed1, OUTPUT);
  pinMode(ledYellow1, OUTPUT);
  pinMode(ledGreen1, OUTPUT);
  
  pinMode(ledRed2, OUTPUT);
  pinMode(ledYellow2, OUTPUT);
  pinMode(ledGreen2, OUTPUT);
}

void loop() {

  //FEUX_TRICOLORE 1

  // Phase 1
  digitalWrite(ledRed1, HIGH);
  digitalWrite(ledYellow1, LOW);
  digitalWrite(ledGreen1, LOW);
  delay(1000); 

  // Phase 2
  digitalWrite(ledRed1, LOW);
  digitalWrite(ledYellow1, LOW);
  digitalWrite(ledGreen1, HIGH);
  delay(1000); 

  // Phase 3
  digitalWrite(ledRed1, LOW);
  digitalWrite(ledYellow1, HIGH);
  digitalWrite(ledGreen1, LOW);
  delay(600);

  // Phase 4
  digitalWrite(ledRed1, HIGH);
  digitalWrite(ledYellow1, LOW);
  digitalWrite(ledGreen1, LOW);
  delay(400);

  // FEUX_TRICOLORE 2

  // Phase 1
  digitalWrite(ledRed2, HIGH);
  digitalWrite(ledYellow2, LOW);
  digitalWrite(ledGreen2, LOW);
  delay(1000); 

  // Phase 2
  digitalWrite(ledRed2, LOW);
  digitalWrite(ledYellow2, LOW);
  digitalWrite(ledGreen2, HIGH);
  delay(1000); 

  // Phase 3
  digitalWrite(ledRed2, LOW);
  digitalWrite(ledYellow2, HIGH);
  digitalWrite(ledGreen2, LOW);
  delay(600);

  // Phase 4
  digitalWrite(ledRed2, HIGH);
  digitalWrite(ledYellow2, LOW);
  digitalWrite(ledGreen2, LOW);
  delay(400); 
}

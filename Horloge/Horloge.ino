#include <TM1637Display.h>
#include <TimerOne.h>

#define CLK A5
#define DIO A4


TM1637Display display(CLK, DIO);


int heures = 10;
int minutes = 59;
bool colonVisible = true; 


void updateDisplay() {
  
  if (colonVisible) {
    display.showNumberDecEx(heures * 100 + minutes, 0b01110000, true); 
  } else {
    display.showNumberDecEx(heures * 100 + minutes, 0b00110000, true); 
  }
}


void tick() {
  colonVisible = !colonVisible; 
  updateDisplay();
}

void setup() {
  
  Serial.begin(9600);
  display.setBrightness(0x0f);

  Timer1.initialize(1000000); 
  Timer1.attachInterrupt(tick);

  
  updateDisplay();
}

void loop() {
  
}

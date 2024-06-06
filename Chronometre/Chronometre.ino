#include <TM1637Display.h>
#include <TimerOne.h>

#define CLK A5
#define DIO A4


TM1637Display display(CLK, DIO);

int secondes = 0;
int tenths = 0;
bool colonVisible = true; 

void updateDisplay() {
  
  int displayTime = secondes * 100 + tenths * 33; 
  if (colonVisible) {
    display.showNumberDecEx(displayTime, 0b01000000, true); 
  } else {
    display.showNumberDecEx(displayTime, 0, true); 
  }
}


void tick() {
  colonVisible = !colonVisible; 
  updateDisplay();

  tenths++;

  if (tenths >= 3) {
    tenths = 0;
    secondes++;
  }
}

void setup() {
  
  Serial.begin(9600);
  display.setBrightness(0x0f);

  Timer1.initialize(333333); 
  Timer1.attachInterrupt(tick);

  updateDisplay();
}

void loop() {
  
}

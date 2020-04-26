#include <SevenSegments.h>

SevenSegments segment = SevenSegments(22,23,24,25,26,27,28,29);
void setup() {
  // put your setup code here, to run once:
  
}

void loop() {
  segment.clear();
  // put your main code here, to run repeatedly:
  segment.printNumber(6);
  delay(1000);
  segment.printNumber(5);
  delay(1000);
  segment.printNumber(4);
  delay(1000);
  segment.printNumber(3);
  delay(1000);
  segment.printNumber(2);
  delay(1000);
  segment.printNumber(1);
  delay(1000);
  segment.printNumber(0);
  delay(1000);
  segment.blinkDP(200);
  segment.blinkDP(200);
}

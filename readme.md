# SevenSegments Version: 1.1.0 


This is an Arduino library to manage common cathode seven segments displays.

This library provides the capability to manage common cathode seven segments displays like 5161AS. It's an easy-to-use library.

# USAGE.

On this repo you can find an .ino example that makes a countdown using this library 

 
	#include <SevenSegments.h>

	SevenSegments segment = SevenSegments(22,23,24,25,26,27,28,29);
	void setup() {
  	// put your setup code here, to run once:
 	 
	}

	void loop() {
  	segment.clear();
  	segment.printNumber(9);
  	delay(1000);
 	segment.printNumber(8);
  	delay(1000);
  	segment.printNumber(7);
  	delay(1000);
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

# BE MY PATRON.

Help me to continue coding.

https://www.patreon.com/dguisadom


# CHANGELOG.

* 1.1.0  (27/April/2020): 
        * Fixed number limitation on printNumber(int number) method. 
        * Added the posibility to enable DP on printNumber method.

* 1.0.0  (26/April/2020): 
	* First release. Full functional to print numbers on a seven segment common cathode display.

Copyright David Guisado 2020.

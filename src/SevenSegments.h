#ifndef SevenSegments_h
#define SevenSegments_h

#include "Arduino.h"

#define A_MASK 1
#define B_MASK 2
#define C_MASK 4
#define D_MASK 8
#define E_MASK 16
#define F_MASK 32
#define G_MASK 64
#define DP_MASK 128

const static byte CHARACTERS[] = {
    B00111111,
    B00000110,
    B01011011,
    B01001111,
    B01100110,
    B01101101,
    B01111101,
    B00000111,
    B01111111,
    B01101111
};
class SevenSegments
{
private:
    int pinsConfiguration[8];
    byte currentValue;
public:
    SevenSegments(int A,int B, int C, int D, int E, int F, int G, int DP);
    void blinkDP(int milliseconds = 500);
    void lightAll();
    void clear();
    void printNumber(int number, bool dpEnabled = false);
    void turnDPOn();
    void turnDPOff();
};
#endif

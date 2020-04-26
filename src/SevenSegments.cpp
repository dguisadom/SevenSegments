#include "SevenSegments.h"
#include "Arduino.h"

SevenSegments::SevenSegments(int A,int B, int C, int D, int E, int F, int G, int DP){
    pinsConfiguration[0] = A;
    pinsConfiguration[1] = B;
    pinsConfiguration[2] = C;
    pinsConfiguration[3] = D;
    pinsConfiguration[4] = E;
    pinsConfiguration[5] = F;
    pinsConfiguration[6] = G;
    pinsConfiguration[7] = DP;
    for (int i = 0; i < 8; i++)
    {
        pinMode(pinsConfiguration[i],OUTPUT);
        pinMode(LED_BUILTIN,OUTPUT);
    }
    clear();
}

void SevenSegments::blinkDP(int milliseconds = 500){
    turnDPOn();
    delay(milliseconds);
    turnDPOff();
    delay(milliseconds);
}
void SevenSegments::lightAll(){
    for (int i = 0; i < 6; i++)
    {
        digitalWrite(pinsConfiguration[i],HIGH);
    }
}

void SevenSegments::clear(){
    for (int i = 0; i < 8; i++)
    {
        digitalWrite(pinsConfiguration[i],LOW);
    }
}
void SevenSegments::printNumber(int number){
    byte position = B00000001;
    for (int i = 0; i < 7; i++)
    {
        digitalWrite(pinsConfiguration[i],(CHARACTERS[number] & position? HIGH : LOW));
        position = position << 1;
    }
}
void SevenSegments::turnDPOn(){
    digitalWrite(pinsConfiguration[7],HIGH);
}
void SevenSegments::turnDPOff(){
    digitalWrite(pinsConfiguration[7],LOW);
}
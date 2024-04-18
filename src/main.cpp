#include <Arduino.h>
#include "badapple.h"

void setup()
{
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  analogWriteFrequency(2);
}
void loop()
{
badapple();

}

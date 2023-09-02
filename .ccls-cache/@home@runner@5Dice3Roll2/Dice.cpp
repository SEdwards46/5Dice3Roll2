#include "Dice.h"
#include <iostream>
using namespace std;

int Dice::rollDie(){
  sides = rand() % 6 + 1;
  return sides;
}

int Dice::value(){
  return sides;
}

Dice::Dice(){
  sides = 0;
}
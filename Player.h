#include <iostream>
using namespace std;
#include "Dice.h"

class Player{

private:
string name;
Dice bones[5];
int total{};
int currentRoll{};
void roll();
void reRoll(int i);

public:
int getTotal();
void showRoll();
void rollAgain();
void startGame();
string lower_str(string basicString);

};
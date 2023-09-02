#include <iostream>
using namespace std;
#include <ctime>
#include "Player.h"

int main() {
  srand(time(NULL));

  Player fun;
  fun.startGame();

  return 0;
}
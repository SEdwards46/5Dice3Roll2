#include "Player.h"
#include <iostream>
using namespace std;


void Player::roll(){
  for(auto &currentDie: bones){
    currentDie.rollDie();
  }
}

void Player::showRoll(){
  cout << "      Round: " << currentRoll + 1 << endl;
  for(auto &currentDie: bones){
    
  }
  cout << "\n" << " ";
  for (auto &currentDie: bones){
    cout << currentDie.value() << " ";
  }
  cout << "\nYour total is: " << getTotal() << endl;
  }
 
int Player::getTotal() {
  total = 0;
  for(auto &currentDie: bones){
    total += currentDie.value();
  }
  return total;
}

void Player::rollAgain(){
  showRoll();
  if(currentRoll >= 2){
    cout << "Thanks for playing" << endl;
    return;
  }
  string again;
  cout <<"Roll again? yes or no?" << endl;
  cin >> again;

  if(lower_str(again) == "yes"){
    int r;
    cout << "How many die to reroll?" << endl;
    cin >> r;

    for(int i = 0; i < r; i++){
      int answer;
      cout << "Which dies to reroll?" << endl;
      cin >> answer;
      reRoll(answer - 1);
    }
  } else if(lower_str(again) == "no"){
    cout << "Thanks for playing" << endl;
    exit(0);
  } else{
    cout << "You typed incorrectly, type yes or no" << endl;
    rollAgain();
  }
  currentRoll++;
  rollAgain();
}

string Player::lower_str(string str){
  return str;
}

void Player::reRoll(int i){
  bones[i].rollDie();
}

void Player::startGame(){
  cout << "Press enter to roll" << endl;
  cin.get();
  currentRoll = 0;
  roll();
  rollAgain();
}
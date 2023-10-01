//this cpp file is derived from the Kira enemy class


#include <iostream>
#include <chrono>
#include <unistd.h>
using namespace std;
#include "Kira.h"
#include "Character.h"

Character* Kira::getCharacter() {
  return character;
}

Kira::Kira(string _name, int _lvl, int _hp, int _atk, int _xp) : Character(_name, _lvl, _hp, _atk, _xp) {}

void Kira::heal() {
  int healing = 0.01 * getHealth(); //10% of current health
  //increase health by healing amount
  health += healing;
  cout << "Kira healed himself for " << healing << " points by using the power of the Death Note." << endl;
  sleep(1);
}

void Kira::standardAttack(Character& other) {
  int damage = 0.1 * getAttack();
  cout << "Kira has decided to write more names in the Death Note and dealt " << damage << " damage." << endl;
  sleep(1);
  setHealth(getHealth() - 100);
  other.setHealth((other.getHealth()) - damage);
  cout << endl;
}

//taking damage
void Kira::takeDamage(int damage) {
  health -= damage;
  if(health < 0) {
    health = 0;
  }
}

void Kira::gainLevel(){}
void Kira::gainXp(){}
void Kira::Special1(Character& kira) {
  cout << "test" << endl;
}
void Kira::Special2(Character& kira) {
  cout << "test" << endl;
}

void Kira::printInfo() {
  cout << "Kira's stats:" << endl;
  cout << "HP: " << getHealth() << "/" << getMaxHealth() << endl;
  cout << "ATK: " <<getAttack() << "/" << getMaxAttack() << endl;
  cout << endl;
}

void Kira::specialAttack(Character& target) {
  int damage = getAttack() * .1;
  target.setHealth(target.getHealth()  - damage);
  cout << "Kira has foiled your investigation! Dealt " << damage << " damage." << endl;
}

//this class derives from LightYagami header file and includes the Character class

#include <chrono>
#include <unistd.h>
#include <iostream>
#include <fstream>
using namespace std;
#include "LightYagami.h"

//pointer declaration
/*Character* Light::getCharacter() {
  return character;
}*/

//overloaded constructor
Light::Light(const string _name, int _lvl, int _health, int _attack, int _exp, int a) : Character(_name, _lvl, _health, _attack, _exp) {
  agility = a;
}


//setter and getter
void Light::setAgility(int agility) {
  this->agility = agility;
}
int Light::getAgility() {
  return agility;
}

//justice function
void Light::Special1(Character& kira) {
  agility += 100;
  cout << "Light gained " << agility << " agility and cut Kira's HP by 1/4." << endl;
  sleep(1);
  kira.setHealth((kira.getHealth()) - getAttack()*.25);
}

//gaslight function
void Light::Special2(Character& kira) {
  //increase Light's attack by the amount of agility gained from Justice
  agility -= 50;
  cout << "Light's attack increased through agility." << endl;
  sleep(1);
  kira.setHealth((kira.getHealth()) - (getAttack() * .3));
}

void Light::standardAttack(Character& kira) {
  setHealth(getHealth() - 100);
  kira.setHealth((kira.getHealth()) - (getAttack() * .1));
  cout << "You and Light found a clue during your excursion. You dealt " << getAttack() * .1 << " damage." << endl;
}

void Light::gainLevel() {
  setLevel(getLevel() + 1);
}

void Light::saveToFile(string filename) {
  ofstream fout(filename);
  fout << agility << endl;
  Character::saveToFile(filename);
  cout << "Saving Progress..." << endl;
  fout.close();
}

void Light::loadFromFile(string filename) {
  ifstream fin(filename);
  fin >> agility;
  Character::loadFromFile(filename);
  cout << "Loading Progress..." << endl;
  fin.close();
}

void Light::printInfo() {
  cout << getName() << ", Light's stats:" << endl;
  cout << "HP: " << getHealth() << "/" << getMaxHealth() << endl;
  cout << "ATK: " <<getAttack() << "/" << getMaxAttack() << endl;
  cout << "Agility: " << getAgility() << endl;
  cout << endl;
}

void Light::gainXp() {
  setExp(getExp() + (getNeededExp() * .10));
  if(getExp() >= getNeededExp()) {
    gainLevel();
    cout << "You have leveled up to level " << getLevel() << endl;
    setExp(getExp() - getNeededExp());
    setNeededExp(getNeededExp() + (getLevel() * 50));
  }
  cout << "XP: " << getExp() << endl;
}

//kira
void Light::specialAttack(Character& target) {
  cout << "test" << endl;
}

//heal
void Light::heal() {
  cout << "Light found some clues with you." << endl;
  int healing = getMaxHealth() * 0.2;
  health += healing;
  if(health > getMaxHealth()) {
    health = getMaxHealth();
  }
}

//this class derives from LightYagami header file and includes the Character class

#include <chrono>
#include <unistd.h>
#include <iostream>
#include <fstream>
using namespace std;
#include "L.h"
#include "Character.h"

//pointer declaration
/*Character* L::getCharacter() {
  return character;
}*/

//overloaded constructor
L::L(const string _name, int _lvl, int _health, int _attack, int _exp, int i) : Character(_name, _lvl, _health, _attack, _exp) {
  intelligence = i;
}


//setter and getter
void L::setIntelligence(int intelligence) {
  this->intelligence = intelligence;
}
int L::getIntelligence() {
  return intelligence;
}

void L::Special1(Character& kira) {
  intelligence += 150;
  cout << "L gained 150 intelligence and is striking at Kira!" << endl;
  sleep(1);
  kira.setHealth(kira.getHealth() - (getAttack() * .1));
}

void L::Special2(Character& kira) {
  intelligence -= 100;
  cout << "L used 100 damage to deal " << (getAttack() * .15) << " damage" << endl;
  sleep(1);
  kira.setHealth((kira.getHealth()) - (getAttack() * .15));
  setHealth(getHealth() - getAttack());
}

void L::standardAttack(Character& kira) {
  setHealth(getHealth() - 50);
  kira.setHealth((kira.getHealth()) - (getAttack() * .35));
  cout << "L was able to lure Kira into a trap! You dealt " << getAttack() * .15 << " damage." << endl;
}

void L::gainLevel() {
  setLevel(getLevel() + 1);
}

void L::saveToFile(string filename) {
  ofstream fout(filename);
  fout << intelligence << endl;
  Character::saveToFile(filename);
  cout << "Saving Progress..." << endl;
  fout.close();
}

void L::loadFromFile(string filename) {
  ifstream fin(filename);
  fin >> intelligence;
  Character::loadFromFile(filename);
  cout << "Loading Progress..." << endl;
  fin.close();
}

void L::printInfo() {
  cout << getName() << ", L's stats:" << endl;
  cout << "HP: " << getHealth() << "/" << getMaxHealth() << endl;
  cout << "ATK: " <<getAttack() << "/" << getMaxAttack() << endl;
  cout << "Intelligence: " << getIntelligence() << endl;
  cout << endl;
}

void L::gainXp() {
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
void L::specialAttack(Character& target) {
  cout << "test" << endl;
}

//heal
void L::heal() {
  cout << "L is close to finding out who Kira is." << endl;
  int healing = getMaxHealth() * 0.2;
  health += healing;
  if(health > getMaxHealth()) {
    health = getMaxHealth();
  }
}

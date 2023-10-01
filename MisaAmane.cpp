//this class derives from LightYagami header file and includes the Character class

#include <chrono>
#include <unistd.h>
#include <iostream>
#include <fstream>
using namespace std;
#include "MisaAmane.h"
#include "Character.h"

//pointer declaration
/*Character* L::getCharacter() {
  return character;
}*/

//overloaded constructor
Misa::Misa(const string _name, int _lvl, int _health, int _attack, int _exp, int s) : Character(_name, _lvl, _health, _attack, _exp) {
  speed = s;
}


//setter and getter
void Misa::setSpeed(int speed) {
  this->speed = speed;
}
int Misa::getSpeed() {
  return speed;
}

void Misa::Special1(Character&) {
  int hpIncrease = 10; // Increase in HP for one round
  int speedIncrease = 50; // Increase in speed attribute
  
  // Increase HP and set flag for one round
  health += hpIncrease;
  
  // Increase speed attribute
  speed += speedIncrease;
  cout << "Your HP decreased by 10 but you gained 50 speed." << endl;
  sleep(1);
}

void Misa::Special2(Character& kira) {
  if(speed >= 100) {
    speed -= 50;
    cout << "Misa used Loving Streak and has dealt " << (getAttack() * 5) << " damage!" << endl;
    sleep(1);
    kira.setHealth((kira.getHealth()) - (getAttack() * .5));
  }
}

void Misa::standardAttack(Character& kira) {
  setHealth(getHealth() - 50);
  kira.setHealth((kira.getHealth()) - (getAttack() * .1));
  cout << "Misa's ad was a success! You dealt " << getAttack() * .1 << " damage." << endl;
}

void Misa::gainLevel() {
  setLevel(getLevel() + 1);
}

void Misa::saveToFile(string filename) {
  ofstream fout(filename);
  fout << speed << endl;
  Character::saveToFile(filename);
  cout << "Saving Progress..." << endl;
  fout.close();
}

void Misa::loadFromFile(string filename) {
  ifstream fin(filename);
  fin >> speed;
  Character::loadFromFile(filename);
  cout << "Loading Progress..." << endl;
  fin.close();
}

void Misa::printInfo() {
  cout << getName() << ", Misa's stats:" << endl;
  cout << "HP: " << getHealth() << "/" << getMaxHealth() << endl;
  cout << "ATK: " <<getAttack() << "/" << getMaxAttack() << endl;
  cout << "Speed: " << getSpeed() << endl;
  cout << endl;
}

void Misa::gainXp() {
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
void Misa::specialAttack(Character& target) {
  cout << "test" << endl;
}

//heal
void Misa::heal() {
  cout << "Misa went on a date with Light and is now energized and ready to go!" << endl;
  int healing = getMaxHealth() * 0.2;
  health += healing;
  if(health > getMaxHealth()) {
    health = getMaxHealth();
  }
}

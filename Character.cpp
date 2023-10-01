//this cpp file derives from the Character header file
#include <iostream>
#include <random>
#include <fstream>
using namespace std;
#include "Character.h"
#include "Kira.h"

//default and overloaded constructors
Character::Character() {
  name = "";
  level = 1; //starting level
  health = 1000; //hp starts at 1000
  exp = 0; //start at 0 exp
  attack = 1000; //attack starts at 1500
  type = "";
  maxHealth = health;
  maxAttack = attack;
}

Character::Character(string n, int l, int hp, int atk, int xp) {
  this->name = n;
  this->level = l;
  this->health = hp;
  maxHealth = hp;
  this->attack = atk;
  maxAttack = atk;
  this->exp = xp;
}


//setters and getters for the private variables
void Character::setName(string name) {
  this->name = name;
}
string Character::getName() {
  return name;
}
void Character::setType(string type) {
  this->type = type;
}
string Character::getType() {
  return type;
}
void Character::setLevel(int level) {
  this->level = level;
}
int Character::getLevel() {
  return level;
}
void Character::setExp(int exp) {
  this->exp = exp;
}
int Character::getExp() {
  return exp;
}
void Character::setHealth(int health) {
  this->health = health;
}
int Character::getHealth() {
  return health;
}
void Character::setAttack(int attack) {
  this->attack = attack;
}
int Character::getAttack() {
  return attack;
}
void Character::setCombatOption(int combat) {
  combatOption = combat;
}
int Character::getCombatOption() {
  return combatOption;
}
void Character::setNeededExp(int neededExp) {
  this->neededExp = neededExp;
}
int Character::getNeededExp() {
  return neededExp;
}
void Character::setMaxHealth(int maxHealth) {
  this->maxHealth = maxHealth;
}
int Character::getMaxHealth() {
  return maxHealth;
}
void Character::setMaxAttack(int maxAttack) {
  this->maxAttack = maxAttack;
}
int Character::getMaxAttack() {
  return maxAttack;
}

//general functions

//standard attack ptr to Kira to access attack and use random number generator to scale based off level 0 to 1 * .01 * atk

/*void Character::standardAttack(Character& kira) {
  //cout << "You dealt " << attack * 0.1 << " damage!" << endl; 
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> damageDist(attack * (0.5 + (level - 1) * 0.2), attack * (1.0 + (level - 1) * 0.2));
  int damage = damageDist(gen);

  //apply damage to enemy class (not implemented)
  kira.getAttack(damage);
}
*/

//heal function
//In the heal() function, we use an if/else if statement to check what type of character is healing, and then heal them for a different amount based on their type. We then make sure that their health does not exceed the maximum of 1000.
/*void Character::heal() {
  if(type == "Light") {
    health += 100;
    cout << "Light solved the case! Gained 100 health." << endl;
  }
  else if(type == "L") {
    health += 150;
    cout << "L is close to finding who Kira is. Gained 150 health." << endl;
  }
  else if(type == "Misa") {
    health += 200;
    cout << "Misa went on a date with Light. Gained 200 health." << endl;
  }
}*/

//gainXP to level up
/*void Character::gainXp() {
  int xpNeeded = 100 * level;
  exp += xpNeeded;
  if(exp >= xpNeeded) {
    level++;
    if(type == "Light") {
      attack += 150; //increase attack by 150
      health += 100; //increase health by 100
      cout << name << ", Light Yagami aced his exam and is now at level " << level << "!" << endl;
    }
    else if(type == "L") {
      attack += 200; //increase atk by 200
      health += 50; //increase health by 50
      cout << name << ", L solved a case and leveled up to level " << level << "!" << endl;
    }
    else if(type == "Misa") {
      attack += 100;
      health += 150;
      cout << name << ", Misa Amane had a successful runway and is now at level " << level << "!" << endl;
    }
  }
}
*/

void Character::gainLevel() {
  setLevel(getLevel() + 1);
}

//file I/O functions
void Character::saveToFile(string file) {
  ofstream fout(file);
  fout << name << endl;
  fout << type << endl;
  fout << "Level: " << level << endl;
  fout << "EXP: " << exp << endl;
  fout << "HP remaining: " << health << endl;
  fout << "ATK: " << attack << endl;
  fout << combatOption << endl;

  cout << "Saving Progress..." << endl;
  fout.close();
}

void Character::loadFromFile(string file) {
  ifstream fin(file);
  fin >> name;
  fin >> type;
  fin >> level;
  fin >> exp;
  fin >> health;
  fin >> attack;
  fin >> combatOption;

  cout << "Loading Progress..." << endl;
  fin.close();
}

//special attack names
string Character::getSpecialAttack1Name() {
  if(type == "Light") {
    return "Justice";
  }
  if(type == "L") {
    return "Intel";
  }
  if(type == "Misa") {
    return "Quick Attack";
  }
}

string Character::getSpecialAttack2Name() {
  if(type == "Light") {
    return "Gaslight";
  }
  if(type == "L") {
    return "Final Cut";
  }
  if(type == "Misa") {
    return "Quick Strike";
  }
}

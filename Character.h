#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>
using namespace std;

//this is the main Character class that all Character types will derive from

class Kira;

class Character {
protected: 
//private variables should include simple game mechanics, such as LVL, HP, XP and ATK
/* 
LVL will be used to level up the player when a certain amount of XP is gained
HP will be used as the base of to determine whether you win or lose - 0 HP you lose, 0 HP enemy you win
XP is the experience you gain in order to level up
ATK is used to inflict damage on the enemy
NAME will be the player's name
TYPE will be the type of character that's deriving from the class
*/

  string name;
  int level;
  int health;
  int exp;
  int attack;
  string type;
  int combatOption;

  int maxAttack;
  int maxHealth;
  int neededExp;

//private:
  Kira* kira;

public:
//we need a default and overloaded constructor
  Character();
  Character(string, int, int, int, int);

//we need setters and getters for each game mechanic
  void setName(string);
  string getName();
  void setLevel(int);
  int getLevel();
  void setHealth(int);
  int getHealth();
  void setExp(int);
  int getExp();
  void setAttack(int);
  int getAttack();
  void setType(string);
  string getType();
  void setCombatOption(int);
  int getCombatOption();
  void setNeededExp(int);
  int getNeededExp();
  void setMaxHealth(int);
  int getMaxHealth();
  void setMaxAttack(int);
  int getMaxAttack();

//we need general functions that all the characters will use
  virtual void heal() {}; //this funct is used to heal the character -> menu option when battling
  virtual void gainXp() = 0; //this funct is used to gain xp after an attack
  virtual void printInfo() = 0;
  
//combat functions
  virtual void standardAttack(Character&) = 0; //all characacters have a standard attack -> menu option during combat
  virtual void gainLevel() = 0; //leveling up based on exp
  
//file I/O functions
  void saveToFile(string);
  void loadFromFile(string);
  
//each character has 2 special attacks
  virtual string getSpecialAttack1Name();
  virtual string getSpecialAttack2Name();

//combat functions
  virtual void Special1(Character& kira) = 0;
  virtual void Special2(Character& kira) = 0;

//Light specific
  void setAgility(int) {};
  int getAgility() {return 0;};

//L specific
  void setIntelligence(int) {};
  int getIntelligence() {return 0;};

//Misa specific
  void setSpeed(int) {};
  int getSpeed() {return 0;};

//Kira specific
  virtual void specialAttack(Character& target) = 0;
};

#endif

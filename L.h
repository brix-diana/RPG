//this is a derived class from Character

#ifndef L_H
#define L_H

#include <iostream>
using namespace std;

#include "Character.h"

class L : public Character {
private:
//we need a special attribute for him, which is intelligence
int intelligence;

//we might need a pointer to Character class
//Character* character;

public:
//overloaded constructor
L(string, int, int, int, int, int);

//Character* getCharacter();

//setter and getter
void setIntelligence(int);
int getIntelligence();

//special attacks
void Special1(Character&); //intel
void Special2(Character&); //final cut

void standardAttack(Character&);
void gainXp();
void gainLevel();
void printInfo();
void heal();

//kira
void specialAttack(Character&);

void saveToFile(string);
void loadFromFile(string);
};

#endif

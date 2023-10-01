//this is a derived class from Character

#ifndef LIGHT_YAGAMI_H
#define LIGHT_YAGAMI_H

#include <iostream>
using namespace std;

#include "Character.h"

class Light : public Character {
private:
//we need a special attribute for him, which is agility
int agility;

//we might need a pointer to Character class
//Character* character;

public:
//overloaded constructor
Light(string, int, int, int, int, int);

//Character* getCharacter();

//setter and getter
void setAgility(int);
int getAgility();

//special attacks
void Special1(Character&); //justice
void Special2(Character&); //gaslight

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

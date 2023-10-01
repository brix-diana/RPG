//this is a derived class from Character

#ifndef MISA_H
#define MISA_H

#include <iostream>
using namespace std;

#include "Character.h"

class Misa : public Character {
private:
//we need a special attribute for him, which is intelligence
int speed;

//we might need a pointer to Character class
//Character* character;

public:
//overloaded constructor
Misa(string, int, int, int, int, int);

//Character* getCharacter();

//setter and getter
void setSpeed(int);
int getSpeed();

//special attacks
void Special1(Character&); //quick attack
void Special2(Character&); //loving streak

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

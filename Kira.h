//this class is the Enemy class that also derives from the Character class in order to access the attributes
#ifndef KIRA_H
#define KIRA_H

#include <iostream>
#include <string>
using namespace std;

#include "Character.h"
class Character;

class Kira : public Character {
private:
Character* character;

public:
class Character* getCharacter();

Kira(string, int, int, int, int);

//we need simple combat functions, such as healing and attacking

void heal(); //allows Kira to heal himself if not attack has been done
void standardAttack(Character&); //Kira's normal attack

//taking damage
void takeDamage(int);

//we need a special attack if a character doesn't do enough damage 
void specialAttack(Character&);
void gainLevel();
void gainXp();
void printInfo();

void Special1(Character&);
void Special2(Character&);
};

#endif

#ifndef WEAPON_H
#define WEAPON_H

#include"character.h"

struct Weapon
{
	string critRange;
	string type;
	string damageRoll;
	string enchant;
	string special;
	int critType;
	int range;
	int weight;
};

#endif
#ifndef ARMOR_H
#define ARMOR_H

#include"weapon.h"

struct Armor
{
	string enchant;
	string enchantInfo;
	string type;
	int acBonus;
	int mDexBonus;
	int acPenalty;
	int speed;
	int weight;
	double spellFailCh;
};

#endif
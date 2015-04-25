/*
Author:        Ian Garland, Kody Greeley, Zachary Miller
Class:         Advanced Programming- CSI-240-05- Miller Information Commons, Room 308
Assigment:     Final Project
Date Assigned: 3/23/15
Due Date:      4/26/15 at 11:59pm

Discription:   The purpose of this lab is to 

Certification of Authenticity:
   I certify that this is entirely my own work, except where I have given fully-
   documented references to the work of others. I understand the definition and
   consequences of plagiarism and acknowledge that the assessor of this assignment
   may, for the purpose of assessing this assignment:
      - Reproduce this assignment and provide a copy to another member of
        academic staff; and/or
      - Communicate a copy of this assignment to a plagiarism checking service
        (which may then retain a copy of this assignment on its database for
        the purpose of future plagiarism checking)
*/

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

	Armor();
	Armor(string e, string ei, string t, int a, int md, int ac, int s, int w, double sfc);
	Armor(const Armor &a);
	~Armor();

	void setEnchant(string e);
	void setEnchInfo(string ei);
	void setType(string t);
	void setACBon(int a);
	void setMDex(int md);
	void setACPen(int ac);
	void setSpeed(int s);
	void setWeight(int w);
	void setSpellFail(double sfc);

	string getEnchant();
	string getEchInfo();
	string getType();
	int getACBon();
	int getMDex();
	int getACPen();
	int getSpeed();
	int getWeight();
	double getSpellFail();
};

#endif
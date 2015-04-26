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

#ifndef WEAPON_H
#define WEAPON_H

#include"character.h"

struct Weapon
{
	
	string damageRoll;
	string enchant;
	string name;
	string special;
	string type;
	int critRange[2];
	int critType;
	int range;
	int weight;

	Weapon();
	Weapon(int c[], string d, string e,string n, string s, string t, int cr, int r, int w);
	Weapon(const Weapon &w);
	~Weapon();


	void setCritRange(int c[]);
	void setCritType(int cr);
	void setDamageRoll(string d);
	void setEnchant(string e);
	void setName(string n);
	void setRange(int r);
	void setSpecial(string s);
	void setWeight(int w);
	void setType(string t);
	
	string getDamageRoll();
	string getEnchant();
	string getName();
	string getSpecial();
	string getType();
	int getCritRange(int i);
	int getCritType();
	int getRange();
	int setWeight();

};

#endif

/*
Author:         Ian Garland, Kody Greeley, Zachary Miller
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

#include "weapon.h"


//Purpose: default constructor
//Pre: none
//Post: makes default constructor
//Cite: 
//Author: Zach M,  
Weapon::Weapon()
{

	damageRoll = "";
	enchant = "";
	name = "";
	special = "";
	type = "";

	for (int i = 0; i < 2; i++)
		critRange[i] = 0;

	critType = 0;
	range = 0;
	weight = 0;
}

//Purpose: simple constructor
//Pre: none
//Post: makes simple constructor
//Cite: 
//Author: Zach M,  
Weapon::Weapon(int critRange[], string d, string e, string n, string s, string t, int cr, int r, int w)
{
	damageRoll = d;
	enchant = e;
	name = n;
	special = s;
	type = t;
	this->critRange[2] = critRange[2];
	critType = cr;
	range = r;
	weight = w;
}

//Purpose: copy constructor
//Pre: none
//Post: makes one instance of Weapon into another
//Cite: 
//Author: Zach M,  
Weapon::Weapon(const Weapon &w)
{
	damageRoll = w.damageRoll;
	enchant = w.enchant;
	name = w.name;
	special = w.special;
	type = w.type;
	critRange[2] = w.critRange[2];
	critType = w.critType;
	range = w.range;
	weight = w.weight;
}
//Purpose: destructor
//Pre: none
//Post: destruct-inates
//Cite: 
//Author: Zach M,  
Weapon::~Weapon(){}


//Purpose: sets values of critical range
//Pre: input value
//Post: sets value of critical range
//Cite: 
//Author: Zach M,  
void Weapon::setCritRange(int c[])
{
	for (int i = 0; i < 2; i++)
		critRange[i] = c[i];
}

//Purpose: sets crit type
//Pre: input value
//Post: sets value of crit type
//Cite: 
//Author: Zach M,
void Weapon::setCritType(int cr)
{
	 critType= cr;
}

//Purpose: sets number of Weapons
//Pre: input value
//Post: sets value of number of Weapons
//Cite: 
//Author: Zach M,
void Weapon::setDamageRoll(string d)
{
	damageRoll = d;
}

//Purpose: sets enchant
//Pre: input value
//Post: sets value of enchant
//Cite: 
//Author: Zach M,
void Weapon::setEnchant(string e)
{
	enchant = e;
}

//Purpose: sets name
//Pre: input value
//Post: sets value of name
//Cite: 
//Author: Zach M,
void Weapon::setName(string n)
{
	name = n;
}

//Purpose: sets range
//Pre: input value
//Post: sets value of range
//Cite: 
//Author: Zach M,
void Weapon::setRange(int r)
{
	range = r;
}

//Purpose: sets special
//Pre: input value
//Post: sets value of special
//Cite: 
//Author: Zach M,
void Weapon::setSpecial(string s)
{
	special = s;
}

//Purpose: sets weight
//Pre: input value
//Post: sets value of weight
//Cite: 
//Author: Zach M,
void Weapon::setWeight(int w)
{
	weight = w;
}

//Purpose: sets type
//Pre: input value
//Post: sets value of type
//Cite: 
//Author: Zach M,
void Weapon::setType(string t)
{
	type = t;
}

//Purpose: gets damage roll
//Pre: none
//Post: returns value of damage roll
//Cite: 
//Author: Zach M,
string Weapon::getDamageRoll()
{
	return damageRoll;
}

//Purpose: gets enchant
//Pre: none
//Post: returns value of enchant
//Cite: 
//Author: Zach M,
string Weapon::getEnchant()
{
	return enchant;
}

//Purpose: gets name
//Pre: none
//Post: returns value of name
//Cite: 
//Author: Zach M,
string Weapon::getName()
{
	return name;
}

//Purpose: gets special
//Pre: none
//Post: returns special
//Cite: 
//Author: Zach M,
string Weapon::getSpecial()
{
	return special;
}

//Purpose: gets type
//Pre: none
//Post: returns value of type
//Cite: 
//Author: Zach M,
string Weapon::getType()
{
	return type;

}

//Purpose: gets critical range
//Pre: input value
//Post: returns value of critical range
//Cite: 
//Author: Zach M,
int Weapon::getCritRange(int i)
{
	return critRange[i];
}

//Purpose: gets ctirical type
//Pre: none
//Post: returns value of critical type
//Cite: 
//Author: Zach M,
int Weapon::getCritType()
{
	return critType;
}

//Purpose: gets range
//Pre: none
//Post: returns value of range
//Cite: 
//Author: Zach M,
int Weapon::getRange()
{
	return range;
}

//Purpose: gets weight
//Pre: none
//Post: returns value of weight
//Cite: 
//Author: Zach M,
int Weapon::getWeight()
{
	return weight;
}


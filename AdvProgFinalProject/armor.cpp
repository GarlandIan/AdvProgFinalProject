/*
Author:        Ian Garland, Kody Greeley, Zachary Miller
Class:         Advanced Programming- CSI-240-05- Miller Information Commons, Room 308
Assigment:     Final Project
Date Assigned: 3/23/15
Due Date:      4/26/15 at 11:59pm

Description:   The purpose of this lab is to create base dice roll mechanics and loot generation for the Players (User) and Dungeon Master (Administrator)
of the popular fantasy role playing game known as Pathfinder.  It is to be used in partnership with the rest of the normal version of the game as it does not
retain every required action that players can possibly use in the game itself.  Using all the forumulas related to Player skills, there are various types of die
rolling.  Players receive different bonuses to their dice rolls from our already provided, generated character's skill statistics.  Players will be able to manage the
character's health, initiative role (who goes first in combat), attack role (if they would hit or miss/ how much damage they would do), save checks (the ability to
dodge something or take less damage), etc... As said earlier it is to be used to only perform these actions and the rest of the game still must be managed by the
Dungeon Master and Players regularly.  Players of this game understand the meaning of roles and Dungeon Masters are the ones who outside of this program determine
how the rolls effect the Players.

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
#include"armor.h"

//Purpose: Default constructor
//Pre: none
//Post: generates default constructer
//Cite: 
//Author: Ian 
Armor::Armor(){
	
	enchant = "";
	enchantInfo = "";
	type = "";
	acBonus = 0;
	mDexBonus = 0;
	acPenalty = 0;
	speed = 0;
	weight = 0;
	spellFailCh = 0.0;

}

//Purpose: simple constructor
//Pre: none
//Post: makes simple constructor
//Cite: 
//Author: Ian 
Armor::Armor(string e, string ei, string t, int a, int md, int ac, int s, int w, double sfc){

	enchant = e;
	enchantInfo = ei;
	type = t;
	acBonus = a;
	mDexBonus = md;
	acPenalty = ac;
	speed = s;
	weight = w;
	spellFailCh = sfc;

}

//Purpose: Copy constructor
//Pre: none
//Post: Makes a copy of one instance of armor a and copies it upon anoher
//Cite: 
//Author: Ian 
Armor::Armor(const Armor &a){

	enchant = a.enchant;
	enchantInfo = a.enchantInfo;
	type = a.type;
	acBonus = a.acBonus;
	mDexBonus = a.mDexBonus;
	acPenalty = a.acPenalty;
	speed = a.speed;
	weight = a.weight;
	spellFailCh = a.spellFailCh;

}

//Purpose: deconstructor
//Pre: none
//Post: deconstruct-inates
//Cite: 
//Author: Ian 
Armor::~Armor(){}

//Purpose: Set a value to enchant
//Pre: input value
//Post: sets a value to encant
//Cite: 
//Author: Ian 
void Armor::setEnchant(string e){

	enchant = e;

}

//Purpose: Set a value to enchant info
//Pre: input value
//Post: sets a value to encant info
//Cite: 
//Author: Ian 
void Armor::setEnchInfo(string ei){

	enchantInfo = ei;

}

//Purpose: Set a value to type
//Pre: input value
//Post: sets a value to type
//Cite: 
//Author: Ian 
void Armor::setType(string t){

	type = t;

}

//Purpose: Set a value to accuracybonus
//Pre: input value
//Post: sets a value to accuracyBonus
//Cite: 
//Author: Ian 
void Armor::setACBon(int a){

	acBonus = a;

}

//Purpose: Set a value to accuracy penalty
//Pre: input value
//Post: sets a value to accuracy pentalty
//Cite: 
//Author: Ian 
void Armor::setACPen(int ac){

	acPenalty = ac;

}

//Purpose: Set a value to mdexbonus
//Pre: input value
//Post: sets a value to mDexBOnus
//Cite: 
//Author: Ian 
void Armor::setMDex(int md){

	mDexBonus = md;

}

//Purpose: Set a value to speed
//Pre: input value
//Post: sets a value to speed
//Cite: 
//Author: Ian 
void Armor::setSpeed(int s){

	speed = s;

}

//Purpose: Set a value to weight
//Pre: input value
//Post: sets a value to weight
//Cite: 
//Author: Ian 
void Armor::setWeight(int w){

	weight = w;

}

//Purpose: Set a value to spellFailCh
//Pre: input value
//Post: sets a value to spellFailCh
//Cite: 
//Author: Ian 
void Armor::setSpellFail(double sfc){

	spellFailCh = sfc;

}

//Purpose: Retrieve  the value of enchant
//Pre: none
//Post: gets the value of enchant
//Cite: 
//Author: Ian 
string Armor::getEnchant(){

	return enchant;

}

//Purpose: Retrieve  the value of enchant info
//Pre: none
//Post: gets the value of enchant info
//Cite: 
//Author: Ian 
string Armor::getEchInfo(){

	return enchantInfo;

}

//Purpose: Retrieve  the value of type
//Pre: none
//Post: gets the value of type
//Cite: 
//Author: Ian 
string Armor::getType(){

	return type;

}

//Purpose: Retrieve  the value of accuracy bonus
//Pre: none
//Post: gets the value of accuracy bonus
//Cite: 
//Author: Ian 
int Armor::getACBon(){

	return acBonus;

}

//Purpose: Retrieve  the value of accuracy penalty
//Pre: none
//Post: gets the value of accuracy penalty
//Cite: 
//Author: Ian 
int Armor::getACPen(){

	return acPenalty;

}

//Purpose: Retrieve  the value of dexterity bonus
//Pre: none
//Post: gets the value of dexterity bonus
//Author: Ian 
int Armor::getMDex(){

	return mDexBonus;

}

//Purpose: Retrieve  the value of weight
//Pre: none
//Post: gets the value of weight
//Cite: 
//Author: Ian 
int Armor::getWeight(){

	return weight;

}

//Purpose: Retrieve  the value of spellFailCh
//Pre: none
//Post: gets the value of spellFailch
//Cite: 
//Author: Ian 
double Armor::getSpellFail(){

	return spellFailCh;

}

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
#include"armor.h"

//Purpose: Default constructor
//Pre: none
//Post: generates default constructer
//Cite: 
//Author: 
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
//Author: 
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
//Author: 
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
//Author: 
Armor::~Armor(){}

//Purpose: Set a value to enchant
//Pre: input value
//Post: sets a value to encant
//Cite: 
//Author: 
void Armor::setEnchant(string e){

	enchant = e;

}

//Purpose: Set a value to enchant info
//Pre: input value
//Post: sets a value to encant info
//Cite: 
//Author: 
void Armor::setEnchInfo(string ei){

	enchantInfo = ei;

}

//Purpose: Set a value to type
//Pre: input value
//Post: sets a value to type
//Cite: 
//Author: 
void Armor::setType(string t){

	type = t;

}

//Purpose: Set a value to accuracybonus
//Pre: input value
//Post: sets a value to accuracyBonus
//Cite: 
//Author: 
void Armor::setACBon(int a){

	acBonus = a;

}

//Purpose: Set a value to accuracy penalty
//Pre: input value
//Post: sets a value to accuracy pentalty
//Cite: 
//Author: 
void Armor::setACPen(int ac){

	acPenalty = ac;

}

//Purpose: Set a value to mdexbonus
//Pre: input value
//Post: sets a value to mDexBOnus
//Cite: 
//Author: 
void Armor::setMDex(int md){

	mDexBonus = md;

}

//Purpose: Set a value to speed
//Pre: input value
//Post: sets a value to speed
//Cite: 
//Author: 
void Armor::setSpeed(int s){

	speed = s;

}

//Purpose: Set a value to weight
//Pre: input value
//Post: sets a value to weight
//Cite: 
//Author: 
void Armor::setWeight(int w){

	weight = w;

}

//Purpose: Set a value to spellFailCh
//Pre: input value
//Post: sets a value to spellFailCh
//Cite: 
//Author: 
void Armor::setSpellFail(double sfc){

	spellFailCh = sfc;

}

//Purpose: Retrieve  the value of enchant
//Pre: none
//Post: gets the value of enchant
//Cite: 
//Author: 
string Armor::getEnchant(){

	return enchant;

}

//Purpose: Retrieve  the value of enchant info
//Pre: none
//Post: gets the value of enchant info
//Cite: 
//Author: 
string Armor::getEchInfo(){

	return enchantInfo;

}

//Purpose: Retrieve  the value of type
//Pre: none
//Post: gets the value of type
//Cite: 
//Author: 
string Armor::getType(){

	return type;

}

//Purpose: Retrieve  the value of accuracy bonus
//Pre: none
//Post: gets the value of accuracy bonus
//Cite: 
//Author: 
int Armor::getACBon(){

	return acBonus;

}

//Purpose: Retrieve  the value of accuracy penalty
//Pre: none
//Post: gets the value of accuracy penalty
//Cite: 
//Author: 
int Armor::getACPen(){

	return acPenalty;

}

//Purpose: Retrieve  the value of dexterity bonus
//Pre: none
//Post: gets the value of dexterity bonus
//Author: 
int Armor::getMDex(){

	return mDexBonus;

}

//Purpose: Retrieve  the value of weight
//Pre: none
//Post: gets the value of weight
//Cite: 
//Author: 
int Armor::getWeight(){

	return weight;

}

//Purpose: Retrieve  the value of spellFailCh
//Pre: none
//Post: gets the value of spellFailch
//Cite: 
//Author: 
double Armor::getSpellFail(){

	return spellFailCh;

}

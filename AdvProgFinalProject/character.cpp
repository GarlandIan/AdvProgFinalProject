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

#include"character.h"

//Purpose: defualt constructor
//Pre: none
//Post: makes defualt constuctor
//Cite: 
//Author: 
Character::Character(){
	for (int i = 0; i < aScoreSize; i++){
		abilScores[i] = 0;
		abilMod[i] = 0;
	}
	armorClass = 0;
	speed = 0;
	hp = 0;
	initiative = 0;
	for (int j = 0; j < saveSize; j++)
		saves[j] = 0;
	for (int k = 0; k< skillSize; k++)
		skills[k] = 0;
	alignment = "";
	race = "";
	name = "";
}

//Purpose: simple constructor
//Pre: none
//Post: makes simple constuctor
//Cite: 
//Author: 
Character::Character(int abil[], int abilM[], int armorC, int s, int hp, int init, int saves[], double skills[], string al, string r, string name)
{
	for (int i = 0; i < aScoreSize; i++){
		abilScores[i] = abil[i];
		abilMod[i] = abilM[i];
	}
	armorClass = armorC;
	speed = s;
	this->hp = hp;
	initiative = init;
	for (int j = 0; j < saveSize; j ++)
	{
		this->saves[j] = saves[j];
	}
	this->skills[skillSize] = skills[skillSize];
	alignment = al;
	race = r;
	this->name = name;

}

//Purpose: copy constructor
//Pre: none
//Post: makes one instance of Character upon another
//Cite: 
//Author: 
Character::Character(const Character &c)
{

	for (int i = 0; i < aScoreSize; i++){
		abilScores[i] = c.abilScores[i];
		abilMod[i] = c.abilMod[i];
	}
	armorClass = c.armorClass;
	speed = c.speed;
	hp = c.hp;
	initiative = c.initiative;
	saves[saveSize] = c.saves[saveSize];
	skills[skillSize] = c.skills[skillSize];
	alignment = c.alignment;
	race = c.race;
	name = c.name;

}

//Purpose: destructor
//Pre: none
//Post: destruct-inates
//Cite: 
//Author: 
Character::~Character(){
	for (int i = 0; i < aScoreSize; i++){
		abilScores[i] = 0;
		abilMod[i] = 0;
	}

	armorClass = 0;
	speed = 0;
	hp = 0;
	initiative = 0;
	for (int j = 0; j < saveSize; j++)
		saves[j] = 0;
	for (int k = 0; k< skillSize; k++)
		skills[k] = 0;
	alignment = "";
	race = "";
	name = "";
}

//Purpose: sets alignment
//Pre: input value
//Post: sets value of alignment
//Cite: 
//Author: 
void Character::setAlignment(string al){

	alignment = al;

}

//Purpose: sets ability scores
//Pre: input value
//Post: sets value of ability scores
//Cite: 
//Author: 
void Character::setAScores(int scores[]){

	for (int i = 0; i < 6; i++){
		abilScores[i] = scores[i];
	}

}

//Purpose: sets ability mods
//Pre: input value
//Post: sets value of ability mods
//Cite: 
//Author: 
void Character::setAMods(double amods[]){
	for (int i = 0; i < 6; i++){
		abilMod[i] = amods[i];
	}

}

//Purpose: sets armor class
//Pre: input value
//Post: sets value of armor class
//Cite: 
//Author: 
void Character::setAClass(int ac){

	armorClass = ac;

}


//Purpose: sets health points
//Pre: input value
//Post: sets value of health points
//Cite: 
//Author: 
void Character::setHP(int h){

	hp = h;

}

//Purpose: sets initiative
//Pre: input value
//Post: sets value of initiative
//Cite: 
//Author: 
void Character::setInit(int i){

	initiative = i;

}

//Purpose: sets name
//Pre: input value
//Post: sets value of name
//Cite: 
//Author: 
void Character::setName(string n){

	name = n;

}

//Purpose: sets race
//Pre: input value
//Post: sets value of race
//Cite: 
//Author: 
void Character::setRace(string r){

	race = r;

}

//Purpose: sets saves
//Pre: input value
//Post: sets value of saves
//Cite: 
//Author:  
void Character::setSaves(int sa[]){

	saves[0] = sa[0];
	saves[1] = sa[1];
	saves[2] = sa[2];

}

//Purpose: sets skills
//Pre: input value
//Post: sets value of skills 
//Cite: 
//Author: 
void Character::setSkills(double skillStats[]){

	for (int i = 0; i < skillSize; i++)
		skills[i] = skillStats[i];

}

//Purpose: sets speed
//Pre: input value
//Post: sets value of speed
//Cite: 
//Author: 
void Character::setSpeed(int s){

	speed = s;

}

//Purpose: gets an ability score
//Pre: input value
//Post: returns value of an ability score
//Cite: 
//Author: 
int Character::getAScores(int i){
	
		return abilScores[i];

}

//Purpose: gets an ability mod
//Pre: input value
//Post: returns value of an ability mod
//Cite: 
//Author: 
int Character::getAMods(int i){

	return abilMod[i];

}

//Purpose: gets armor class
//Pre: none
//Post: returns value of armor class
//Cite: 
//Author: 
int Character::getAClass(){

	return armorClass;

}

//Purpose: gets health points
//Pre: none
//Post: returns value of health points
//Cite: 
//Author: 
int Character::getHP(){

	return hp;

}

//Purpose: gets initiative
//Pre: none
//Post: returns value of initative
//Cite: 
//Author: 
int Character::getInit(){

	return initiative;

}

//Purpose: gets a save
//Pre: input value
//Post: returns value of a save
//Cite: 
//Author: 
int Character::getSaves(int i){

		return saves[i];

}

//Purpose: gets a skill
//Pre: input values
//Post: returns value of a save
//Cite: 
//Author: 
double Character::getSkills(int i){

		return skills[i];

}

//Purpose: gets speed
//Pre: none
//Post: returns value of speed
//Cite: 
//Author:  
int Character::getSpeed(){

	return speed;

}

//Purpose: gets alignment
//Pre: none
//Post: returns value of alignment
//Cite: 
//Author: 
string Character::getAlignment(){

	return alignment;

}

//Purpose: gets race
//Pre: none
//Post: returns value of race
//Cite: 
//Author: 
string Character::getRace(){

	return race;

}

//Purpose: gets name
//Pre: none
//Post: returns value of name
//Cite: 
//Author: 
string Character::getName(){

	return name;

}
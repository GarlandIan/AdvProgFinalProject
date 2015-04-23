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

//Purpose: 
//Pre: 
//Post: 
//Cite: 
//Author: 
Character::Character(){
	for (int i = 0; i < 6; i++){
		abilScores[i] = 0;
		abilMod[i] = 0;
	}
	alignment = 0;
	armorClass = 0;
	speed = 0;
	hp = 0;
	initiative = 0;
	for (int j = 0; j < 3; j++)
		saves[j] = 0;
	for (int k = 0; k< 3; k++)
		skills[k] = 0;
	name = "";
}

//Purpose: 
//Pre: 
//Post: 
//Cite: 
//Author: 
Character::Character(int abil[], int abilM[], int armorC, int al, int s, int hp, int init, int saves[], double skills[], string name)
{
	for (int i = 0; i < 6; i++){
		abilScores[i] = abil[i];
		abilMod[i] = abilM[i];
	}
	armorClass = armorC;
	alignment = al;
	speed = s;
	this->hp = hp;
	initiative = init;
	this->saves[3] = saves[3];
	this->skills[35] = skills[35];
	this->name = name;

}

//Purpose: 
//Pre: 
//Post: 
//Cite: 
//Author: 
Character::Character(const Character &c)
{

	for (int i = 0; i < 6; i++){
		abilScores[i] = c.abilScores[i];
		abilMod[i] = c.abilMod[i];
	}
	alignment = c.alignment;
	armorClass = c.armorClass;
	speed = c.speed;
	hp = c.hp;
	initiative = c.initiative;
	saves[3] = c.saves[3];
	skills[35] = c.skills[35];
	name = c.name;

}

//Purpose: 
//Pre: 
//Post: 
//Cite: 
//Author: 
Character::~Character(){}

//Purpose: 
//Pre: 
//Post: 
//Cite: 
//Author: 
void Character::setAScores(int scores[]){

	for (int i = 0; i < 6; i++){
		abilScores[i] = scores[i];
	}

}

//Purpose: 
//Pre: 
//Post: 
//Cite: 
//Author: 
void Character::setAMods(int amods[]){
	for (int i = 0; i < 6; i++){
		abilMod[i] = amods[i];
	}

}

//Purpose: 
//Pre: 
//Post: 
//Cite: 
//Author: 
void Character::setAlignment(int al){

	alignment = al;

}

//Purpose: 
//Pre: 
//Post: 
//Cite: 
//Author: 
void Character::setAClass(int ac){

	armorClass = ac;

}

//Purpose: 
//Pre: 
//Post: 
//Cite: 
//Author: 
void Character::setSpeed(int s){

	speed = s;

}

//Purpose: 
//Pre: 
//Post: 
//Cite: 
//Author: 
void Character::setHP(int h){

	hp = h;

}

//Purpose: 
//Pre: 
//Post: 
//Cite: 
//Author: 
void Character::setInit(int i){

	initiative = i;

}

//Purpose: 
//Pre: 
//Post: 
//Cite: 
//Author: 
void Character::setSaves(int sa[]){

	saves[0] = sa[0];
	saves[1] = sa[1];
	saves[2] = sa[2];

}

//Purpose: 
//Pre: 
//Post: 
//Cite: 
//Author: 
void Character::setSkills(double skillStats[]){

	for (int i = 0; i < skillSize; i++)
		skills[i] = skillStats[i];

}

//Purpose: 
//Pre: 
//Post: 
//Cite: 
//Author: 
void Character::setName(string n){

	name = n;

}


//Purpose: 
//Pre: 
//Post: 
//Cite: 
//Author: 
int Character::getAScores(int i){
	
		return abilScores[i];

}

//Purpose: 
//Pre: 
//Post: 
//Cite: 
//Author: 
int Character::getAMods(int i){

	return abilMod[i];

}

//Purpose: 
//Pre: 
//Post: 
//Cite: 
//Author: 
int Character::getAClass(){

	return armorClass;

}

//Purpose: 
//Pre: 
//Post: 
//Cite: 
//Author: 
int Character::getAlignment(){

	return alignment;

}

//Purpose: 
//Pre: 
//Post: 
//Cite: 
//Author: 
int Character::getSpeed(){

	return speed;

}

//Purpose: 
//Pre: 
//Post: 
//Cite: 
//Author: 
int Character::getHP(){

	return hp;

}

//Purpose: 
//Pre: 
//Post: 
//Cite: 
//Author: 
int Character::getInit(){

	return initiative;

}

//Purpose: 
//Pre: 
//Post: 
//Cite: 
//Author: 
int* Character::getSaves(){

		return saves;

}

//Purpose: 
//Pre: 
//Post: 
//Cite: 
//Author: 
double* Character::getSkills(){

		return skills;

}

//Purpose: 
//Pre: 
//Post: 
//Cite: 
//Author: 
string Character::getName(){

	return name;

}
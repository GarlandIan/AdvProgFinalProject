#include"character.h"

Character::Character(){}

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

Character::~Character(){}

void Character::setAScores(int scores[]){

	for (int i = 0; i < 6; i++){
		abilScores[i] = scores[i];
	}

}

void Character::setAMods(int amods[]){
	for (int i = 0; i < 6; i++){
		abilMod[i] = amods[i];
	}

}

void Character::setAlignment(int al){

	alignment = al;

}

void Character::setAClass(int ac){

	armorClass = ac;

}

void Character::setSpeed(int s){

	speed = s;

}

void Character::setHP(int h){

	hp = h;

}

void Character::setSaves(int sa[]){

	saves[0] = sa[0];
	saves[1] = sa[1];
	saves[2] = sa[2];

}

void Character::setSkills(double skillStats[]){

	for (int i = 0; i < skillSize; i++)
		skills[i] = skillStats[i];

}

void Character::setName(string n){

	name = n;

}


int Character::getAScores(int i){
	
		return abilScores[i];

}

int Character::getAMods(int i){

	return abilMod[i];

}

int Character::getAClass(){

	return armorClass;

}

int Character::getAlignment(){

	return alignment;

}

int Character::getSpeed(){

	return speed;

}

int Character::getHP(){

	return hp;

}

int Character::getInit(){

	return initiative;

}

int* Character::getSaves(){

		return saves;

}

double* Character::getSkills(){

		return skills;

}

string Character::getName(){

	return name;

}
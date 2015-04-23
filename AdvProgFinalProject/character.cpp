#include"character.h"

Character::~Character(){}

void Character::setAScores(int scores[]){

	abilScores[0] = scores[0];
	abilScores[1] = scores[1];
	abilScores[2] = scores[2];
	abilScores[3] = scores[3];
	abilScores[4] = scores[4];
	abilScores[5] = scores[5];

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


int* Character::getAScores(){
	
		return abilScores;

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
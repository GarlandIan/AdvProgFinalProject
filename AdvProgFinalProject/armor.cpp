#include"armor.h"

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

Armor::~Armor(){}

void Armor::setEnchant(string e){

	enchant = e;

}

void Armor::setEnchInfo(string ei){

	enchantInfo = ei;

}

void Armor::setType(string t){

	type = t;

}

void Armor::setACBon(int a){

	acBonus = a;

}

void Armor::setMDex(int md){

	mDexBonus = md;

}

void Armor::setACPen(int ac){

	acPenalty = ac;

}

void Armor::setSpeed(int s){

	speed = s;

}

void Armor::setWeight(int w){

	weight = w;

}

void Armor::setSpellFail(double sfc){

	spellFailCh = sfc;

}

string Armor::getEnchant(){

	return enchant;

}

string Armor::getEchInfo(){

	return enchantInfo;

}

string Armor::getType(){

	return type;

}

int Armor::getACBon(){

	return acBonus;

}

int Armor::getMDex(){

	return mDexBonus;

}

int Armor::getACPen(){

	return acPenalty;

}

int Armor::getWeight(){

	return weight;

}

double Armor::getSpellFail(){

	return spellFailCh;

}

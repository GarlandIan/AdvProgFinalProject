#include"pc.h"

PC::PC(){
	
	level = 0;

	playerClass = "";

	armor;

}

PC::PC(int l, string pc, Armor a){

	level = l;

	playerClass = pc;

	armor = a;

}

PC::PC(const PC &pc){

	level = pc.level;

	playerClass = pc.playerClass;

	armor = pc.armor;

}

PC::~PC(){}

void PC::setPClass(string pc){

	playerClass = pc;

}

void PC::setLevel(int l){

	level = l;

}

string PC::getPClass(){

	return playerClass;

}

int PC::getLevel(){

	return level;

}

/*istream& operator>>(istream& is, PC item){
		string in;
		is >> in;
		item.setName(in);
		return is;
}*/
#include"pc.h"

PC::PC(){}

PC::PC(const PC &pc){
	level = pc.level;
	playerClass = pc.playerClass;
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
#include"pc.h"

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
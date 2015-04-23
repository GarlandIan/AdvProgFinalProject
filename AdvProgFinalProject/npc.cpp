#include"npc.h"

NPC::NPC(){

	CR = 0;

}

NPC::NPC(int c){

	CR = c;

}

NPC::NPC(const NPC &n){

	CR = n.CR;

}

NPC::~NPC(){}

int NPC::getCR(){

	return CR;

}

void NPC::setCR(int c){

	CR = c;

}
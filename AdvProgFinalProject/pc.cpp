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

#include"pc.h"

//Purpose: default constructor
//Pre: none
//Post: makes default constructor
//Cite: 
//Author: Ian
PC::PC(){
	
	level = 0;

	playerClass = "";

}

//Purpose: simple constructor
//Pre: none
//Post: makes simple constructor
//Cite: 
//Author: Ian
PC::PC(int l, string pc){

	level = l;

	playerClass = pc;

}

//Purpose: copy constructor
//Pre: none
//Post: makes one instance of PC upon another
//Cite: 
//Author: Ian
PC::PC(const PC &pc){

	level = pc.level;

	playerClass = pc.playerClass;

}

//Purpose: default constructor
//Pre: none
//Post: destruct-inates
//Cite: 
//Author: Ian
PC::~PC(){}

//Purpose: sets value of level
//Pre: input value
//Post: sets value of level
//Cite: 
//Author: Ian
void PC::setLevel(int l){

	level = l;

}

//Purpose: sets player class value
//Pre: input value
//Post: sets value of player class
//Cite: 
//Author: Ian
void PC::setPClass(string pc){

	playerClass = pc;

}

//Purpose: gets player value
//Pre: none
//Post: returns value of level
//Cite: 
//Author: Ian
int PC::getLevel(){

	return level;

}

//Purpose: gets player class
//Pre: none
//Post: returns value of player class
//Cite: 
//Author: Ian
string PC::getPClass(){

	return playerClass;

}
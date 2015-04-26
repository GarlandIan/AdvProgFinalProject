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

#include"npc.h"

//Purpose: default constructor
//Pre: none
//Post: makes default constructor
//Cite: 
//Author: 
NPC::NPC(){

	CR = 0;

}

//Purpose: simple constructor
//Pre: none
//Post: makes simple constructor
//Cite: 
//Author: 
NPC::NPC(int c){

	CR = c;

}

//Purpose: copy constructor
//Pre: none
//Post: makes one instance of NPC upon another
//Cite: 
//Author: 
NPC::NPC(const NPC &n){

	CR = n.CR;

}

//Purpose: destructor
//Pre: none
//Post: destruct-inates
//Cite: 
//Author: 
NPC::~NPC(){}

//Purpose: gets CR
//Pre: none
//Post: returns value of CR
//Cite: 
//Author: 
int NPC::getCR(){

	return CR;

}

//Purpose: sets value of CR
//Pre: input value
//Post: sets value of CR
//Cite: 
//Author: 
void NPC::setCR(int c){

	CR = c;

}
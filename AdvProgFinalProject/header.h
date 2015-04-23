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

//Purpose: 
//Pre: 
//Post: 
//Cite: 
//Author: 


#ifndef HEADER_H
#define HEADER_H

#include"npc.h"

//functions all defualt to int atm////////!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

void operations(PC pc); //can choose to 'play' or 'manage'; options in each mode are shown below
//in play mode Commands all activated through a play command
void initiativeCheck(PC pc);
void attack(PC pc);
void manageHealth(PC pc);
//int castSpell(); //Not enough time to implement
void rollSaves(PC pc);
void rollSkills(PC pc);

//outside of play activated through a manage command
void changeCharacter(PC pc);
void loadCharacter(PC pc);
void buildDefault();
void newCharacter(PC pc);
void deleteCharacter();
void searchMonsters(); //exclusive to DM
void playAsMonster(); //exclusive to DM
void generateLoot(); //exclusive to DM

//functions under new character
int rollStats();

//Options Menus
void startingMenu(PC pc);
void playMenu(PC pc);
void manageMenu(PC pc);
void outsideMenu(PC pc);
void DMmenu();

int roll(int diceNumber);

#endif
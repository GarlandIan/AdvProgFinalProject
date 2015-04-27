/*
Author:        Ian Garland, Kody Greeley, Zachary Miller
Class:         Advanced Programming- CSI-240-05- Miller Information Commons, Room 308
Assigment:     Final Project
Date Assigned: 3/23/15
Due Date:      4/26/15 at 11:59pm

Description:   The purpose of this lab is to create base dice roll mechanics and loot generation for the Players (User) and Dungeon Master (Administrator)
of the popular fantasy role playing game known as Pathfinder.  It is to be used in partnership with the rest of the normal version of the game as it does not
retain every required action that players can possibly use in the game itself.  Using all the forumulas related to Player skills, there are various types of die
rolling.  Players receive different bonuses to their dice rolls from our already provided, generated character's skill statistics.  Players will be able to manage the
character's health, initiative role (who goes first in combat), attack role (if they would hit or miss/ how much damage they would do), save checks (the ability to
dodge something or take less damage), etc... As said earlier it is to be used to only perform these actions and the rest of the game still must be managed by the
Dungeon Master and Players regularly.  Players of this game understand the meaning of roles and Dungeon Masters are the ones who outside of this program determine
how the rolls effect the Players.

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
void attack(PC pc);
void initiativeCheck(PC pc);
void manageHealth(PC pc);
//int castSpell(); //Not enough time to implement
void rollSaves(PC pc);
void rollSkills(PC pc);

//outside of play activated through a manage command
void buildDefault();
void loadCharacter(PC pc, string items[], double itemz[]);
//outside of play activated through a manage command and exclusive to DM
void generateLoot();

//functions under new character
int abilityModSet(int n);
int rollStats();
string determineAlignment(int n);


//Options Menus
void DMmenu();
void manageMenu(PC pc, string items[], double itemz[]);
void outsideMenu(PC pc, string items[], double itemz[]);
void playMenu(PC pc,string items[], double itemz[]);
void startingMenu(PC pc, string items[], double itemz[]);


//stroring data:
void storeData(PC pc, string items[], double itemz[]);

//random number generator code
int roll(int diceNumber);

//overload function
void operator >>(istream& in, PC pc);

#endif
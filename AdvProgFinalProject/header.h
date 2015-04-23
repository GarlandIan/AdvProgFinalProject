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
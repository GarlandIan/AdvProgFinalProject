#ifndef HEADER_H
#define HEADER_H

#include"npc.h"

//functions all defualt to int atm////////!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

void operations(PC pc); //can choose to 'play' or 'manage'; options in each mode are shown below
//in play mode Commands all activated through a play command
int initiativeCheck(PC pc);
int attack(PC pc);
int receiveAttack(PC pc);
int manageHealth(PC pc);
//int castSpell(); //Not enough time to implement
int rollSaves(PC pc);
int rollSkills(PC pc);
int use();
int equip();

//outside of play activated through a manage command
int changeCharacter(PC pc);
void loadCharacter(PC pc);
void buildDefault(PC pc);
int newCharacter(PC pc);
int deleteCharacter();
int searchMonsters(); //exclusive to DM
int playAsMonster(); //exclusive to DM
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
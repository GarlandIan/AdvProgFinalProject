#ifndef HEADER_H
#define HEADER_H

#include"npc.h"

//functions all defualt to int atm////////!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

void operations(); //can choose to 'play' or 'manage'; options in each mode are shown below
//in play mode Commands all activated through a play command
int initiativeCheck();
int attack();
int receiveAttack();
int manageHealth();
//int castSpell(); //Not enough time to implement
int rollSaves();
int rollSkills();
int use();
int equip();

//outside of play activated through a manage command
int changeCharacter();
void loadCharacter(PC pc);
void buildDefault();
int newCharacter();
int deleteCharacter();
int searchMonsters(); //exclusive to DM
int playAsMonster(); //exclusive to DM
void generateLoot(); //exclusive to DM

//functions under new character
int rollStats();

//Options Menus
void startingMenu();
void playMenu();
void manageMenu();
void outsideMenu();
void DMmenu();

int roll(int diceNumber);

#endif
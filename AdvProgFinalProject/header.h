#ifndef HEADER_H
#define HEADER_H

#include"npc.h"

//functions all defualt to int atm////////!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

int operations();
//in play mode Commands
int initiativeCheck();
int attack();
int receiveAttack();
int manageHealth();
int castSpell();
int rollSaves();
int rollSkills();
int use();
int equip();

//outside of play
int changeCharacter();
void loadCharacter(PC pc);
void buildDefault();
int newCharacter();
int deleteCharacter();
int searchMonsters(); //exclusive to DM
int playAsMonster(); //exclusive to DM
int generateLoot(); //exclusive to DM

//functions under new character
int rollStats();

//Options Menus
void startingMenu();
void ingameMenu();
void outsideMenu();
void DMmenu();

int roll(int diceNumber);

#endif
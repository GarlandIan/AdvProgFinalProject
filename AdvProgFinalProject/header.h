#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <ctime>
#include <string>
#include <fstream>

using namespace std; 

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

const int aScoreSize = 6;
const int skillSize = 35;

int roll()
{
	srand(time(NULL));

	int roll;
	cout << "which dice are you rolling ? (type in number : ie d20 = 20)" << endl;
		cin >> roll;
	rand()*roll + 1;

}

#endif
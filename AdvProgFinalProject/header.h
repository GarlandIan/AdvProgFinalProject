/*
#ifndef
#define

#endif
*/

#include <iostream>
#include <ctime>
#include <string>

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
int loadChatacter();
int newCharacter();
int deleteCharacter();
int searchMonsters(); //exclusive to DM
int playAsMonster(); //exclusive to DM
int generateLoot(); //exclusive to DM

//functions under new character
int rollStats();

int roll()
{
	srand(time(NULL));

	int roll;
	cout << "which dice are you rolling ? (type in number : ie d20 = 20)" << endl;
		cin >> roll;
	rand()*roll + 1;

}
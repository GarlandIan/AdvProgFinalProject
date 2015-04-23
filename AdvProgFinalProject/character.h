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

#include"root.h"

class Character
{
	private:
		int abilScores[6];//make const
		int abilMod[6];
		int alignment;
		int armorClass;
		int speed;
		int hp;
		int initiative;
		int saves[3];
		double skills[35];//make const
		string name;

	public:
		Character();
		Character(int abil[], int abilM[], int armorC, int al, int s, int hp, int init, int saves[], double skills[], string name);
		Character(const Character &c);
		~Character();

		void setAScores(int scores[]);
		void setAMods(int amods[]);
		void setAlignment(int al);
		void setAClass(int ac);
		void setSpeed(int s);
		void setHP(int h);
		void setInit(int i);
		void setSaves(int sa[]);
		void setSkills(double skills[]);
		void setName(string n);

		int getAScores(int i);
		int getAMods(int i);
		int getAlignment();
		int getAClass();
		int getSpeed();
		int getHP();
		int getInit();
		int* getSaves();
		double* getSkills();
		string getName();
};
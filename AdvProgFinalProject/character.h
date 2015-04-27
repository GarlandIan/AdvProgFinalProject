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
		int abilScores[aScoreSize];
		int abilMod[aScoreSize];
		int armorClass;
		int hp;
		int initiative;
		int saves[saveSize];
		int speed;
		double skills[skillSize];
		string alignment;
		string race;
		string name;

	public:
		Character();
		Character(int abil[], int abilM[], int armorC, int s, int hp, int init, int saves[], double skills[], string al, string r, string name);
		Character(const Character &c);
		~Character();

		void setAlignment(string al);
		void setAScores(int scores[]);
		void setAMods(double amods[]);
		void setAClass(int ac);
		void setHP(int h);
		void setInit(int i);
		void setName(string n);
		void setRace(string r);
		void setSaves(int sa[]);
		void setSkills(double skills[]);
		void setSpeed(int s);
		
		

		int getAScores(int i);
		int getAMods(int i);
		int getAClass();
		int getHP();
		int getInit();
		int getSaves(int i);
		int getSpeed();
		double getSkills(int i);
		string getAlignment();
		string getRace();
		string getName();

		virtual int getWeight()
		{
			return 0;
		}
};
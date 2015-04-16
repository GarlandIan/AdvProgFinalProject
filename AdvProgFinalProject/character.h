#include"header.h"


class Character
{
	protected:
		int abilScores[6];//make const
		int armorClass;
		int speed;
		int hp;
		int initiative;
		int saves[3];
		double skills[35];//make const
		string name;

	public:
		Character();
		Character(int abil[], int armorC, int s, int hp, int init, int saves[], double skills[], string name);
		Character(const Character &c);
		~Character();

		void setAScores(int scores[]);
		void setAClass(int ac);
		void setSpeed(int s);
		void setHP(int h);
		void setInit(int i);
		void setSaves(int sa[]);
		void setSkills(double skills[]);
		void setName(string n);

		int getAScores();
		int getAClass();
		int getSpeed();
		int getHP();
		int getInit();
		int getSaves();
		double getSkills();
		string getName();
};
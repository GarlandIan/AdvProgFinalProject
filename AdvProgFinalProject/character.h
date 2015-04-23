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
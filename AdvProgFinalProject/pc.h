#ifndef PC_H
#define PC_H

#include "armor.h"//change?

class PC : protected Character
{
private:
	int level;

	string playerClass;

	Armor armor;

public:
	PC();
	PC(int l, string pc);
	PC(const PC &pc);
	~PC();

	void setPClass(string pc);
	void setLevel(int l);

	string getPClass();
	int getLevel();

};
 
#endif
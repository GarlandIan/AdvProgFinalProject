#ifndef NPC_H
#define NPC_H

#include "pc.h"

class NPC : protected Character
{
	private:
		int CR;

	public:
		NPC();
		NPC(int c);
		NPC(const NPC &n);
		~NPC();

		int getCR();

		void setCR(int c);

};

#endif

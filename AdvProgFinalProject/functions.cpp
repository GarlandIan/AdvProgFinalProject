/*
Author:        Ian Garland, Kody Greeley, Zachary Miller
Class:         Advanced Programming- CSI-240-05- Miller Information Commons, Room 308
Assigment:     Final Project
Date Assigned: 3/23/15
Due Date:      4/26/15 at 11:59pm

Description:   The purpose of this lab is to create base dice roll mechanics and loot generation for the Players (User) and Dungeon Master (Administrator)
of the popular fantasy role playing game known as Pathfinder.  It is to be used in partnership with the rest of the normal version of the game as it does not
retain every required action that players can possibly use in the game itself.  Using all the forumulas related to Player skills, there are various types of die
rolling.  Players receive different bonuses to their dice rolls from our already provided, generated character's skill statistics.  Players will be able to manage the
character's health, initiative role (who goes first in combat), attack role (if they would hit or miss/ how much damage they would do), save checks (the ability to
dodge something or take less damage), etc... As said earlier it is to be used to only perform these actions and the rest of the game still must be managed by the
Dungeon Master and Players regularly.  Players of this game understand the meaning of roles and Dungeon Masters are the ones who outside of this program determine
how the rolls effect the Players.

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

#include"header.h"

//Purpose: allows player to attack
//Pre: monster exists
//Post: player lowers hp value if possible on monster
//Cite: 
//Author: Ian
void attack(PC pc){
	
	int attackAttempt = 0, damage = 0;

	attackAttempt = roll(20) + pc.getAMods(0);

	damage = roll(10) + pc.getAMods(0);

	cout << "Your attack roll comes out to a " << attackAttempt << " and if it lands, you deal " << damage << " damage!\n";

}

//Purpose: makes a default saves file txt
//Pre: none
//Post: creates a txt file with basic default settings
//Cite: 
//Author: Zach
void buildDefault(){
	ofstream fout;
	string tmp = "IAN";
	int num = 10;
	int num2 = 0;

	fout << "PlayerName: " << tmp << endl //character.getName()
		<< "Level: " << "1" << endl //pc.getLevel()
		<< "Class: " << "Warrior" << endl//pc.getPClass()
		<< "Alignment:" << "3" << endl// character.getAlignment()
		<< endl
		<< "Str: " << num << endl// character.getAScores(int num) for next six.
		<< "Dex: " << num << endl
		<< "Con: " << num << endl
		<< "Int: " << num << endl
		<< "Wis: " << num << endl
		<< "Cha: " << num << endl
		<< endl
		<< "HP: " << "5" << endl// character.getHP()
		<< "AC: " << num << endl// character.getACLass()
		<< endl
		<< "Speed: " << "20" << endl// character.getSpeed()
		<< endl
		<< "Initiative: " << num2 << endl// character.getInit()
		<< endl
		<< "Fortitude: " << num2 << endl// character.getSaves(int num) for next 3.
		<< "Reflex: " << num2 << endl
		<< "Will: " << num2 << endl
		<< endl
		<< "Acrobatics: " << num2 << endl// character.getSkills(int num) for next 35.
		<< "Appraise: " << num2 << endl
		<< "Bluff: " << num2 << endl
		<< "Climb: " << num2 << endl
		<< "Craft: " << num2 << endl
		<< "Diplomacy: " << num2 << endl
		<< "Disable Device: " << num2 << endl
		<< "Disguise: " << num2 << endl
		<< "Escape Artist: " << num2 << endl
		<< "Fly: " << num2 << endl
		<< "Handle Animal: " << num2 << endl
		<< "Heal: " << num2 << endl
		<< "Intimidate: " << num2 << endl
		<< "KArcana: " << num2 << endl
		<< "KDungeoneering: " << num2 << endl
		<< "KEngingeering: " << num2 << endl
		<< "KGeography: " << num2 << endl
		<< "KHistory: " << num2 << endl
		<< "KLocal: " << num2 << endl
		<< "KNature: " << num2 << endl
		<< "KNobility: " << num2 << endl
		<< "KPlanes: " << num2 << endl
		<< "KReligion: " << num2 << endl
		<< "Linguistics: " << num2 << endl
		<< "Perception: " << num2 << endl
		<< "Perform: " << num2 << endl
		<< "Profession: " << num2 << endl
		<< "Ride: " << num2 << endl
		<< "SenseMotive: " << num2 << endl
		<< "SleightofHand: " << num2 << endl
		<< "Spellcraft: " << num2 << endl
		<< "Stealth: " << num2 << endl
		<< "Survival: " << num2 << endl
		<< "Swim: " << num2 << endl
		<< "UseMagicDevice: " << num2 << endl
		<< endl
		<< "Armor" << endl
		<< "Leather" << endl // armor.type
		<< "AC: " << "1" << endl //armor.acBonus
		<< "ArmorCheckPen: " << num2 << endl //armor.acPenalty
		<< "MaxDex: " << "5" << endl //armor.mDexBonus
		<< "Speed: " << "30" << endl //armor.speed
		<< "Weight: " << "20" << endl //armor.weight
		<< "Enchantment: " << "none" << endl //armor.enchant
		<< "EnchantmentInfo: " << "-----" << endl; //armor.enchantInfo
	
	for (int i = 0; i < 3; i++)
	{
		fout << endl
			 << "Item" << endl
			 << tmp << endl //items[i]
			 << "Weight" << num2 << endl // itemz[i]
			 << "Price" << num2 << endl // itemz[i+1]
			 << "Amount" << num2 << endl // itemz[i+2]
			 << tmp << endl;
	}


		
}


//Purpose: gives exluded menu to dm
//Pre: none
//Post: DM has a menu
//Cite: 
//Author: Kody
void DMmenu()
{
	int user_choice3 = -1;
	while (user_choice3 < 0 || user_choice3 > 1)
	{
		cout << "Dungeon Master: What would you like to do?\n";
		cout << "0 - Back to Starting Menu\n";
		cout << "1 - Generate Loot\n";
		cin >> user_choice3;
	}
	if (user_choice3 == 0)
	{
		cout << "Returning to starting menu.\n";
		system("pause");
	}
	if (user_choice3 == 1)
	{
		generateLoot();
		system("pause");
		DMmenu();
	}
}

//Purpose: create a value of gold
//Pre: none
//Post: creates a value of gp
//Cite: 
//Author: Zach
void generateLoot()
{
	srand(time(NULL));
	int num, num2, num3, monsterlvl = /*rand() % 30 +*/ 1, diceNumber = 0, total;//monster level to be imported in

	double cp = .01;
	double sp = .1;
	double gp = 1;
	double pp = 10;
	int gem = 275;
	double artObject = 1110;
	double mundane = 350;
	double minor = 1000;
	double medium = 10000;
	double major = 400000;
	double gold = 0;

	num = rand() % 100 + 1;
	num2 = rand() % 100 + 1;
	num3 = rand() % 100 + 1;

	if (monsterlvl == 1)
	{
		//cout << num << endl;
		if (num >= 96)
		{
			diceNumber = roll(4);
			gold += (diceNumber * (10 * pp));
		}
		else if (num >= 53)
		{
			total = 0;
			for (int i = 0; i < 2; i++)
			{
				diceNumber = roll(8);
				total += diceNumber;
			}

			gold += (total * (10 * gp));
		}
		else if (num >= 30)
		{
			diceNumber = roll(8);
			gold += (diceNumber * (100 * sp));
		}
		else if (num >= 15)
		{
			diceNumber = roll(6);
			gold += (diceNumber * (1000 * cp));


		}
		else
		{
			gold += 0;
		}

		cout << "You found " << gold << " gold on the corpse" << endl;

		//cout << diceNumber << endl;
		//cout << gold << endl;

		/*if (num2 >= 96)
		{

		gold += gem;
		cout << "You found a gem, as you touch it turns into " << gem << " gold" << endl;
		}
		else if (num2 >= 91)
		{

		gold += artObject;
		cout << "You found some art, as you touch it turns into " << artObject << " gold" << endl;

		}
		else
		{
		gold += 0;
		}

		if (num3 >= 96)
		{

		gold += mundane;
		cout << "You found a mundane item, as you touch it turns into " << mundane << " gold" << endl;
		}
		else if (num3 >= 72)
		{

		gold += minor;
		cout << "You found a minor item, as you touch it turns into " << minor << " gold" << endl;

		}
		else
		{
		gold += 0;
		}

		cout << "You gained " << gold << "from the enemy" << endl;*/

	}
	else if (monsterlvl == 2)
	{
		if (num >= 96)
		{
			total = 0;
			for (int i = 0; i < 2; i++)
			{
				diceNumber = roll(8);
				total += diceNumber;
			}

			gold += (total * (10 * pp));
		}
		else if (num >= 44)
		{
			total = 0;
			for (int i = 0; i < 4; i++)
			{
				diceNumber = roll(10);
				total += diceNumber;
			}

			gold += (total * (10 * gp));
		}
		else if (num >= 24)
		{
			total = 0;
			for (int i = 0; i < 2; i++)
			{
				diceNumber = roll(10);
				total += diceNumber;
			}

			gold += (total * (100 * sp));
		}
		else if (num >= 14)
		{
			total = 0;
			for (int i = 0; i < 1; i++)
			{
				diceNumber = roll(10);
				total += diceNumber;
			}

			gold += (total * (1000 * cp));


		}
		else
		{
			gold += 0;
		}

		cout << "You found " << gold << " gold on the corpse" << endl;
	}
	else if (monsterlvl == 3)
	{
		if (num >= 96)
		{
			total = 0;
			for (int i = 0; i < 1; i++)
			{
				diceNumber = roll(10);
				total += diceNumber;
			}

			gold += (total * (10 * pp));
		}

		else if (num >= 42)
		{
			total = 0;
			for (int i = 0; i < 1; i++)
			{
				diceNumber = roll(4);
				total += diceNumber;
			}

			gold += (total * (100 * gp));
		}

		else if (num >= 22)
		{
			total = 0;
			for (int i = 0; i < 4; i++)
			{
				diceNumber = roll(8);
				total += diceNumber;
			}

			gold += (total * (100 * sp));
		}

		else if (num >= 12)
		{
			total = 0;
			for (int i = 0; i < 2; i++)
			{
				diceNumber = roll(10);
				total += diceNumber;
			}

			gold += (total * (1000 * cp));
		}

		else
		{
			gold += 0;
		}

		cout << "You found " << gold << " gold on the corpse" << endl;
	}
	else if (monsterlvl == 4)
	{
		if (num >= 96)
		{
			total = 0;
			for (int i = 0; i < 1; i++)
			{
				diceNumber = roll(8);
				total += diceNumber;
			}

			gold += (total * (10 * pp));
		}

		else if (num >= 42)
		{
			total = 0;
			for (int i = 0; i < 1; i++)
			{
				diceNumber = roll(6);
				total += diceNumber;
			}

			gold += (total * (100 * gp));
		}

		else if (num >= 22)
		{
			total = 0;
			for (int i = 0; i < 4; i++)
			{
				diceNumber = roll(12);
				total += diceNumber;
			}

			gold += (total * (1000 * sp));
		}

		else if (num >= 12)
		{
			total = 0;
			for (int i = 0; i < 3; i++)
			{
				diceNumber = roll(10);
				total += diceNumber;
			}

			gold += (total * (1000 * cp));
		}

		else
		{
			gold += 0;
		}

		cout << "You found " << gold << " gold on the corpse" << endl;
	}
	else if (monsterlvl == 5)
	{
		if (num >= 96)
		{
			total = 0;
			for (int i = 0; i < 1; i++)
			{
				diceNumber = roll(10);
				total += diceNumber;
			}

			gold += (total * (10 * pp));
		}

		else if (num >= 39)
		{
			total = 0;
			for (int i = 0; i < 1; i++)
			{
				diceNumber = roll(8);
				total += diceNumber;
			}

			gold += (total * (100 * gp));
		}

		else if (num >= 20)
		{
			total = 0;
			for (int i = 0; i < 1; i++)
			{
				diceNumber = roll(6);
				total += diceNumber;
			}

			gold += (total * (1000 * sp));
		}

		else if (num >= 11)
		{
			total = 0;
			for (int i = 0; i < 1; i++)
			{
				diceNumber = roll(4);
				total += diceNumber;
			}

			gold += (total * (10000 * cp));
		}

		else
		{
			gold += 0;
		}

		cout << "You found " << gold << " gold on the corpse" << endl;
	}
	else if (monsterlvl == 6)
	{
		if (num >= 96)
		{
			total = 0;
			for (int i = 0; i < 1; i++)
			{
				diceNumber = roll(12);
				total += diceNumber;
			}

			gold += (total * (10 * pp));
		}

		else if (num >= 38)
		{
			total = 0;
			for (int i = 0; i < 1; i++)
			{
				diceNumber = roll(10);
				total += diceNumber;
			}

			gold += (total * (100 * gp));
		}

		else if (num >= 19)
		{
			total = 0;
			for (int i = 0; i < 1; i++)
			{
				diceNumber = roll(8);
				total += diceNumber;
			}

			gold += (total * (1000 * sp));
		}

		else if (num >= 11)
		{
			total = 0;
			for (int i = 0; i < 1; i++)
			{
				diceNumber = roll(6);
				total += diceNumber;
			}

			gold += (total * (10000 * cp));
		}

		else
		{
			gold += 0;
		}

		cout << "You found " << gold << " gold on the corpse" << endl;
	}
	else if (monsterlvl == 7)
	{
		if (num >= 94)
		{
			total = 0;
			for (int i = 0; i < 3; i++)
			{
				diceNumber = roll(4);
				total += diceNumber;
			}

			gold += (total * (10 * pp));
		}

		else if (num >= 36)
		{
			total = 0;
			for (int i = 0; i < 2; i++)
			{
				diceNumber = roll(6);
				total += diceNumber;
			}

			gold += (total * (100 * gp));
		}

		else if (num >= 19)
		{
			total = 0;
			for (int i = 0; i < 1; i++)
			{
				diceNumber = roll(12);
				total += diceNumber;
			}

			gold += (total * (1000 * sp));
		}

		else if (num >= 12)
		{
			total = 0;
			for (int i = 0; i < 1; i++)
			{
				diceNumber = roll(10);
				total += diceNumber;
			}

			gold += (total * (10000 * cp));
		}

		else
		{
			gold += 0;
		}

		cout << "You found " << gold << " gold on the corpse" << endl;
	}
	else if (monsterlvl == 8)
	{
		if (num >= 88)
		{
			total = 0;
			for (int i = 0; i < 3; i++)
			{
				diceNumber = roll(6);
				total += diceNumber;
			}

			gold += (total * (10 * pp));
		}

		else if (num >= 30)
		{
			total = 0;
			for (int i = 0; i < 2; i++)
			{
				diceNumber = roll(8);
				total += diceNumber;
			}

			gold += (total * (100 * gp));
		}

		else if (num >= 16)
		{
			total = 0;
			for (int i = 0; i < 2; i++)
			{
				diceNumber = roll(6);
				total += diceNumber;
			}

			gold += (total * (1000 * sp));
		}

		else if (num >= 11)
		{
			total = 0;
			for (int i = 0; i < 1; i++)
			{
				diceNumber = roll(12);
				total += diceNumber;
			}

			gold += (total * (10000 * cp));
		}

		else
		{
			gold += 0;
		}

		cout << "You found " << gold << " gold on the corpse" << endl;
	}
	else if (monsterlvl == 9)
	{
		if (num >= 86)
		{
			total = 0;
			for (int i = 0; i < 2; i++)
			{
				diceNumber = roll(12);
				total += diceNumber;
			}

			gold += (total * (10 * pp));
		}

		else if (num >= 30)
		{
			total = 0;
			for (int i = 0; i < 5; i++)
			{
				diceNumber = roll(4);
				total += diceNumber;
			}

			gold += (total * (100 * gp));
		}

		else if (num >= 16)
		{
			total = 0;
			for (int i = 0; i < 2; i++)
			{
				diceNumber = roll(8);
				total += diceNumber;
			}

			gold += (total * (1000 * sp));
		}

		else if (num >= 11)
		{
			total = 0;
			for (int i = 0; i < 2; i++)
			{
				diceNumber = roll(6);
				total += diceNumber;
			}

			gold += (total * (10000 * cp));
		}

		else
		{
			gold += 0;
		}

		cout << "You found " << gold << " gold on the corpse" << endl;
	}
	else if (monsterlvl == 10)
	{
		if (num >= 80)
		{
			total = 0;
			for (int i = 0; i < 5; i++)
			{
				diceNumber = roll(6);
				total += diceNumber;
			}

			gold += (total * (10 * pp));
		}

		else if (num >= 25)
		{
			total = 0;
			for (int i = 0; i < 6; i++)
			{
				diceNumber = roll(4);
				total += diceNumber;
			}

			gold += (total * (100 * gp));
		}

		else if (num >= 11)
		{
			total = 0;
			for (int i = 0; i < 3; i++)
			{
				diceNumber = roll(10);
				total += diceNumber;
			}

			gold += (total * (1000 * sp));
		}


		else
		{
			gold += 0;
		}

		cout << "You found " << gold << " gold on the corpse" << endl;
	}
	else if (monsterlvl == 11)
	{
		if (num >= 76)
		{
			total = 0;
			for (int i = 0; i < 4; i++)
			{
				diceNumber = roll(10);
				total += diceNumber;
			}

			gold += (total * (10 * pp));
		}

		else if (num >= 15)
		{
			total = 0;
			for (int i = 0; i < 4; i++)
			{
				diceNumber = roll(8);
				total += diceNumber;
			}

			gold += (total * (100 * gp));
		}

		else if (num >= 9)
		{
			total = 0;
			for (int i = 0; i < 2; i++)
			{
				diceNumber = roll(10);
				total += diceNumber;
			}

			gold += (total * (1000 * sp));
		}


		else
		{
			gold += 0;
		}

		cout << "You found " << gold << " gold on the corpse" << endl;
	}
	else if (monsterlvl == 12)
	{
		if (num >= 76)
		{
			total = 0;
			for (int i = 0; i <1; i++)
			{
				diceNumber = roll(4);
				total += diceNumber;
			}

			gold += (total * (100 * pp));
		}

		else if (num >= 15)
		{
			total = 0;
			for (int i = 0; i < 1; i++)
			{
				diceNumber = roll(4);
				total += diceNumber;
			}

			gold += (total * (1000 * gp));
		}

		else if (num >= 9)
		{
			total = 0;
			for (int i = 0; i < 2; i++)
			{
				diceNumber = roll(10);
				total += diceNumber;
			}

			gold += (total * (1000 * sp));
		}


		else
		{
			gold += 0;
		}

		cout << "You found " << gold << " gold on the corpse" << endl;
	}
	else if (monsterlvl == 13)
	{
		if (num >= 76)
		{
			total = 0;
			for (int i = 0; i <1; i++)
			{
				diceNumber = roll(10);
				total += diceNumber;
			}

			gold += (total * (100 * pp));
		}

		else if (num >= 9)
		{
			total = 0;
			for (int i = 0; i < 1; i++)
			{
				diceNumber = roll(4);
				total += diceNumber;
			}

			gold += (total * (1000 * gp));
		}


		else
		{
			gold += 0;
		}

		cout << "You found " << gold << " gold on the corpse" << endl;
	}
	else if (monsterlvl == 14)
	{
		if (num >= 76)
		{
			total = 0;
			for (int i = 0; i < 1; i++)
			{
				diceNumber = roll(12);
				total += diceNumber;
			}

			gold += (total * (100 * pp));
		}

		else if (num >= 9)
		{
			total = 0;
			for (int i = 0; i < 1; i++)
			{
				diceNumber = roll(6);
				total += diceNumber;
			}

			gold += (total * (1000 * gp));
		}


		else
		{
			gold += 0;
		}

		cout << "You found " << gold << " gold on the corpse" << endl;
	}
	else if (monsterlvl == 15)
	{
		if (num >= 75)
		{
			total = 0;
			for (int i = 0; i < 3; i++)
			{
				diceNumber = roll(4);
				total += diceNumber;
			}

			gold += (total * (100 * pp));
		}

		else if (num >= 4)
		{
			total = 0;
			for (int i = 0; i < 1; i++)
			{
				diceNumber = roll(8);
				total += diceNumber;
			}

			gold += (total * (1000 * gp));
		}


		else
		{
			gold += 0;
		}

		cout << "You found " << gold << " gold on the corpse" << endl;
	}
	else if (monsterlvl == 16)
	{
		if (num >= 75)
		{
			total = 0;
			for (int i = 0; i < 3; i++)
			{
				diceNumber = roll(4);
				total += diceNumber;
			}

			gold += (total * (100 * pp));
		}

		else if (num >= 4)
		{
			total = 0;
			for (int i = 0; i < 1; i++)
			{
				diceNumber = roll(12);
				total += diceNumber;
			}

			gold += (total * (1000 * gp));
		}


		else
		{
			gold += 0;
		}

		cout << "You found " << gold << " gold on the corpse" << endl;
	}
	else if (monsterlvl == 17)
	{
		if (num >= 69)
		{
			total = 0;
			for (int i = 0; i < 2; i++)
			{
				diceNumber = roll(10);
				total += diceNumber;
			}

			gold += (total * (100 * pp));
		}

		else if (num >= 4)
		{
			total = 0;
			for (int i = 0; i < 3; i++)
			{
				diceNumber = roll(4);
				total += diceNumber;
			}

			gold += (total * (1000 * gp));
		}


		else
		{
			gold += 0;
		}

		cout << "You found " << gold << " gold on the corpse" << endl;
	}
	else if (monsterlvl == 18)
	{
		if (num >= 66)
		{
			total = 0;
			for (int i = 0; i < 5; i++)
			{
				diceNumber = roll(4);
				total += diceNumber;
			}

			gold += (total * (100 * pp));
		}

		else if (num >= 3)
		{
			total = 0;
			for (int i = 0; i < 3; i++)
			{
				diceNumber = roll(6);
				total += diceNumber;
			}

			gold += (total * (1000 * gp));
		}


		else
		{
			gold += 0;
		}

		cout << "You found " << gold << " gold on the corpse" << endl;
	}
	else if (monsterlvl == 19)
	{
		if (num >= 66)
		{
			total = 0;
			for (int i = 0; i < 3; i++)
			{
				diceNumber = roll(10);
				total += diceNumber;
			}

			gold += (total * (100 * pp));
		}

		else if (num >= 3)
		{
			total = 0;
			for (int i = 0; i < 3; i++)
			{
				diceNumber = roll(8);
				total += diceNumber;
			}

			gold += (total * (1000 * gp));
		}


		else
		{
			gold += 0;
		}

		cout << "You found " << gold << " gold on the corpse" << endl;
	}
	else if (monsterlvl == 20)
	{
		if (num >= 66)
		{
			total = 0;
			for (int i = 0; i < 4; i++)
			{
				diceNumber = roll(10);
				total += diceNumber;
			}

			gold += (total * (100 * pp));
		}

		else if (num >= 3)
		{
			total = 0;
			for (int i = 0; i < 4; i++)
			{
				diceNumber = roll(8);
				total += diceNumber;
			}

			gold += (total * (1000 * gp));
		}


		else
		{
			gold += 0;
		}

		cout << "You found " << gold << " gold on the corpse" << endl;
	}

	system("pause");
}

//Purpose: checks initiative
//Pre: none
//Post: retrns value of initiative
//Cite: 
//Author: Kody, Zach, Ian
void initiativeCheck(PC pc)
{
	cout << "Checking initiative . . .\n";
	cout << "You rolled a " << pc.getInit() + roll(20) << endl;
	system("pause");
}

//Purpose: loads character from txt file
//Pre: txt file that contains character exists
//Post: stores data from txt file into system
//Cite: 
//Author: Ian, Zach, Kody
void loadCharacter(PC pc, string items[], double itemz[]){

	ifstream file;

	int acTemp, acBonusTemp, initativeTemp = 0, savesTemp[3], skillTemp[35], intTemp, ascoresTemp[6], iPrice, iAmount;

	double modTemp[6], iWeight;

	string tmp, alignTemp, item, iName, iDesc;
	LinkedList itemNames;
	LinkedList itemDescs;
	LinkedList2 itemPrices;
	LinkedList2 itemAmounts;
	LinkedList3 itemWeights;


	file.open("sample.txt");

	for (int i = 1; i < 3; i++){
		file >> tmp;
	}

	pc.setName(tmp);

	file >> tmp;

	file >> intTemp;

	pc.setLevel(intTemp);

	file >> tmp;

	pc.setRace(tmp);

	file >> tmp;

	pc.setPClass(tmp);

	file >> tmp;

	file >> intTemp;

	alignTemp = determineAlignment(intTemp);

	pc.setAlignment(alignTemp);

	for (int j = 0; j < 6; j++){
		file >> tmp;
		file >> ascoresTemp[j];
	}

	pc.setAScores(ascoresTemp);

	for (int k = 0; k < 6; k++){
		modTemp[k] = floor((ascoresTemp[k] - 10) / 2);
	}

	pc.setAMods(modTemp);

	file >> tmp;

	file >> intTemp;

	pc.setHP(intTemp);

	file >> tmp;

	file >> acTemp; //storing as temp for configuration later

	file >> tmp;

	file >> intTemp;

	pc.setSpeed(intTemp);

	file >> tmp;

	file >> initativeTemp; //storing as temp for later configuration

	file >> tmp;
	for (int y = 0; y < 3; y++)
	{
		file >> savesTemp[y]; //storing as temp for later config
		if (y == 2)
		{
			break;
		}
		file >> tmp;

	}

	pc.setSaves(savesTemp);

	for (int k = 0; k < 35; k++){
		file >> tmp;
		file >> skillTemp[k];
	}
	pc.setSaves(skillTemp);

	file >> tmp;

	file >> tmp;

	pc.armor.setType(tmp);

	file >> tmp;

	file >> intTemp;

	pc.armor.setACBon(intTemp);

	file >> tmp;

	file >> intTemp;

	pc.armor.setACPen(intTemp);

	file >> tmp;

	file >> intTemp;

	pc.armor.setMDex(intTemp);

	file >> tmp;

	file >> intTemp;

	pc.armor.setSpeed(intTemp);

	file >> tmp;

	file >> intTemp;

	pc.armor.setWeight(intTemp);

	file >> tmp;

	file >> tmp;

	pc.armor.setEnchant(tmp);

	file >> tmp;

	file >> tmp;

	pc.armor.setEnchInfo(tmp);

	for(int z = 0; z < 3; z++){

		file >> tmp;

		file.ignore();

		getline(file, iName); //Takes in name
		itemNames.add(iName);
		items[z] = iName;

		file >> tmp;

		file >> iWeight; //Takes in weight integer
		itemWeights.add(iWeight);
		itemz[z] = iWeight;

		file >> tmp;

		file >> iPrice; //Takes in price
		itemPrices.add(iPrice);
		itemz[z + 1] = iPrice;

		file >> tmp;

		file >> iAmount; //Takes in amount
		itemAmounts.add(iAmount);
		itemz[z + 2] = iAmount;

		file.ignore();

		getline(file, iDesc); //Takes in description
		itemDescs.add(iDesc);
		items[z + 1] = iDesc;

	}
	cout << "Players Start Out With the Following Items: \n";
	cout << "Names: \n";
	itemNames.displayList();
	cout << endl;
	cout << "Weights of Each Item (in pounds): \n";
	itemWeights.displayList();
	cout << endl;
	cout << "Prices of Each Item (in gold): \n";
	itemPrices.displayList();
	cout << endl;
	cout << "How many of each item a player has: \n";
	itemAmounts.displayList();
	cout << endl;
	cout << endl;
	file.close();
}

//Purpose: change the value of health
//Pre: none
//Post: changes value of health
//Cite: 
//Author: Ian
void manageHealth(PC pc){

	int tmp = 0, h = 0, temph = pc.getHP();
	while (tmp < 1 || tmp < 3){
		cout << "Enter the number for the corresponding option you wish to activate\n\n"
			<< "1. Gain Health\n"
			<< "2. Lose Health\n"
			<< "3. Return\n";

		cin >> tmp;
	}

	if (tmp == 1){

		while (h < 1){

			cout << "How much health have you gained?\n";

			cin >> h;

		}

		pc.setHP(temph + h);

		cout << "Your current health is " << pc.getHP() << endl;

	}

	else if (tmp == 2){

		while (h < 1){

			cout << "How much health have you lost?\n";

			cin >> h;

		}

		pc.setHP(temph - h);

		cout << "Your current health is " << pc.getHP() << endl;

	}

	else{

		return;

	}

}

//Purpose: user menu
//Pre: none
//Post: gives user a menu
//Cite: 
//Author: Kody
void manageMenu(PC testPlayer, string items[], double itemz[])
{
	int user_choice5 = -1;
	while (user_choice5 < 0 || user_choice5 > 2)
	{
		cout << "Player(Manage Mode): What would you like to do?\n";
		cout << "0 - Back to Starting Menu\n";
		cout << "1 - Build Default\n";
		cout << "2 - Load Character\n";
		cin >> user_choice5;
	}
	if (user_choice5 == 0)
	{
		cout << "Returning to starting menu.\n";
		system("pause");
		outsideMenu(testPlayer, items, itemz);
	}
	if (user_choice5 == 1)
	{
		buildDefault();
		system("pause");
		manageMenu(testPlayer,items, itemz);
	}
	if (user_choice5 == 2)
	{
		loadCharacter(testPlayer, items, itemz);
		system("pause");
		manageMenu(testPlayer, items, itemz);
	}
}


//Purpose: menu
//Pre: none
//Post: another menu for player
//Cite: 
//Author: Kody
void outsideMenu(PC testPlayer, string items[], double itemz[])
{
	int user_choice2 = -1;
	while (user_choice2 < 0 || user_choice2 > 2)
	{
		cout << "Player: What would you like to do?\n";
		cout << "0 - Back to Starting Menu\n";
		cout << "1 - Play Character\n";
		cout << "2 - Manage Character\n";
		cin >> user_choice2;
	}
	if (user_choice2 == 0)
	{
		cout << "Returning to starting menu.\n";
		system("pause");
	}
	if (user_choice2 == 1)
	{
		playMenu(testPlayer, items, itemz);
	}
	if (user_choice2 == 2)
	{
		manageMenu(testPlayer, items, itemz);
	}
}


//Purpose: menu
//Pre: none
//Post: another menu for user
//Cite: 
//Author: Kody
void playMenu(PC testPlayer, string items[], double itemz[])
{
	int user_choice4 = -1;
	while (user_choice4 < 0 || user_choice4 > 5)
	{
		cout << "Player(Play Mode): What would you like to do?\n";
		cout << "0 - Back to Starting Menu\n";
		cout << "1 - Roll for Initiative\n";
		cout << "2 - Attack\n";
		cout << "3 - Manage Health\n";
		cout << "4 - Save Check\n";
		cout << "5 - Skill Check\n";
		cin >> user_choice4;
	}
	if (user_choice4 == 0)
	{
		cout << "Returning to starting menu.\n";
		system("pause");
		outsideMenu(testPlayer, items, itemz);
	}
	if (user_choice4 == 1)
	{
		initiativeCheck(testPlayer);
		system("pause");
		playMenu(testPlayer, items, itemz);
	}
	if (user_choice4 == 2)
	{
		attack(testPlayer);
		system("pause");
		playMenu(testPlayer,items, itemz);
	}
	if (user_choice4 == 3)
	{
		manageHealth(testPlayer);
		system("pause");
		playMenu(testPlayer, items, itemz);
	}
	if (user_choice4 == 4)
	{
		rollSaves(testPlayer);
		system("pause");
		playMenu(testPlayer, items, itemz);
	}
	if (user_choice4 == 5)
	{
		rollSkills(testPlayer);
		system("pause");
		playMenu(testPlayer,items, itemz);
	}
}

//Purpose: creating stats for saves
//Pre: none
//Post: gives stats to saves
//Cite: 
//Author: Ian
void rollSaves(PC pc){

	int tmp = -1, attempt = 0;

	while (tmp < 0 || tmp > 4){
		cout << "Which saving throw are you attempting to roll?\n"
			<< "1. Fortitude\n"
			<< "2. Reflex\n"
			<< "3. Will\n"
			<< "4. Return\n";

		cin >> tmp;
	}

	if (tmp == 4){ return; }

	attempt = roll(20) + pc.getSaves(tmp - 1);

	cout << "You rolled a " << attempt << "!" << endl;

}

//Purpose: creating stats for skills
//Pre: none
//Post: gives stats to skills
//Cite: 
//Author: Ian
void rollSkills(PC pc){

	int input = 0, dieRoll = 0;
	do{
		cout << "Enter the number of a skill to roll or type 36 to return\n"
			<< "1. Acrobatics\n" << "2. Appraise\n" << "3. Bluff\n" << "4. Climb\n"
			<< "5. Craft\n" << "6. Diplomacy\n" << "7. Disable Device\n"
			<< "8. Diguise\n" << "9. Escape Artist\n" << "10. Fly\n"
			<< "11. Handle Animal\n" << "12. Heal\n" << "13. Intimidate\n"
			<< "14. Knowledge (Arcana)\n" << "15. Knowledge (Dungeoneering)\n"
			<< "16. Knowledge (Engineering)\n" << "17. Knowledge (Geography)\n"
			<< "18. Knowledge (History)\n" << "19. Knowledge (Local)\n"
			<< "20. Knowledge (Nature)\n" << "20. Knowledge (Nobility)\n"
			<< "22. Knowledge (Planes)\n" << "23. Knowledge (Religion)\n"
			<< "24. Linguistics\n" << "25. Perception\n" << "26. Perform\n"
			<< "27. Profession\n" << "28. Ride\n" << "29. Sense Motive\n"
			<< "30. Sleight of Hand\n" << "31. Spellcraft\n" << "32. Stealth\n"
			<< "33. Survival\n" << "34. Swim\n" << "35. Use Magic Device\n";

		cin >> input;

	} while (input < 1 || input > 36);

	if (input == 36){ return; }

	dieRoll = pc.getSkills(input) + roll(20);

	cout << "You rolled a " << dieRoll << " on your check!";

}

//Purpose: starting menu for user
//Pre: none
//Post: another menu for user
//Cite: 
//Author: Kody
void startingMenu(PC testPlayer, string items[], double itemz[])
{
	int user_choice = -1;
	do{

		while (user_choice < 0 || user_choice > 2)
		{
			cout << "Please select whether you are a player or the Dungeon Master\n";
			cout << "0 - Exit\n";
			cout << "1 - Player Menu\n";
			cout << "2 - Dungeon Master Menu\n";
			cin >> user_choice;
		}
		if (user_choice == 0)
		{
			cout << "Goodbye!\n";
			system("pause");
			storeData(testPlayer, items, itemz);
			exit(1);
		}
		if (user_choice == 1)
		{
			outsideMenu(testPlayer, items, itemz);
		}
		if (user_choice == 2)
		{
			DMmenu();
		}
		if (user_choice)
		{
			cout << "Please select whether you are a player or the Dungeon Master\n";
			cout << "0 - Exit\n";
			cout << "1 - Player Menu\n";
			cout << "2 - Dungeon Master Menu\n";
			cin >> user_choice;
		}
	} while (user_choice);
}

void storeData(PC pc, string items[], double itemz[])
{
	ofstream fout;
	string tmp = "IAN";
	int num = 10;
	int num2 = 0;
	
	fout.open("You.txt");

	fout << "PlayerName: " << pc.getName() << endl //character.getName()
		<< "Level: " << pc.getLevel() << endl //pc.getLevel()
		<< "Class: " << pc.getPClass() << endl//pc.getPClass()
		<< "Alignment:" << pc.getAlignment() << endl// character.getAlignment()
		<< endl
		<< "Str: " << pc.getAScores(0) << endl// character.getAScores(int num) for next six.
		<< "Dex: " << pc.getAScores(1) << endl
		<< "Con: " << pc.getAScores(2) << endl
		<< "Int: " << pc.getAScores(3) << endl
		<< "Wis: " << pc.getAScores(4) << endl
		<< "Cha: " << pc.getAScores(5) << endl
		<< endl
		<< "HP: " << pc.getHP() << endl// character.getHP()
		<< "AC: " << pc.getAClass() << endl// character.getACLass()
		<< endl
		<< "Speed: " << pc.getSpeed() << endl// character.getSpeed()
		<< endl
		<< "Initiative: " << pc.getInit() << endl// character.getInit()
		<< endl
		<< "Fortitude: " << pc.getSaves(0) << endl// character.getSaves(int num) for next 3.
		<< "Reflex: " << pc.getSaves(1) << endl
		<< "Will: " << pc.getSaves(2) << endl
		<< endl
		<< "Acrobatics: " << pc.getSkills(0) << endl// character.getSkills(int num) for next 35.
		<< "Appraise: " << pc.getSkills(1) << endl
		<< "Bluff: " << pc.getSkills(2) << endl
		<< "Climb: " << pc.getSkills(3) << endl
		<< "Craft: " << pc.getSkills(4) << endl
		<< "Diplomacy: " << pc.getSkills(5) << endl
		<< "Disable Device: " << pc.getSkills(6) << endl
		<< "Disguise: " << pc.getSkills(7) << endl
		<< "Escape Artist: " << pc.getSkills(8) << endl
		<< "Fly: " << pc.getSkills(9) << endl
		<< "Handle Animal: " << pc.getSkills(10) << endl
		<< "Heal: " << pc.getSkills(11) << endl
		<< "Intimidate: " << pc.getSkills(11) << endl
		<< "KArcana: " << pc.getSkills(12) << endl
		<< "KDungeoneering: " << pc.getSkills(13) << endl
		<< "KEngingeering: " << pc.getSkills(14) << endl
		<< "KGeography: " << pc.getSkills(15) << endl
		<< "KHistory: " << pc.getSkills(16) << endl
		<< "KLocal: " << pc.getSkills(17) << endl
		<< "KNature: " << pc.getSkills(18) << endl
		<< "KNobility: " << pc.getSkills(19) << endl
		<< "KPlanes: " << pc.getSkills(20) << endl
		<< "KReligion: " << pc.getSkills(21) << endl
		<< "Linguistics: " << pc.getSkills(22) << endl
		<< "Perception: " << pc.getSkills(23) << endl
		<< "Perform: " << pc.getSkills(24) << endl
		<< "Profession: " << pc.getSkills(25) << endl
		<< "Ride: " << pc.getSkills(26) << endl
		<< "SenseMotive: " << pc.getSkills(27) << endl
		<< "SleightofHand: " << pc.getSkills(28) << endl
		<< "Spellcraft: " << pc.getSkills(29) << endl
		<< "Stealth: " << pc.getSkills(30) << endl
		<< "Survival: " << pc.getSkills(32) << endl
		<< "Swim: " << pc.getSkills(33) << endl
		<< "UseMagicDevice: " << pc.getSkills(34) << endl
		<< endl
		<< "Armor" << endl
		<< pc.armor.getType() << endl // armor.type
		<< "AC: " << pc.armor.getACBon() << endl //armor.acBonus
		<< "ArmorCheckPen: " << pc.armor.getACPen() << endl //armor.acPenalty
		<< "MaxDex: " << pc.armor.getMDex() << endl //armor.mDexBonus
		//<< "Speed: " << pc.armor.getSpeed() << endl //armor.speed
		<< "Weight: " << pc.armor.getWeight() << endl //armor.weight
		<< "Enchantment: " << pc.armor.getEnchant() << endl //armor.enchant
		<< "EnchantmentInfo: " << pc.armor.getEchInfo() << endl; //armor.enchantInfo

	fout.close();
}

//Purpose: setting stat for allignment
//Pre: input value
//Post: sets value for allignment
//Cite: 
//Author: Ian
string determineAlignment(int n){

	string tmp;
	switch (n){
	case 1:
		tmp = "Lawful Good";
		break;
	case 2:
		tmp = "Neutral Good";
		break;
	case 3:
		tmp = "Chaotic Good";
		break;
	case 4:
		tmp = "Lawful Neutral";
		break;
	case 5:
		tmp = "True Neutral";
		break;
	case 6:
		tmp = "Chaotic Neutral";
		break;
	case 7:
		tmp = "Lawful Evil";
		break;
	case 8:
		tmp = "Neutral Evil";
		break;
	case 9:
		tmp = "Chaotic Evil";
		break;
	default: "No Alignment Available";
	}

	return tmp;

}

//Purpose: Random number generator
//Pre: input value
//Post: returns random number
//Cite: 
//Author: Zach
int roll(int diceNumber)
{
	srand(time(NULL));
	int dice = rand() % diceNumber;
	dice += 1;
	return dice;
}


//Purpose: sets value for all other stats
//Pre: none
//Post: sets value for other variables
//Cite: 
//Author: Ian
int rollStats(){

	int statRoll = 0, tmp = 0, dice[4];

	for (int i = 0; i < 4; i++){
		dice[i] = 0;
	}

	for (int i = 0; i < 4; i++){
		dice[i] = roll(6);
	}

	for (int j = 0; j < 4; j++)
	{
		for (int i = 0; i < 3; i++)
		{
			if (dice[i + 1] > dice[i])
			{
				tmp = dice[i];
				dice[i] = dice[i + 1];
				dice[i + 1] = tmp;
			}
		}
	}

	for (int i = 0; i < 3; i++)
	{
		statRoll += dice[i];
	}

	cout << "You rolled a " << dice[0] << ", a " << dice[1] << ", a" << dice[2] << ", and a" << dice[3] << endl
		<< "We will add the three highest rolls and set that as your stat.\n";

	return statRoll;
}

void operator >>(istream& in, PC pc)
{
	string items[1000];
	double itemz[1000];
	loadCharacter(pc, items, itemz);
}

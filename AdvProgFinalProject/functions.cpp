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

#include"header.h"


//Purpose: 
//Pre: 
//Post: 
//Cite: 
//Author: 
void startingMenu(PC testPlayer)
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
			exit(1);
		}
		if (user_choice == 1)
		{
			outsideMenu(testPlayer);
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

//Purpose: 
//Pre: 
//Post: 
//Cite: 
//Author: 
void outsideMenu(PC testPlayer)
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
		playMenu(testPlayer);
	}
	if (user_choice2 == 2)
	{
		manageMenu(testPlayer);
	}
}

//Purpose: 
//Pre: 
//Post: 
//Cite: 
//Author: 
void DMmenu()
{
	int user_choice3 = -1;
	while (user_choice3 < 0 || user_choice3 > 3)
	{
		cout << "Dungeon Master: What would you like to do?\n";
		cout << "0 - Back to Starting Menu\n";
		cout << "1 - Search for Monsters\n";
		cout << "2 - Play As Monster\n";
		cout << "3 - Generate Loot\n";
		cin >> user_choice3;
	}
	if (user_choice3 == 0)
	{
		cout << "Returning to starting menu.\n";
		system("pause");
	}
	if (user_choice3 == 1)
	{
		searchMonsters();
		system("pause");
		DMmenu();
	}
	if (user_choice3 == 2)
	{
		playAsMonster();
		system("pause");
		DMmenu();
	}
	if (user_choice3 == 3)
	{
		generateLoot();
		system("pause");
		DMmenu();
	}
}

//Purpose: 
//Pre: 
//Post: 
//Cite: 
//Author: 
void playMenu(PC testPlayer)
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
		outsideMenu(testPlayer);
	}
	if (user_choice4 == 1)
	{
		initiativeCheck(testPlayer);
		system("pause");
		playMenu(testPlayer);
	}
	if (user_choice4 == 2)
	{
		attack(testPlayer);
		system("pause");
		playMenu(testPlayer);
	}
	if (user_choice4 == 3)
	{
		manageHealth(testPlayer);
		system("pause");
		playMenu(testPlayer);
	}
	if (user_choice4 == 4)
	{
		rollSaves(testPlayer);
		system("pause");
		playMenu(testPlayer);
	}
	if (user_choice4 == 5)
	{
		rollSkills(testPlayer);
		system("pause");
		playMenu(testPlayer);
	}
}

//Purpose: 
//Pre: 
//Post: 
//Cite: 
//Author: 
void manageMenu(PC testPlayer)
{
	int user_choice5 = -1;
	while (user_choice5 < 0 || user_choice5 > 5)
	{
		cout << "Player(Manage Mode): What would you like to do?\n";
		cout << "0 - Back to Starting Menu\n";
		cout << "1 - Change Character\n";
		cout << "2 - Load Character\n";
		cout << "3 - Build Default\n";
		cout << "4 - Create New Character\n";
		cout << "5 - Delete A Character\n";
		cin >> user_choice5;
	}
	if (user_choice5 == 0)
	{
		cout << "Returning to starting menu.\n";
		system("pause");
		outsideMenu(testPlayer);
	}
	if (user_choice5 == 1)
	{
		changeCharacter(testPlayer);
		system("pause");
		manageMenu(testPlayer);
	}
	if (user_choice5 == 2)
	{
		loadCharacter(testPlayer);
		system("pause");
		manageMenu(testPlayer);
	}
	if (user_choice5 == 3)
	{
		buildDefault();
		system("pause");
		manageMenu(testPlayer);
	}
	if (user_choice5 == 4)
	{
		newCharacter(testPlayer);
		system("pause");
		manageMenu(testPlayer);
	}
	if (user_choice5 == 5)
	{
		deleteCharacter();
		system("pause");
		manageMenu(testPlayer);
	}
}

//Purpose: 
//Pre: 
//Post: 
//Cite: 
//Author: 
void loadCharacter(PC pc){

	ifstream file;

	string tmp;

	int intTemp, ascoresTemp[6];

	file.open("sample.txt");

	for (int i = 1; i < 3; i++){
		file >> tmp;
	}

	pc.setName(tmp);

	file >> tmp;

	file >> intTemp;

	pc.setLevel(intTemp);

	file >> tmp;

	pc.setPClass(tmp);

	file >> tmp;

	file >> intTemp;

	pc.setAlignment(intTemp);

	for (int j = 0; j < 6; j++){
		file >> tmp;
		file >> ascoresTemp[j];
	}

	pc.setAScores(ascoresTemp);

	//for (int k = 0; k < 6; k++)
	//	cout << pc.getAScores(k);

	system("PAUSE");

	
}

//Purpose: 
//Pre: 
//Post: 
//Cite: 
//Author: 
void initiativeCheck(PC pc)
{ 
	int tmp, dice = 20;
	cout << "hi" << pc.getInit() << " " << roll(20) << "goodbye" << endl;
	tmp = pc.getInit() + roll(dice);

	cout << tmp << endl;
}

//Purpose: 
//Pre: 
//Post: 
//Cite: 
//Author: 
void attack(PC pc){ }

//Purpose: 
//Pre: 
//Post: 
//Cite: 
//Author: 
void manageHealth(PC pc){ }

//Purpose: 
//Pre: 
//Post: 
//Cite: 
//Author: 
void rollSaves(PC pc){ }

//Purpose: 
//Pre: 
//Post: 
//Cite: 
//Author: 
void rollSkills(PC pc){ }

//Purpose: 
//Pre: 
//Post: 
//Cite: 
//Author: 
void newCharacter(PC pc){ }

//Purpose: 
//Pre: 
//Post: 
//Cite: 
//Author: 
void changeCharacter(PC pc){ }

//Purpose: 
//Pre: 
//Post: 
//Cite: 
//Author: 
void deleteCharacter(){ }

//Purpose: 
//Pre: 
//Post: 
//Cite: 
//Author: 
void searchMonsters(){ }

//Purpose: 
//Pre: 
//Post: 
//Cite: 
//Author: 
void playAsMonster(){ }

//Purpose: 
//Pre: 
//Post: 
//Cite: 
//Author: 
int rollStats(){

	int roll = 0, dice[4];

	for (int i = 0; i < 4; i++){
		dice[i] = 0;
	}

	return roll;
}

//Purpose: 
//Pre: 
//Post: 
//Cite: 
//Author: 
int roll(int diceNumber)
{
	srand(time(NULL));
	cout << "dice\n";
	int dice = rand() % diceNumber;
	dice += 1;
	return dice;
}



//Purpose: 
//Pre: 
//Post: 
//Cite: 
//Author: 
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

//Purpose: 
//Pre: 
//Post: 
//Cite: 
//Author: 
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
}
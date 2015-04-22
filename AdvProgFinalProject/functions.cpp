#include"header.h"

void startingMenu()
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
			outsideMenu();
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

void outsideMenu()
{
	int user_choice2 = -1;
	while (user_choice2 < 0 || user_choice2 > 2)
	{
		cout << "Please select whether you are a player or the Dungeon Master\n";
		cout << "0 - Back to Starting Menu\n";
		cout << "1 - ...\n";
		cout << "2 - ...\n";
		cin >> user_choice2;
	}
	if (user_choice2 == 0)
	{

	}
	if (user_choice2 == 1)
	{
		
	}
	if (user_choice2 == 2)
	{
		
	}

}

void loadCharacter(PC pc){

	ifstream file;

	string tmp;

	file.open("sample.txt");

	file >> tmp;

	tmp >> pc.getName;

	cout << pc.getName;

	system("PAUSE");
	
}
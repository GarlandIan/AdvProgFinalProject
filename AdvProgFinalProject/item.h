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

#ifndef ITEM_H
#define ITEM_H

#include "weapon.h"
struct Item
{
	string name;
	string description;
	double weight;
	int price;
	int numOfItem;

	Item();
	Item(string n, string d, double w, int p, int noi);
	Item(const Item &i);
	~Item();

	void setName(string n);
	void setDescription(string d);
	void setWeight(double w);
	void setPrice(int p);
	void setNumOfItem(int noi);

	string getName();
	string getDescription();
	double getWeight();
	int getPrice();
	int getNumOfItem();


};

#endif // !ITEM_H
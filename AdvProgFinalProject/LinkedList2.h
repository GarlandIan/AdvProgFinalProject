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
#ifndef LINKEDLIST2_H
#define LINKEDLIST2_H

#include "item.h"

using namespace std;
class LinkedList2
{
protected:
	struct List2Node
	{
		int value;
		List2Node *next;
		List2Node(int value1, List2Node *next1 = NULL)
		{
			value = value1;
			next = next1;
		}
	};
	List2Node *head;
public:
	LinkedList2() { head = NULL; } //default constructor
	~LinkedList2(); //destructor

	void add(int thing2);
	void remove(int thing2);
	void displayList() const;
};

#endif
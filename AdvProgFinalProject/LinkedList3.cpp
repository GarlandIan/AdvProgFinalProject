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
#include "LinkedList3.h"

using namespace std;

//Purpose: add an idex number to a node in the linked list
//Pre: None
//Post: node added to the linked lists that are used in load character function
//Cite: 
//Author: Kody
void LinkedList3::add(double thing3)
{
	if (head == NULL)
	{
		head = new List3Node(thing3);
	}
	else
	{
		List3Node *nodePtr = head;
		while (nodePtr->next != NULL)
		{
			nodePtr = nodePtr->next;
		}
		nodePtr->next = new List3Node(thing3);
	}
}

//Purpose: The list needs to be displayed in order to show that the indexes are being added to it.
//Pre: None
//Post: displays list of nodes
//Cite: 
//Author: Kody
void LinkedList3::displayList() const
{
	List3Node *nodePtr = head;
	while (nodePtr)
	{
		cout << nodePtr->value << "     ";
		nodePtr = nodePtr->next;
	}
}

//Purpose: The nodes need a way to be removed
//Pre: None
//Post: After the function is performed the first node in the linked list will be removed.
//Cite: 
//Author: Kody
void LinkedList3::remove(double thing3)
{
	List3Node *nodePtr, *previousNodePtr;
	if (!head)
	{
		return;
	}
	if (head->value == thing3)
	{
		nodePtr = head;
		head = head->next;
		delete nodePtr;
	}
	else
	{
		nodePtr = head;
		while (nodePtr != NULL && nodePtr->value != thing3)
		{
			previousNodePtr = nodePtr;
			nodePtr = nodePtr->next;
		}
		if (nodePtr)
		{
			previousNodePtr = nodePtr->next;
			delete nodePtr;
		}
	}
}

//Purpose: destructor that will clear the entire list if not done so that that there isn't extra memory going
//Pre: None
//Post: free all memory used from the nodes.
//Cite: 
//Author: Kody
LinkedList3::~LinkedList3()
{
	List3Node *nodePtr = head;
	while (nodePtr != NULL)
	{
		List3Node *tbd = nodePtr;
		nodePtr = nodePtr->next;
		delete tbd;
	}
}
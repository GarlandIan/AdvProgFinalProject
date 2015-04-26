
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
#include "LinkedList.h"

using namespace std;

//add an idex number to a node in the linked list
void LinkedList::add(string thing)
{
	if (head == NULL)
	{
		head = new ListNode(thing);
	}
	else
	{
		ListNode *nodePtr = head;
		while (nodePtr->next != NULL)
		{
			nodePtr = nodePtr->next;
		}
		nodePtr->next = new ListNode(thing);
	}
}
//index is stored in the order

//The list needs to be displayed in order to show that the indexes are being added to it.
void LinkedList::displayList() const
{
	ListNode *nodePtr = head;
	while (nodePtr)
	{
		cout << nodePtr->value << "     ";
		nodePtr = nodePtr->next;
	}
}
//the current list will be displayed once this is performed.

//The nodes need a way to be removed
void LinkedList::remove(string thing)
{
	ListNode *nodePtr, *previousNodePtr;
	if (!head)
	{
		return;
	}
	if (head->value == thing)
	{
		nodePtr = head;
		head = head->next;
		delete nodePtr;
	}
	else
	{
		nodePtr = head;
		while (nodePtr != NULL && nodePtr->value != thing)
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
//After the function is performed the first node in the linked list will be removed.

//destructor that will clear the entire list if not done so that that there isn't extra memory going
LinkedList::~LinkedList()
{
	ListNode *nodePtr = head;
	while (nodePtr != NULL)
	{
		ListNode *tbd = nodePtr;
		nodePtr = nodePtr->next;
		delete tbd;
	}
}
#include "LinkedList.h"

using namespace std;

//add an idex number to a node in the linked list
void LinkedList::add(int index)
{
	if (head == NULL)
	{
		head = new ListNode(index);
	}
	else
	{
		ListNode *nodePtr = head;
		while (nodePtr->next != NULL)
		{
			nodePtr = nodePtr->next;
		}
		nodePtr->next = new ListNode(index);
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
void LinkedList::remove(int index)
{
	ListNode *nodePtr, *previousNodePtr;
	if (!head)
	{
		return;
	}
	if (head->value == index)
	{
		nodePtr = head;
		head = head->next;
		delete nodePtr;
	}
	else
	{
		nodePtr = head;
		while (nodePtr != NULL && nodePtr->value != index)
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
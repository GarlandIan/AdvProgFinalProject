#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "item.h"

using namespace std;
class LinkedList
{
protected:
	struct ListNode
	{
		double value;
		ListNode *next;
		ListNode(double value1, ListNode *next1 = NULL)
		{
			value = value1;
			next = next1;
		}
	};
	ListNode *head;
public:
	LinkedList() { head = NULL; } //default constructor
	~LinkedList(); //destructor

	void add(int index); //adds index to the linked list
	void remove(int index); //removes index from the linked list
	void displayList() const; //displayed the current list of indexes
};

#endif
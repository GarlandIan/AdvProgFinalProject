/*
Author:: Cody        Ian Garland, Kody Greeley, Zachary Miller
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

#include "item.h"


//Purpose: default constructor
//Pre: none
//Post: makes default constructor
//Cite: 
//Author:: Cody 
Item::Item()
{
	name = "";
	description = "";
	weight = 0.00;
	price = 0;
	numOfItem = 0;
}

//Purpose: simple constructor
//Pre: none
//Post: makes simple constructor
//Cite: 
//Author:: Cody 
Item::Item(string n, string d, double w, int p, int noi)
{
	name = n;
	description = d;
	weight = w;
	price = p;
	numOfItem = noi;
}

//Purpose: copy constructor
//Pre: none
//Post: makes one instance of Item into another
//Cite: 
//Author:: Cody 
Item::Item(const Item &i)
{
	name = i.name;
	description = i.description;
	weight = i.weight;
	price = i.price;
	numOfItem = i.numOfItem;
}

//Purpose: destructor
//Pre: none
//Post: destruct-inates
//Cite: 
//Author:: Cody 
Item::~Item(){}


//Purpose: sets description
//Pre: input value
//Post: sets value of description
//Cite: 
//Author:: Cody 
void Item::setDescription(string d)
{
	description = d;
}

//Purpose: sets name
//Pre: input value
//Post: sets value of name
//Cite: 
//Author:: Cody
void Item::setName(string n)
{
	name = n;
}

//Purpose: sets number of items
//Pre: input value
//Post: sets value of number of items
//Cite: 
//Author:: Cody
void Item::setNumOfItem(int noi)
{
	numOfItem = noi;
}

//Purpose: sets price
//Pre: input value
//Post: sets value of price
//Cite: 
//Author:: Cody
void Item::setPrice(int p)
{
	price = p;
}

//Purpose: sets weight
//Pre: input value
//Post: sets value of weight
//Cite: 
//Author:: Cody
void Item::setWeight(double w)
{
	weight = w;
}

//Purpose: gets description
//Pre: none
//Post: returns value of description
//Cite: 
//Author:: Cody
string Item::getDescription()
{
	return description;
}

//Purpose: gets name
//Pre: none
//Post: returns value of name
//Cite: 
//Author:: Cody
string Item::getName()
{
	return name;
}

//Purpose: gets number of items
//Pre: none
//Post: returns number of items
//Cite: 
//Author:: Cody
int Item::getNumOfItem()
{
	return numOfItem;
}

//Purpose: gets price
//Pre: none
//Post: returns value of price
//Cite: 
//Author:: Cody
int Item::getPrice()
{
	return price;
}

//Purpose: gets weight
//Pre: none
//Post: returns value of weight
//Cite: 
//Author:: Cody
double Item::getWeight()
{
	return weight;
}




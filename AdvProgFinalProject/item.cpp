#include "item.h"

Item::Item()
{
	name = "";
	description = "";
	weight = 0.00;
	price = 0;
	numOfItem = 0;
}

Item::Item(string n, string d, double w, int p, int noi)
{
	name = n;
	description = d;
	weight = w;
	price = p;
	numOfItem = noi;
}

Item::Item(const Item &i)
{
	name = i.name;
	description = i.description;
	weight = i.weight;
	price = i.price;
	numOfItem = i.numOfItem;
}

Item::~Item(){}


void Item::setDescription(string d)
{
	description = d;
}

void Item::setName(string n)
{
	name = n;
}


void Item::setNumOfItem(int noi)
{
	numOfItem = noi;
}

void Item::setPrice(int p)
{
	price = p;
}

void Item::setWeight(double w)
{
	weight = w;
}

string Item::getDescription()
{
	return description;
}

string Item::getName()
{
	return name;
}

int Item::getNumOfItem()
{
	return numOfItem;
}

int Item::getPrice()
{
	return price;
}

double Item::getWeight()
{
	return weight;
}




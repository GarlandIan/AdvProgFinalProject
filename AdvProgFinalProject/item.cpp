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

void Item::setName(string n)
{
	name = n;
}

void Item::setDescription(string d)
{
	description = d;
}

void Item::setWeight(double w)
{
	weight = w;
}

void Item::setPrice(int p)
{
	price = p;
}

void Item::setNumOfItem(int noi)
{
	numOfItem = noi;
}

string Item::getName()
{
	return name;
}

string Item::getDescription()
{
	return description;
}

double Item::getWeight()
{
	return weight;
}

int Item::getPrice()
{
	return price;
}

int Item::getNumOfItem()
{
	return numOfItem;
}



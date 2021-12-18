#include "menu.h"

Menu::Menu()
{
	this->price = 0;
	this->id = 0;
}

Menu::Menu(string name, string type, int price, int capacity)
{
	this->name = name;
	this->type = type;
	this->price = price;
}

void Menu::setName(string name)
{
	this->name = name;
}
void Menu::setType(string type)
{
	this->type = type;
}
void Menu::setPrice(int price)
{
	this->price = price;
}

string Menu::getName()
{
	return name;
}

string Menu::getType()
{
	return type;
}

int Menu::getPrice()
{
	return price;
}

int Menu::getId()
{
	return id;
}

void Menu::setId(int id)
{
	this->id = id;
}

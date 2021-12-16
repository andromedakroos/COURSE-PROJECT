#include "menu.h"

Menu::Menu()
{
	this->price = 0;
	this->capacity = 0;
	this->id = 0;
}

Menu::Menu(string name, string type, int price, int capacity)
{
	this->name = name;
	this->type = type;
	this->price = price;
	this->capacity = capacity;
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
void Menu::setCapacity(int capacity)
{
	this->capacity = capacity;
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

int Menu::getCapacity()
{
	return capacity;
}

int Menu::getId()
{
	return id;
}

void Menu::setId(int id)
{
	this->id = id;
}

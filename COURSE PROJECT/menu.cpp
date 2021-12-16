#include "menu.h"

Menu::Menu::Menu()
{
	this->price = 0;
	this->capacity = 0;
	this->id = 0;
}

Menu::Menu::Menu(string name, string type, int price, int capacity)
{
	this->name = name;
	this->type = type;
	this->price = price;
	this->capacity = capacity;
}

void Menu::Menu::setName(string name)
{
	this->name = name;
}
void Menu::Menu::setType(string type)
{
	this->type = type;
}
void Menu::Menu::setPrice(int price)
{
	this->price = price;
}
void Menu::Menu::setCapacity(int capacity)
{
	this->capacity = capacity;
}

string Menu::Menu::getName()
{
	return name;
}

string Menu::Menu::getType()
{
	return type;
}

int Menu::Menu::getPrice()
{
	return price;
}

int Menu::Menu::getCapacity()
{
	return capacity;
}

int Menu::Menu::getId()
{
	return id;
}

void Menu::Menu::setId(int id)
{
	this->id = id;
}

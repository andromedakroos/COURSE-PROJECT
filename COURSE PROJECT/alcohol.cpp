#include "alcohol.h"

void Menu::Alcohol::setStrength(int strength)
{
	this->strength = strength;
}

int Menu::Alcohol::getStrength()
{
	return strength;
}

int Menu::Alcohol::checking(int x)
{
	{
		bool success = true;
		while (success)
		{
			if (cin.peek() != '\n' || x <= 0)
			{
				cin.clear();
				cin.ignore(3333333, '\n');
				cout << "Incorrect number! Please re-enter!" << endl;
				cin >> x;
			}
			else
				success = false;
		}
		return x;

	}
}

void Menu::Alcohol::input()
{

	string tmp;
	int a;
	cout << "Enter name: " << endl;
	getline(cin, tmp, '\n');
	setName(tmp);
	cout << "Enter type of meal(snack,hot dish,salad): " << endl;
	getline(cin, tmp, '\n');
	setType(tmp);
	cout << ": " << endl;
	cin >> a;
	a = checking(a);
	setStrength(a);
	cout << "): " << endl;
	cin >> a;
	a = checking(a);
	setCapacity(a);
	cout << ": " << endl;
	cin >> a;
	a = checking(a);
	setPrice(a);
	cin.ignore();

}
void Menu::Alcohol::output()
{
	cout << "Name of meal: " <<
		getName() << "\nType of meal: " <<
		getType() << "\nComposition of meal:" <<
		getStrength() << "\n Weight of meal(gr): " <<
		getCapacity() << "\nPrice(rub): " <<
		getPrice() << "\nID: " <<
		getId() << "\n" << endl;
};
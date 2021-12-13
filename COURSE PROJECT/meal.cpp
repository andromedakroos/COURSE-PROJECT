#include "meal.h"

void Menu::Meal::setTaste(string taste)
{
	this->taste = taste;
}

string Menu::Meal::getTaste()
{
	return taste;
}

int Menu::Meal::checking(int x)
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

void Menu::Meal::input()
{
	string tmp;
	int a;
	cout << "Enter name: " << endl;
	getline(cin, tmp, '\n');
	setName(tmp);
	cout << "Enter type of meal(snack,hot dish,salad): " << endl;
	getline(cin, tmp, '\n');
	setType(tmp);
	cout << "Enter composition of the dish: " << endl;
	getline(cin, tmp, '\n');
	setTaste(tmp);
	cout << "Weight(gr): " << endl;
	cin >> a;
	a = checking(a);
	setCapacity(a);
	cout << "Price(rub): " << endl;
	cin >> a;
	a = checking(a);
	setPrice(a);
	cin.ignore();
}

void Menu::Meal::output()
{

	cout << "Name of meal: " <<
		getName() << "\nType of meal: " <<
		getType() << "\nComposition of meal:" <<
		getTaste() << "\n Weight of meal(gr): " <<
		getCapacity() << "\nPrice(rub): " <<
		getPrice() << "\nID: " <<
		getId() << "\n" << endl;

}
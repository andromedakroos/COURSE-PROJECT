#include <iomanip>
#include "meal.h"


int chec_king()
{
	int x = 0;
	{
		bool success = true;
		while (success)
		{
			cin >> x;
			if (cin.peek() != '\n' || x < 0)
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

string length_Check()
{
	string name;
	getline(cin, name, '\n');
	bool success = true;
	while (success)
	{
		int l = name.length();
		if (l > 10)
		{
			cin.clear();
			cin.ignore(3333333, '\n');
			cout << "Name is too long, please re-enter!" << endl;
			getline(cin, name, '\n');
		}
		else
			success = false;
	}
	return name;
}


void Meal::setWeight(int weight)
{
	this->weight = weight;
}

void Meal::setCalories(int calories)
{
	this->calories=calories;
}

int Meal::getWeight()
{
	return weight;
}

int Meal::getCalories()
{
	return calories;
}

void Meal::input()
{
	string tmp;
	int a;
	cout << "Enter name: " << endl;
	tmp = length_Check();
	setName(tmp);
	cout << "Enter type of meal(snack,hot dish,salad): " << endl;
	tmp = length_Check();
	setType(tmp);
	cout << "Weight(gr): " << endl;;
	a = chec_king();
	setWeight(a);
	cout << "Calories: " << endl;;
	a = chec_king();
	setCalories(a);
	cout << "Price(rub): " << endl;
	a = chec_king();
	setPrice(a);
	cin.ignore();
}

void Meal::output()
{

	/*cout << "Name of meal: " <<
		getName() << "\nType of meal: " <<
		getType() << "\nComposition of meal:" <<
		getTaste() << "\n Weight of meal(gr): " <<
		getCapacity() << "\nPrice(rub): " <<
		getPrice() << "\nID: " <<
		getId() << "\n" << endl;*/
	cout << getName() << setw(15) << getType()
		<< setw(14) << getWeight()
		<< setw(7) << getPrice()
		<< setw(5) << getId()
		<< "\n"<<endl;

}

ostream& operator<<(ostream& out, Meal& pos)
{

	out << pos.getName() << endl;
	out << pos.getType() << endl;
	out << pos.getPrice()  << endl;
	out << pos.getWeight()  << endl;
	out << pos.getCalories() << endl;
	out << pos.getId() << endl;
	return out;
}

istream& operator>>(istream& in, Meal& pos)
{
	string name, type;
	int price, weight,calories;
	cout << "Enter name: ";
	in >> name;
	pos.setName(name);
	cout << "Etner type(beer, wine): ";
	in >> type;
	pos.setType(type);
	cout << "Enter price(rub): ";
	price = chec_king();
	pos.setPrice(price);
	cout << "Enter capacity(ml): ";
	weight = chec_king();
	pos.setWeight(weight);
	cout << "Enter calories";
	calories = chec_king();
	pos.setCalories(calories);
	return in;
}

ifstream& operator>>(ifstream& file, Meal& pos)
{
	string name, type;
	int  price, weight, id,calories;

	if (file.is_open())
	{
		file >> name >> type >> price >> weight >>calories>> id;
		pos.setName(name);
		pos.setType(type);
		pos.setPrice(price);
		pos.setWeight(weight);
		pos.setCalories(calories);
		pos.setId(id);
	}
	return file;
}

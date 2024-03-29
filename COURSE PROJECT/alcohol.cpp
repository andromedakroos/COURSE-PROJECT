#include "alcohol.h"
#include <fstream>

string lengthCheck()
{
	string name;
	getline(cin, name, '\n');
		bool success = true;
		while (success)
		{
			int l = name.length();
			if (l > 12)
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

void Alcohol::setCapacity(int capacity)
{
	this->capacity=capacity;
}

int Alcohol::getCapacity()
{
	return capacity;;
}

void Alcohol::setStrength(int strength)
{
	this->strength = strength;
}

int Alcohol::getStrength()
{
	return strength;
}

int checking()
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

void Alcohol::input()
{

	string tmp;
	int a;
	cout << "Enter name: " << endl;
	tmp = lengthCheck();
	setName(tmp);
	cout << "Enter type of drink(beer, vodka): " << endl;
	tmp = lengthCheck();
	setType(tmp);
	cout << "Enter strength: " << endl;
	a = checking();
	setStrength(a);
	cout << "Enter capacity: " << endl;
	a = checking();
	setCapacity(a);
	cout << "Enter price: " << endl;
	a = checking();
	setPrice(a);
	cin.ignore();

}
void Alcohol::output()
{
	
	cout << getId() << setw(20) << getName()<<right
		<< setw(20) << getType()<< right
		<< setw(20) << getStrength()<< right
		<< setw(20) << getCapacity()<< right
		<< setw(20) << getPrice()<< right
		<<"\n"<< endl;
};

ostream& operator<<(ostream& out, Alcohol& pos)
{
	out <<  pos.getName() << endl;
	out <<  pos.getType() << endl;
	out <<  pos.getStrength()<< endl;
	out << pos.getPrice() << endl;
	out << pos.getCapacity() << endl;
	out << pos.getId() << endl;
	return out;
}

istream& operator>>(istream& in, Alcohol& pos)
{
	string name, type;
	int strength, price, capacity;
	cout << "Enter name: ";
	in >>name;
	pos.setName(name);
	cout << "Etner type(beer, wine): ";
	in >> type;
	pos.setType(type);
	cout << "Enter strength(degrees): ";
	strength = checking();
	pos.setStrength(strength);
	cout << "Enter price(rub): ";
	price = checking();
	pos.setPrice(price);
	cout << "Enter capacity(ml): ";
	capacity = checking();
	pos.setCapacity(capacity);
	return in;
}

ifstream& operator>>(ifstream& file, Alcohol& pos)
{
	string name, type;
	int strength, price, capacity,id;
	
	if (file.is_open())
	{
		file >> name >> type >> strength >> price >> capacity >> id;
		pos.setName(name);
		pos.setType(type);
		pos.setStrength(strength);
		pos.setPrice(price);
		pos.setCapacity(capacity);
		pos.setId(id);
	}
	return file;
}


#include "visitor.h"

void Visitor::setName(string name)
{
	this->name = name;
}

void Visitor::setTime(string time)
{
	this->time = time;
}

void Visitor::setTable(int table)
{
	this->table = table;
}

void Visitor::setPhone(string phone)
{
	this->phone = phone;
}

string Visitor::getPhone()
{
	return phone;
}

int Visitor::getTable()
{
	return table;
}

string Visitor::getTime()
{
	return time;
}

string Visitor::getName()
{
	return name;
}

int checking(int x)
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

string phoneCheck(string phone)
{
	int l = phone.length();
	bool success = true;
	while (success)
	{
		
		if (cin.peek() != '\n' || l < 9)
		{
			cin.clear();
			cin.ignore(3333333, '\n');
			cout << "Number is too short! Please re-enter!" << endl;
			getline(cin, phone, '\n');
		}
		else
			success = false;
	}
	return phone;
}

int tableCheck(int table)
{
	bool success = true;
	while (success)
	{

		if (table > 9|| table < 0 )
		{
			cin.clear();
			cin.ignore(3333333, '\n');
			cout << "We have only 8 tables, re-enter number" << endl;
			cin >> table;
		}
		else
			success = false;
	}
	

}

void Visitor::input()
{
	string tmp;
	int a;
	cout << "Enter your name: " << endl;
	getline(cin, tmp, '\n');
	setName(tmp);
	cout << "Enter reservation time: " << endl;
	getline(cin, tmp, '\n');
	setTime(tmp);
	cout << "Enter number of table which you want to reservate: " << endl;
	cin >> a;
	a = checking(a);
	setTable(a);
	cout << "Enter your phone number: " << endl;
	getline(cin, tmp, '\n');
	phoneCheck(tmp);
	setPhone(tmp);
	cin.ignore();
}

void Visitor::output()
{
	cout << "Name of visitor: " <<
		getName() << "\nComing time: " <<
		getTime() << "\nNumber number of table which have been reserved:" <<
		getTable() << "\nPhone number: " <<
		getPhone() << "\n" << endl;
}


#include "visitor.h"

void Visitor::setHour(int hour)
{
	this->hour = hour;
}

void Visitor::setMinute(int minute)
{
	this->minute = minute;
}

void Visitor::setId(int id)
{
	this->id = id;
}

//void Visitor::setName(string name)
//{
//	this->name = name;
//}

//void Visitor::setTime(string time)
//{
//	this->time = time;
//}

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

int Visitor::getHour()
{
	return hour;
}

int Visitor::getMinute()
{
	return minute;
}

//string Visitor::getTime()
//{
//	return time;
//}

//string Visitor::getName()
//{
//	return name;
//}

int Visitor::getId()
{
	return id;
}

int checking(int x)
{
	{
		bool success = true;
		while (success)
		{
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

string phoneCheck(string phone)
{
	/*int l = phone.length();*/
	bool success = true;
	while (success)
	{
		int l = phone.length();
		if (/*cin.peek() != '\n' ||*/ l < 10)
		{
			cin.clear();
			cin.ignore(3333333, '\n');
			cout << "Number is too short! It's should contain more 10 numbers. Please re-enter!" << endl;
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

		if (table > 8 || table < 0 )
		{
			cin.clear();
			cin.ignore(3333333, '\n');
			cout << "We have only 8 tables, re-enter number" << endl;
			cin >> table;
		}
		else
			success = false;
	}
	return table;
	
}

void Visitor::input()
{
	string tmp;
	int a;
	cout << "Enter your name: " << endl;
	getline(cin, tmp, '\n');
	setName(tmp);
	cout << "Enter hour of reservation time: " << endl;
	cin >> a;
	a = checking(a);
	setHour(a);
	cout << "Enter minutes of reservation time: " << endl;
	cin >> a;
	a = checking(a);
	setMinute(a);
	cout << "Enter number of table which you want to reservate: " << endl;
	cin >> a;
	a = checking(a);
	a = tableCheck(a);
	setTable(a);
	cin.ignore();
	cout << "Enter your phone number: " << endl;
	getline(cin, tmp, '\n');
	tmp=phoneCheck(tmp);
	setPhone(tmp);
	cin.ignore();
}

//void Visitor::output()
//{
//	cout << "Name of visitor: " <<
//		getName() << "\nComing time: " <<
//		getTime() << "\nNumber number of table which have been reserved:" <<
//		getTable() << "\nPhone number: " <<
//		getPhone() << "\n" << endl;
//}

void Visitor::output()
{
	cout << "Name of visitor: " <<
		getName() << "\nComing time: " <<
		getHour() <<":"<<
		getMinute()<<"\nNumber number of table which have been reserved: " <<
		getTable() << "\nPhone number: " <<
		getPhone() << "\n" << endl;
}



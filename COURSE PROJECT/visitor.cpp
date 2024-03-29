#include "visitor.h"
#include <vector>
vector<int> num;

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

int Visitor::getId()
{
	return id;
}

int _checking()
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

string phoneCheck(string phone)
{
	bool success = true;
	while (success)
	{
		int l = phone.length();
		if ( l < 10)
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

int tableCheck(int table, vector<int>& num)
{
//\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\������
	num.clear();
	bool success = true;
	while (success)
	{
		for (int i = 0; i < num.size(); i++)
		{
			if (table == num[i])
			{
				cin.clear();
				cin.ignore(3333333, '\n');
				cout << "This table has been reserved, choose another one" << endl;
				cin >> table;
			}

		}
		if (table > 8 || table < 0 )
		{
			cin.clear();
			cin.ignore(3333333, '\n');
			cout << "We have only 8 tables, re-enter number" << endl;
			cin >> table;
		}
		else
			num.push_back(table);
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
	a = _checking();
	setHour(a);
	cout << "Enter minutes of reservation time: " << endl;
	a = _checking();
	setMinute(a);
	cout << "Enter number of table which you want to reservate: " << endl;
	a = _checking();
	a = tableCheck(a, num);
	setTable(a);
	cin.ignore();
	cout << "Enter your phone number: " << endl;
	getline(cin, tmp, '\n');
	tmp=phoneCheck(tmp);
	setPhone(tmp);
	cin.ignore();
}

void Visitor::output()
{
	cout << "Name of visitor: " <<
		getName() << "\nComing time: " <<
		getHour() <<":"<<
		getMinute()<<"\nNumber number of table which have been reserved: " <<
		getTable() << "\nPhone number: " <<
		getPhone() << "\n" << endl;
}

ostream& operator<<(ostream& out, Visitor& pos)
{
	{
		out << pos.getName() << endl;
		out << pos.getHour() << endl;
		out << pos.getMinute() << endl;
		out << pos.getTable() << endl;
		out << pos.getPhone() << endl;
		out << pos.getId() << endl;
		return out;
	}
}

istream& operator>>(istream& in, Visitor& pos)
{
	int hour, minute, table, id;
	string phone, name;
	cout << "Enter name: ";
	in >> name;
	pos.setName(name);
	cout << "Etner hour: ";
	hour = _checking();
	pos.setHour(hour);
	cout << "Enter minute: ";
	minute = _checking();
	pos.setMinute(minute);
	cout << "Enter capacity(ml): ";
	table = _checking();
	pos.setTable(table);
	cout << "Enter phone: ";
	in >> phone;
	pos.setName(name);
	return in;
}

ifstream& operator>>(ifstream& file, Visitor& pos)
{
	int hour,minute,table,id;
	string phone,name;
	if (file.is_open())
	{
		file >> name >> hour >> minute >> table >>phone>> id;
		pos.setName(name);
		pos.setHour(hour);
		pos.setMinute(minute);
		pos.setTable(table);
		pos.setPhone(phone);
		pos.setId(id);
	}
	return file;
}

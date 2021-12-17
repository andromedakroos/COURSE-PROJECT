#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "person.h"
using namespace std;


class Visitor:public Person
{
	friend ostream& operator<<(ostream& out, Visitor& pos);
	friend istream& operator >> (istream& in, Visitor& pos);
	friend ifstream& operator >> (ifstream& file, Visitor& pos);
private:
	int hour;
	int minute;
	int table;
	string phone;
	int id;
public:
	void setHour(int);
	void setMinute(int);
	void setId(int);
	void setTable(int);
	void setPhone(string);
	string getPhone();
	int getTable();
	int getHour();
	int getMinute();
	int getId();
	void input() override;
	void output() override;
};


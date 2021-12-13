#pragma once
#include "Header.h"

class Visitor
{
private:
	string name;
	string time;
	int table;
	string phone;
public:
	void setName(string);
	void setTime(string);
	void setTable(int);
	void setPhone(string);
	string getPhone();
	int getTable();
	string getTime();
	string getName();
	void input();
	void output();
};


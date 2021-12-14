#pragma once
#include <iostream>
#include <string>
#include "person.h"
using namespace std;


class Visitor:public Person
{
private:
	/*string name;*/
	/*string time;*/
	int hour;
	int minute;
	int table;
	string phone;
	int id;
public:
	void setHour(int);
	void setMinute(int);
	void setId(int);
	/*void setName(string);*/
	/*void setTime(string);*/
	void setTable(int);
	void setPhone(string);
	string getPhone();
	int getTable();
	int getHour();
	int getMinute();
	/*string getTime();*/
	/*string getName();*/
	int getId();
	void input() override;
	void output() override;
};


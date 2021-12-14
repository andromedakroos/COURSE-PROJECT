#pragma once
#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
	string name;
public:
	Person();
	Person(string);
	virtual void input() = 0;
	virtual void output() = 0;
	void setName(string);
	string getName();
};


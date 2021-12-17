#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include "menu.h"
using namespace std;


class Alcohol : public Menu
{
	friend ostream& operator << (ostream& out, Alcohol& pos);
	friend istream& operator >> (istream& in, Alcohol& pos);
	friend ifstream& operator >> (ifstream& file, Alcohol& pos);
private:
	int strength;
public:
	
	void setStrength(int);
	int getStrength();
	void input() override;
	void output() override;

};



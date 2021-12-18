#pragma once
#include <iostream>
#include <string>
#include "menu.h"
#include <fstream>
using namespace std;

class Meal : public Menu
{
	friend ostream& operator << (ostream& out, Meal& pos);
	friend istream& operator >> (istream& in, Meal& pos);
	friend ifstream& operator >> (ifstream& file, Meal& pos);
private:
	int weight;
	int calories;
public:
	void setWeight(int);
	void setCalories(int);
	int getWeight();
	int getCalories();
	void input() override;
	void output() override;
};



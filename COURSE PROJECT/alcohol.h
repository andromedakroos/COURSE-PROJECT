#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include "menu.h"
using namespace std;


namespace Menu
{
	class Alcohol : public Menu
	{
		
		friend ostream& operator << (ostream& out, const Alcohol& pos);
		friend istream& operator >> (istream& in, Alcohol& pos);
	private:
		int strength;
	public:
		string lengthCheck();
		void setStrength(int);
		int getStrength();
		void input() override;
		void output() override;

	};
}


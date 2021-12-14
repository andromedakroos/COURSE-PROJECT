#pragma once
#include <iostream>
#include <string>
#include "menu.h"
using namespace std;


namespace Menu
{
	class Alcohol : public Menu
	{
	private:
		int strength;
	public:
		void setStrength(int);
		int getStrength();
		int checking(int x);
		void input() override;
		void output() override;

	};
}


#pragma once
#include <iostream>
#include <string>
#include "menu.h"
using namespace std;


namespace Menu
{

	class Meal : public Menu
	{
	private:
		string taste;
	public:
		void setTaste(string);
		string getTaste();
		int checking(int x);
		void input() override;
		void output() override;
	};
}


#pragma once
#include "Header.h"
#include "menu.h"

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


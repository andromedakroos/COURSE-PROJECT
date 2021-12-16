#pragma once
#include <iostream>
#include <string>
#include "menu.h"
using namespace std;





	class Meal : public Menu
	{
		friend ostream& operator << (ostream& out, Meal& pos);
		friend istream& operator >> (istream& in, Meal& pos);
	private:
		/*string taste;*/
	public:
		/*void setTaste(string);
		string getTaste();*/
		void input() override;
		void output() override;
	};



#pragma once
#include <iostream>
#include <string>
using namespace std;

	class Menu
	{
	private:
		string name;
		string type;
		int price;
		int id;
	public:
		Menu();
		Menu(string, string, int, int);
		virtual void output() = 0;
		virtual void input() = 0;
		void setName(string);
		void setType(string);
		void setPrice(int);
		string getName();
		string getType();
		int getPrice();
		int getId();
		void setId(int);
	};


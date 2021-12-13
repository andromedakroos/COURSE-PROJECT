#pragma once
#include "alcohol.h"
#include "meal.h"
#include "visitor.h"
namespace Menu
{

	class Bar
	{
	private:
		vector <Alcohol> object_alco;
		vector <Meal> object_meal;
		vector <Visitor>object_vis;
	public:
		void add_Pos(int);
		void output_Pos(int);
		void delete_Pos(int, int);
		void sort_up(vector<Alcohol>&, vector<Meal>&, int);
		void sort_down(vector<Alcohol>&, vector<Meal>&, int);
		void sort_menu(int, int);
		void change_info(int, int);

	};
}
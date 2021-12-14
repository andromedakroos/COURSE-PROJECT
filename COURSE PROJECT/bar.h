#pragma once
#include "alcohol.h"
#include "meal.h"
#include "visitor.h"
#include <vector>
using namespace std;


namespace Menu
{

	class Bar
	{
	private:
		vector <Alcohol> object_alco;
		vector <Meal> object_meal;
		vector <Visitor>object_vis;
		
	public:
		
		void add_vis();
		void output_vis();
		void delete_vis(int);
		void sort_vis(vector<Visitor>&);
		void add_pos(int);
		void output_pos(int);
		void delete_pos(int, int);
		void sort_up(vector<Alcohol>&, vector<Meal>&, int);
		void sort_down(vector<Alcohol>&, vector<Meal>&, int);
		void sort_menu(int, int);
		void change_info(int, int);

	};
}
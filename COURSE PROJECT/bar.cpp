#include "bar.h"

void Menu::Bar::add_vis()
{
	object_vis.push_back(Visitor());
	object_vis[object_vis.size() - 1].input();
	object_vis[object_vis.size() - 1].setId(object_vis.size());
}
void Menu::Bar::output_vis()
{
	for (int i = 0; i < object_vis.size(); i++)
	{
		object_vis[i].output();
	}

}
void Menu::Bar::delete_vis(int index)
{
	for (int i = 0; i < object_meal.size(); i++)
	{
		if (object_meal[i].getId() == index)
		{
			object_meal.erase(object_meal.begin() + i);
		}
		else
			cout << "Incorrect number! Please re-enter" << endl;
		return;
	}
}
void Menu::Bar::sort_vis(vector<Visitor>&)
{
	Visitor temp_vis;
	for (int i = 0; i < object_vis.size() - 1; i++)
	{
		for (int j = 0; j < object_vis.size() - i - 1; j++)
		{
			if (object_vis[j].getTable() > object_vis[j + 1].getTable())
			{
				temp_vis = object_vis[j];
				object_vis[j] = object_vis[j + 1];
				object_vis[j + 1] = temp_vis;
			}
		}
	}

}
void Menu::Bar::add_pos(int x)
{
	if (x == 1)
	{
		object_alco.push_back(Alcohol());
		object_alco[object_alco.size() - 1].input();
		object_alco[object_alco.size() - 1].setId(object_alco.size());
	}  
	if (x == 2)
	{
		object_meal.push_back(Meal());
		object_meal[object_meal.size() - 1].input();
		object_meal[object_meal.size() - 1].setId(object_meal.size());
	}
}

void Menu::Bar::output_pos(int x)
{
	system("CLS");
	if (x == 1)
	{
		for (int i = 0; i < object_alco.size(); i++)
		{
			object_alco[i].output();
		}
	}
	if (x == 2)
	{
		for (int i = 0; i < object_meal.size(); i++)
		{
			object_meal[i].output();
		}
	}
	if (x == 3)
	{
		cout << "Drinks:" << endl;
		for (int i = 0; i < object_alco.size(); i++)
		{
			object_alco[i].output();
		}
		cout << "Meals:" << endl;
		for (int i = 0; i < object_meal.size(); i++)
		{
			object_meal[i].output();
		}
	}

}

void Menu::Bar::delete_pos(int index, int choise)
{
	if (choise == 1)
	{
		for (int i = 0; i < object_alco.size(); i++)
		{
			if (object_alco[i].getId() == index)
			{
				object_alco.erase(object_alco.begin() + i);
				return;
			}
			else
				cout << "Incorrect number! Please re-enter" << endl;
			return;
		}
	}
	else if (choise == 2)
	{
		for (int i = 0; i < object_meal.size(); i++)
		{
			if (object_meal[i].getId() == index)
			{
				object_meal.erase(object_meal.begin() + i);
			}
			else
				cout << "Incorrect number! Please re-enter" << endl;
			return;
		}
	}
}

void Menu::Bar::sort_up(vector<Alcohol>&, vector<Meal>&, int choise)
{
	Meal temp_meal;
	Alcohol temp_alco;
	if (choise == 1)
	{
		for (int i = 0; i < object_alco.size() - 1; i++)
		{
			for (int j = 0; j < object_alco.size() - i - 1; j++)
			{
				if (object_alco[j].getPrice() > object_alco[j + 1].getPrice())
				{
					temp_alco = object_alco[j];
					object_alco[j] = object_alco[j + 1];
					object_alco[j + 1] = temp_alco;
				}
			}
		}

	}
	if (choise == 2)
	{
		for (int i = 0; i < object_meal.size() - 1; i++)
		{
			for (int j = 0; j < object_meal.size() - i - 1; j++)
			{
				if (object_meal[j].getPrice() > object_meal[j + 1].getPrice())
				{
					temp_meal = object_meal[j];
					object_meal[j] = object_meal[j + 1];
					object_meal[j + 1] = temp_meal;
				}
			}
		}

	}
}

void Menu::Bar::sort_down(vector<Alcohol>&, vector<Meal>&, int choise)
{
	Meal temp_meal;
	Alcohol temp_alco;
	if (choise == 1)
	{
		for (int i = 0; i < object_alco.size() - 1; i++)
		{
			for (int j = 0; j < object_alco.size() - i - 1; j++)
			{
				if (object_alco[j].getPrice() < object_alco[j + 1].getPrice())
				{
					temp_alco = object_alco[j];
					object_alco[j] = object_alco[j + 1];
					object_alco[j + 1] = temp_alco;
				}
			}
		}

	}
	if (choise == 2)
	{
		for (int i = 0; i < object_meal.size() - 1; i++)
		{
			for (int j = 0; j < object_meal.size() - i - 1; j++)
			{
				if (object_meal[j].getPrice() < object_meal[j + 1].getPrice())
				{
					temp_meal = object_meal[j];
					object_meal[j] = object_meal[j + 1];
					object_meal[j + 1] = temp_meal;
				}
			}
		}

	}
}

void Menu::Bar::sort_menu(int choise, int choisesort)
{

	if (choisesort == 1)
	{

		sort_up(object_alco, object_meal, choise);
	}
	else if (choisesort == 2)
	{

		sort_down(object_alco, object_meal, choise);
	}
}

void Menu::Bar::change_info(int choise, int index)
{
	system("cls");
	if (choise == 1)
	{
		for (int i = 0; i < object_alco.size(); i++)
		{
			if (object_alco[i].getId() == index)
			{
				object_alco[i].input();
				break;
			}
			else
				cout << "Object with number dosen't found! Please re-enter" << endl;
		}
	}
	else if (choise == 2)
	{
		for (int i = 0; i < object_meal.size(); i++)
		{
			if (object_meal[i].getId() == index)
			{
				object_meal[i].input();
				break;
			}
			else
				cout << "Object with number dosen't found! Please re-enter" << endl;
		}
	}
}

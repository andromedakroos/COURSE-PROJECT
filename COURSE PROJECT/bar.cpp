#include "bar.h"

Bar::Bar()
{

}

void Bar::add_vis()
{
	object_vis.push_back(Visitor());
	object_vis[object_vis.size() - 1].input();
	object_vis[object_vis.size() - 1].setId(object_vis.size());
}
void Bar::output_vis()
{
	for (int i = 0; i < object_vis.size(); i++)
	{
		object_vis[i].output();
	}

}
void Bar::delete_vis(int index)
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
void Bar::sort_vis_up(vector<Visitor>&)
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
void Bar::sort_vis_down(vector<Visitor>&)
{
	Visitor temp_vis;
	for (int i = 0; i < object_vis.size() - 1; i++)
	{
		for (int j = 0; j < object_vis.size() - i - 1; j++)
		{
			if (object_vis[j].getTable() < object_vis[j + 1].getTable())
			{
				temp_vis = object_vis[j];
				object_vis[j] = object_vis[j + 1];
				object_vis[j + 1] = temp_vis;
			}
		}
	}
}
void Bar::sort_vis(int choisesort)
{
	if (choisesort == 1)
	{

		sort_vis_up(object_vis);
	}
	else if (choisesort == 2)
	{

		sort_vis_down(object_vis);
	}
	else if (choisesort == 0)
		return;
}
void Bar::change_vis(int index)
{

	for (int i = 0; i < object_vis.size(); i++)
	{
		if (object_vis[i].getId() == index)
		{
			object_vis[i].input();
			break;
		}
		else
			cout << "Object with number dosen't found! Please re-enter" << endl;
	}
}
void Bar::add_pos(int x)
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
	if(x==3)
	{
		object_vis.push_back(Visitor());
		object_vis[object_vis.size() - 1].input();
		object_vis[object_vis.size() - 1].setId(object_vis.size());
	}
	if (x == 0)
		return;
}

void Bar::output_pos(int x)
{
	system("CLS");
	if (x == 1){
		cout << "Name of drink" << setw(15)<< "Type of drink"
		<< setw(10) << "Strength"
		<< setw(10) << "Capacity"
		<< setw(7) << "Price"
		<< setw(5) << "ID"
		<< endl;
		for (int i = 0; i < object_alco.size(); i++)
		{
			object_alco[i].output();
			
		}
	}
	if (x == 2)
	{
		cout << "Name of meal" << setw(15) << "Type of meal"
			<< setw(10) << "Weight"
			<<setw(10)<<"Calories"
			<< setw(7) << "Price"
			<< setw(5) << "ID"
			<< endl;
		for (int i = 0; i < object_meal.size(); i++)
		{
			object_meal[i].output();
		}
	}
	if (x == 3)
	{
		cout << "Name of drink" << setw(15) << "Type of drink"
			<< setw(10) << "Strength"
			<< setw(10) << "Capacity"
			<< setw(7) << "Price"
			<< setw(5) << "ID"
			<< endl;
		for (int i = 0; i < object_alco.size(); i++)
		{
			object_alco[i].output();
		}
		cout << "\n";
		cout << "Name of meal" << setw(15) << "Type of meal"
			<< setw(10) << "Weight"
			<< setw(7) << "Price"
			<< setw(5) << "ID"
			<< endl;
		for (int i = 0; i < object_meal.size(); i++)
		{
			object_meal[i].output();
		}
	}
	if (x == 0)
		return;

}

void Bar::delete_pos(int index, int x)
{
	if (x == 1)
	{
		for (int i =  0; i < object_alco.size(); i++)
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
	else if (x == 2)
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
	else if (x == 0)
		return;
}

void Bar::sort_up(vector<Alcohol>&, vector<Meal>&, int choise)
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

void Bar::sort_down(vector<Alcohol>&, vector<Meal>&, int choise)
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

void Bar::sort_menu(int choise, int choisesort)
{

	if (choisesort == 1)
	{

		sort_up(object_alco, object_meal, choise);
	}
	else if (choisesort == 2)
	{

		sort_down(object_alco, object_meal, choise);
	}
	else if (choisesort == 0)
		return;
}

void Bar::change_info(int choise, int index)
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
	else if (choise == 0)
		return;
}

void Bar::writeInFile()
{
	ofstream alcoFile;
	Alcohol alcoTmp;
	ofstream mealFile;
	Meal mealTmp;
	ofstream visFile;
	Visitor visTmp;
	alcoFile.open("drinks.txt", ofstream::out);
	for (Alcohol alcoTmp : object_alco)
	{
		alcoFile << alcoTmp;
	}
	alcoFile.close();

	mealFile.open("meals.txt", ofstream::out);
	for (Meal mealTmp : object_meal)
	{
		mealFile << mealTmp;
	}
	mealFile.close();

	visFile.open("visitors.txt", ofstream::out);
	for (Visitor visTmp : object_vis)
	{
		visFile << visTmp;
	}
	visFile.close();
}

void Bar::readFromFile()
{
	ifstream alcoFile;
	ifstream visFile;
	ifstream mealFile;
	Alcohol alcoTmp;
	Meal mealTmp;
	Visitor visTmp;

	alcoFile.open("drinks.txt", ifstream::in);
	if (alcoFile.is_open())
	{
		/*cout << "Vse ok" << endl;*/
	}
	while (alcoFile >> alcoTmp)
	{
		if (alcoFile.eof())
			break;
		object_alco.push_back(alcoTmp);
	}
	alcoFile.close();

	mealFile.open("meals.txt", ifstream::in);
	if (mealFile.is_open())
	{
		/*cout << "Vse ok" << endl;*/
	}
	while (mealFile >> mealTmp)
	{
		if (mealFile.eof())
			break;
		object_meal.push_back(mealTmp);
	}
	mealFile.close();

	visFile.open("visitors.txt", ifstream::in);
	if (visFile.is_open())
	{
		/*cout << "Vse ok" << endl;*/
	}
	while (visFile >> visTmp)
	{
		if (visFile.eof())
			break;
		object_vis.push_back(visTmp);
	}
	visFile.close();
}



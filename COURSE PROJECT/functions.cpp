#include "Header.h"
#include "admin.h"

int mainCheck()
{
	int x;
	{
		bool success = true;
		while (success)
		{
			if (cin.peek() != '\n' || x <= 0)
			{
				cin.clear();
				cin.ignore(3333333, '\n');
				cout << "Incorrect number! Please re-enter!" << endl;
				cin >> x;
			}
			else
				success = false;
		}
		return x;
	}
}
void permance(Menu::Bar &bar)
{
	Admin adm;
	int x;
	chooseFile();
	x=chooseEnter();
	do {
		switch (x)
		{
		case 1:
			cout << "Если хотите добавить позицию - 1" << endl;
			cout << "Если хотите просмотреть меню - 2" << endl;
			cout << "Если хотите удалить позицию - 3" << endl;
			cout << "Если хотите изменить позицию - 4" << endl;
			cout << "Если хотите отсортировать по стоимости - 5" << endl;
			cout << "Выход из программы - 6" << endl;
		}
	} while (x != 0);
	
	

}
int chooseEnter()
{
	Admin adm;
	int x;
	cout << "1 - enter like a Administrator" << "\n" <<
		"2-enter like a visitor" <<
		"Your answer : ";
	x = mainCheck();
	if (x == 1)
	{
		adm.input();
		adminCheck(adm);
	}
	cout << "Hello," << adm.getName() << endl;
	return x;
}
void adminCheck(Admin admin)
{
	if (admin.getLog() == "admin" && admin.getPass() == "admin")
	{
		cout << "You successfully autorizied";
	}
	else
		cout << "Incorrect Login or Password, try again";
}

int chooseFile()
{	
	int x;
	cout << "If you want to open created file - 1" << endl;
	cout << "If you want to create new file - 2" << endl;
	x = mainCheck();
	if (x == 1)
	{

	}
	return x;
}




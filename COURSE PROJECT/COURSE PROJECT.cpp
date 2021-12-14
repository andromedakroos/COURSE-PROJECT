#include "bar.h"
#include "Header.h"
#include "file.h"
#include "admin.h"


int  main()
{
	int x, id;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Admin adm;
	Menu::Bar bar;
	File<Menu::Bar> file;

	do 
	{
		
		

	} while (x < 6);
	/*do
	{

		cout << "Если хотите добавить позицию - 1" << endl;
		cout << "Если хотите просмотреть меню - 2" << endl;
		cout << "Если хотите удалить позицию - 3" << endl;
		cout << "Если хотите изменить позицию - 4" << endl;
		cout << "Если хотите отсортировать по стоимости - 5" << endl;
		cout << "Выход из программы - 6" << endl;
		cin >> x;
		switch (x)
		{
		case 1:
			system("CLS");
			cout << "Если хотите добавить алкоголь - 1" << endl;
			cout << "Если хотите добавить блюдо - 2" << endl;
			cin >> x;
			cin.ignore();
			bar.add_pos(x);
			break;
		case 2:
			system("CLS");
			cout << "Если хотите посмотреть алкоголь - 1" << endl;
			cout << "Если хотите посмотреть блюда - 2" << endl;
			cout << "Если хотите посмотреть всё меню - 3" << endl;
			cin >> x;
			bar.output_pos(x);
			break;
		case 3:
			system("CLS");
			cout << "Если хотите удалить алкоголь - 1" << endl;
			cout << "Если хотите удалить блюдо - 2" << endl;
			cin >> x;
			cout << "Введите индекс позиции, которую хотите удалить" << endl;
			cin >> id;
			bar.delete_pos(id, x);
			break;
		case 4:
			system("CLS");
			cout << "Если хотите изменить алкоголь - 1 " << endl;
			cout << "Если хотите изменить блюдо - 2 " << endl;
			cin >> x;
			cout << "Введите индекс позиции, данные которой хотите изменить:" << endl;
			cin >> id;
			cin.ignore();
			bar.change_info(id, x);
			break;
		case 5:
			cout << "Если хотите отсортировать алкоголь - 1" << endl;
			cout << "Если хотите отсортировать блюда - 2" << endl;
			cin >> x;
			cout << "\nOтсортировать по возрастанию - 1" << "\nОтсортировать по убыванию - 2" << endl;
			cin >> id;
			bar.sort_menu(x, id);
			break;
		case 6:
			return;
		}

	} while (x != 6);*/

	return 0;
};
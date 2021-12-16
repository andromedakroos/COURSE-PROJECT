#include "Header.h"
#include "admin.h"

int mainCheck()
{
	int x=0;
	{
		bool success = true;
		while (success)
		{
			cin >> x;
			if (cin.peek() != '\n' || x < 0)
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
void perfomance(Menu::Bar &bar)
{
	Admin adm;
	int x=1,id;
	/*chooseFile();*/
	/*x=chooseEnter();*/
	switch (x)
	{
	case 1:
		do {
			cout << "Add - 1\n" <<
				"Out - 2\n" <<
				"Del - 3\n" <<
				"Change - 4\n" <<
				"Sort - 5\n" <<
				"Show info about reservated tables - 6\n" <<
				"Delete info about reservated tables - 7\n" <<
				"Sort info about reservated tables - 8\n" <<
				"Change info about reservated tables - 9\n" <<
				"Exit - 10" << endl;
			x = mainCheck();
			switch (x) {

			case 1:
				system("CLS");
				cout << "Add alco - 1\n" <<
					"Add meal - 2\n" <<
					"Go back - 0" << endl;
				x = mainCheck();
				cin.ignore();
				bar.add_pos(x);
				break;
			case 2:
				system("CLS");
				cout << "Out alco - 1\n" <<
					"Out meal - 2\n" <<
					"All menu - 3\n" <<
					"Go back - 0" << endl;
				x = mainCheck();
				bar.output_pos(x);
				break;
			case 3:
				system("CLS");
				cout << "Show alco - 1\n" <<
					"Show meal - 2\n" <<
					"Go back - 0" << endl;
				x = mainCheck();
				cout << "Enter ID of position which you want to delete" << endl;
				cin >> id;
				bar.delete_pos(id, x);
				break;
			case 4:
				system("CLS");
				cout << "If you want to change alco- 1" << endl;
				cout << "If you want to change meal - 2" << endl;
				cout << "Get back-0" << endl;
				x = mainCheck();
				cout << "Enter ID of position which you want to change: " << endl;
				id = mainCheck();
				cin.ignore();
				bar.change_info(x, id);
				break;
			case 5:
				cout << "If you want to sort alco - 1" << endl;
				cout << "If you want to sort meal - 2" << endl;
				cout << "Get back-0" << endl;
				x = mainCheck();
				cout << "\nSort acending - 1" << "\nSort decending - 2" << endl;
				id = mainCheck();
				bar.sort_menu(id, x);
				break;
			case 6:
				bar.output_vis();
				break;
			case 7:
				x = mainCheck();
				cout << "Enter ID of position which you want to delete" << endl;
				bar.delete_vis(x);
			case 8:
				x = mainCheck();
				cout << "\nSort acending - 1" << "\nSort decending - 2" << endl;
				bar.sort_vis(x);
				
			case 9:
				cout << "Enter ID of position which you want to change: " << endl;
				x = mainCheck();
				bar.change_vis(x);

			}
		} while (x != 10);
			
	case 2:
		do {
			cout << "Show menu - 1\n" <<
				"Make a reservation- 2" <<
				"Exit-3\n" <<
				"Go back - 0" << endl;
			switch (x)
			{
			case 1:
				system("CLS");
				cout << "Out alco - 1\n" <<
					"Out meal - 2\n" <<
					"All menu - 3\n" <<
					"Go back - 0" << endl;
				x = mainCheck();
				bar.output_pos(x);
				break;
			case 2:
				bar.add_vis();
				break;

			}
		} while (x != 3);
		}
	}

int chooseEnter()
{
	Admin adm;
	int x;
	cout << "1 - enter like a Administrator" << "\n" <<
		"2 - enter like a visitor\n" <<
		"Your answer : ";
	x = mainCheck();
	if (x == 1)
	{
		system("CLS");
		adm.input();
		adminCheck(adm);
	}
	system("CLS");
	cout << "Hello," << adm.getName() << endl;
	return x;
}
void adminCheck(Admin admin)
{
	bool success = true;
	while(success)
	if (admin.getLog() != "admin" && admin.getPass() != "admin")
	{
		cout << "Incorrect Login or Password, try again";
		admin.input();
	}
	else {
		cout << "You successfully autorizied\n";
		success = false;
	}
}

//int chooseFile()
//{	
//	int x;
//	cout << "If you want to open created file - 1" << endl;
//	cout << "If you want to create new file - 2" << endl;
//	x = mainCheck();
//	if (x == 1)
//	{
//
//	}
//	return x;
//}




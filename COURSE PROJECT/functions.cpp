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
void perfomance(Bar &bar)
{
	Admin adm;
	int x=1,id;
	x=chooseEnter();
	bar.readFromFile();
	switch (x)
	{
	case 1:
		cout << "Hello, administator!" << endl;
		do {
			cout << "\n1 - Add postion\n" <<
				"2 - Output menu\n" <<
				"3 - Del position \n" <<
				"4 - Change position\n" <<
				"5 - Sort menu\n" <<
				"6 - Show info about reservated tables\n" <<
				"7 - Delete info about reservated tables\n" <<
				"8 - Sort info about reservated tables\n" <<
				"9 - Change info about reservated tables\n" <<
				"10 - Exit" << endl;
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
				cout << "Del alco - 1\n" <<
					"Del meal - 2\n" <<
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
				system("CLS");
				cout << "If you want to sort alco - 1" << endl;
				cout << "If you want to sort meal - 2" << endl;
				cout << "Get back-0" << endl;
				x = mainCheck();
				cout << "\nSort acending - 1" << "\nSort decending - 2" << endl;
				id = mainCheck();
				bar.sort_menu(id, x);
				break;
			case 6:
				system("CLS");
				bar.output_vis();
				break;
			case 7:
				system("CLS");
				x = mainCheck();
				cout << "Enter ID of position which you want to delete" << endl;
				bar.delete_vis(x);
				break;
			case 8:
				system("CLS");
				x = mainCheck();
				cout << "\nSort acending - 1" << "\nSort decending - 2" << endl;
				bar.sort_vis(x);
				break;

			case 9:
				system("CLS");
				cout << "Enter ID of visitor which you want to change: " << endl;
				x = mainCheck();
				bar.change_vis(x);
				break;
			case 10:
				bar.writeInFile();
				return;
			}
		} while (x != 10);

	case 2:
		cout << "Hello, visitor!" << endl;
		do {
			cout << "Show menu - 1\n" <<
				"Make a reservation- 2\n" <<
				"Exit-4\n" << endl;
			x = mainCheck();
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
				system("CLS");
				cin.ignore();
				bar.add_vis();
				break;
			case 4:
				bar.writeInFile();
				return;
			}
		} while (x != 4 || x!=10);
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




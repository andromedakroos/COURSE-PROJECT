#include "admin.h"

Admin::Admin()
{
}

Admin::Admin(string login, string password)
{
	this->login = login;
	this->password = password;
}

void Admin::setLog(string login)
{
	this->login = login;
}

void Admin::setPass(string password)
{
	this->password = password;
}

string Admin::getLog()
{
	return login;
}

string Admin::getPass()
{
	return password;
}

void Admin::input()
{
	string tmp;
	/*int a;*/
	cout << "Enter your name: " << endl;
	getline(cin, tmp, '\n');
	setName(tmp);
	cout << "Enter your login: " << endl;
	getline(cin, tmp, '\n');
	setLog(tmp);
	cout << "Enter your password: " << endl;
	getline(cin, tmp, '\n');
	setPass(tmp);
}

void Admin::output()
{
	cout << "Name of admin: " <<
		getName() << "\nLogin: " <<
		getLog() << "\nPassword: " <<
		getPass() << "\n" << endl;
}

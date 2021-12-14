#pragma once
#include <iostream>
#include <string>
#include "person.h"
using namespace std;

class Admin:public Person
{
private:
	string login;
	string password;
public:
	Admin();
	Admin(string, string);
	void setLog(string);
	void setPass(string);
	string getLog();
	string getPass();
	void input() override;
	void output() override;
};


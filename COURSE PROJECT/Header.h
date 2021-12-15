#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>
#include "admin.h"
#include "file.h"
#include "bar.h"

using namespace std;

void perfomance(Menu::Bar&);
int chooseEnter();
void adminCheck(Admin);
int chooseFile();
int mainCheck();
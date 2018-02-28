#include "stdafx.h"

#include <iostream>
#include <conio.h>
#include "BaseFunction.h"

using namespace std;

char BaseFunction::FunctionMenu() 
{
	cout << endl << "Press R for another round or M to go back to the main menu." << endl;
	char userInnerMenu = _getch();
	while (userInnerMenu != 'R' &&
		userInnerMenu != 'r' &&
		userInnerMenu != 'M' &&
		userInnerMenu != 'm') {
		cout << endl << "(" << userInnerMenu << ") is an invalid Entry. Please, press R for another round or M to go back to the main menu." << endl;
		userInnerMenu = _getch();
	}
	return userInnerMenu;
}
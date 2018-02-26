
#include <iostream>
#include <stdio.h>
#include "BaseFunction.h"

using namespace std;

/*
-- this has to go to the menu class - that will be called in the main function
char BaseFunction::Menu() 
{
	char userInput = '0';
	bool isValid = false;
	do {
		cout << "Please select one of the options below: " << endl;
		for(int menuItem = 1; menuItem < 6; menuItem++)
		{
			cout << "[" << menuItem << endl;
		}
		userInput = getchar();
		isValid = ValidInput(userInput);
	} while (!isValid);
	return 'X';
}

bool BaseFunction::ValidInput(char userInput) 
{
	if (userInput != 'x' || 
		userInput != 'X' || 
		userInput <= '0' || 
		userInput >= '6')
		return false; 
	return true;
}
*/
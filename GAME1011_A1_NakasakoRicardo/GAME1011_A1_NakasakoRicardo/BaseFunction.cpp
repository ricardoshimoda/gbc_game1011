
#include <iostream>
#include <stdio.h>
#include "BaseFunction.h"

using namespace std;

char BaseFunction::Menu() 
{
	char userInput = '0';
	bool isValid = false;
	do {
		/**/
		cout << "Please select one of the options below: " << endl;
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
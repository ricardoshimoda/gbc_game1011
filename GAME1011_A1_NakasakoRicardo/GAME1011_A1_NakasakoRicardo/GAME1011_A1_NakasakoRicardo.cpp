// GAME1011_A1_NakasakoRicardo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <conio.h>

#include "Menu.h"
#include "BaseFunction.h"
#include "FunctionOne.h"
#include "FunctionTwo.h"
#include "FunctionThree.h"
#include "FunctionFour.h"
#include "FunctionFive.h"

using namespace std;

int main()
{
	Menu *mainMenu;
	mainMenu = new Menu();
	char userChoice = '/0';
	do {
		userChoice = mainMenu->GetUserChoice();
		if (userChoice > LOWEST_CHOICE_MENU && userChoice < HIGHEST_CHOICE_MENU)
		{
			int programNumber = userChoice - LOWEST_CHOICE_MENU - 1;
			mainMenu->CallFunction(programNumber);
		}
		else
		{
			userChoice = UPPER_CASE_EXIT_PROGRAM;
		}
	} while (userChoice != UPPER_CASE_EXIT_PROGRAM);

	delete mainMenu;
	cout << endl << "Thanks for using our program. See you soon." << endl;
	cout << "Press any key to exit" << endl;
	_getch();
	return 0;
}


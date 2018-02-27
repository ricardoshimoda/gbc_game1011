#include "stdafx.h"


#include <iostream>
#include <stdio.h>
#include "Constants.h"
#include "Menu.h"
#include "BaseFunction.h"
#include "FunctionOne.h"
#include "FunctionTwo.h"
#include "FunctionThree.h"
#include "FunctionFour.h"
#include "FunctionFive.h"

using namespace std;

Menu::Menu() {
	functions[0] = new FunctionOne();
	functions[1] = new FunctionTwo();
	functions[2] = new FunctionThree();
	functions[3] = new FunctionFour();
	functions[4] = new FunctionFive();
};
Menu::~Menu() {
	for (int i = 0; i < NUM_FUNCTIONS; i++)
	{
		delete functions[i];
	}
};

char Menu::GetUserChoice()
{
	char userInput = LOWEST_CHOICE_MENU;
	bool isValid = false;
	do {
		cout << "Please select one of the options below: " << endl;
		for(int menuItem = 0; menuItem < NUM_FUNCTIONS; menuItem++)
		{
			cout << "[" << (menuItem + 1) << "] " << functions[menuItem]->GetDescription() << endl;
		}
		cout << "[" << UPPER_CASE_EXIT_PROGRAM << "] to exit the program" << endl;
		userInput = getchar();
		isValid = ValidInput(userInput);
		if(!isValid)
		{
			cout << endl << "(" << userInput << ")";
		}
	} while (!isValid);
	return UPPER_CASE_EXIT_PROGRAM;
}

bool Menu::ValidInput(char userInput)
{
	if (userInput != LOWER_CASE_EXIT_PROGRAM || /* Both lower or upper case  */
		userInput != UPPER_CASE_EXIT_PROGRAM || /* are considered */
		userInput <= LOWEST_CHOICE_MENU ||      /* only functions from 1  */
		userInput >= HIGHEST_CHOICE_MENU)       /* to 6 */
	{
		return false;
	}
	return true;
}

void Menu::CallFunction(int functionNumber) {

}
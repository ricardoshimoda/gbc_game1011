#pragma once

#include <string>
#include "Constants.h"
#include "BaseFunction.h"

using namespace std;

class Menu {
private:
	BaseFunction *functions[NUM_FUNCTIONS];
	bool ValidInput(char userInput);
public:
	Menu();
	~Menu();
	
	char GetUserChoice();
	void CallFunction(int functionNumber);

};
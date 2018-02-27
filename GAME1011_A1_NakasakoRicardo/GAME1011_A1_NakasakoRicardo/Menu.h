#pragma once

#include "Constants.h"
#include "BaseFunction.h"
#include "FunctionOne.h"
#include "FunctionTwo.h"
#include "FunctionThree.h"
#include "FunctionFour.h"
#include "FunctionFive.h"

class Menu {
private:
	BaseFunction *functions[NUM_FUNCTIONS];
public:
	Menu() {
		functions[0] = new FunctionOne();
		functions[1] = new FunctionTwo();
		functions[2] = new FunctionThree();
		functions[3] = new FunctionFour();
		functions[4] = new FunctionFive();
	}
};
/*
* Prints the square table from 1 to a chosen number by the user
*/
#pragma once
#include <string>
#include "BaseFunction.h"

using namespace std;

class FunctionFive : public BaseFunction
{
private:
	int finalSquare;
protected:
	bool ValidInput();
public:
	void InputData();
	void PrintResult();
	string GetDescription();
};
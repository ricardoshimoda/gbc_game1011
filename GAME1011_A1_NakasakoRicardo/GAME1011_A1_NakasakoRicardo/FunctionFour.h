/*
* Prints the multiplication table from 1 to a chosen number by the user
*/
#pragma once
#include <string>
#include "BaseFunction.h"

using namespace std;

class FunctionFour : public BaseFunction
{
private:
	int finalNumber;
protected:
	bool ValidInput();
public:
	void InputData();
	void PrintResult();
	string GetDescription();
};
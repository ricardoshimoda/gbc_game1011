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
	void PrintBlanks(int spaces);
public:
	void InputData();
	void PrintResult();
	string GetDescription();
};
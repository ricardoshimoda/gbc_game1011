/*
* Implements the weight conversion from kilograms to pounds
*/
#pragma once

#include <string>
#include "BaseFunction.h"

using namespace std;

class FunctionOne:public BaseFunction 
{
private:
	double amountInKilos;
protected:
	bool ValidInput();
public:
	void InputData();
	void PrintResult();
	string GetDescription();
};
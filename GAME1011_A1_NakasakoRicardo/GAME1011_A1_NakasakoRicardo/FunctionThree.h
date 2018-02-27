#pragma once
/*
 * Implments the volume (?!) conversion from Teaspoons to Millilitres
 */
#include <string>
#include "BaseFunction.h"

using namespace std;

class FunctionThree : public BaseFunction
{
private:
	int teaspoons;
protected:
	bool ValidInput();
public:
	void InputData();
	void PrintResult();
	string GetDescription();
};
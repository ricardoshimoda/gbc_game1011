#pragma once
/*
 * Implements the temperature conversion from Celsius to Kelvin
 */
#include <string>
#include "BaseFunction.h"

using namespace std;

class FunctionTwo : public BaseFunction
{
private:
	double temperatureInCelsius;
protected:
	bool ValidInput();
public:
	void InputData();
	void PrintResult();
	string GetDescription();
};
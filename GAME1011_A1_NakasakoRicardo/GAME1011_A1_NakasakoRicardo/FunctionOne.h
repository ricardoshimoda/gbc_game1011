#pragma once
#include "BaseFunction.h"

/*
 * Implements the weight conversion from kilograms to pounds
 */
class FunctionOne:BaseFunction 
{
private:
	double amountInKilos;
public:
	void InputData();
	void PrintResult();
};
#pragma once
#include <string>

using namespace std;

/*
 * Implements the base class for all the functions in this program
 */
class BaseFunction 
{
protected:
	virtual bool ValidInput() = 0;
public:
	virtual void InputData() = 0;
	virtual void PrintResult() = 0;
	virtual string GetDescription()=0;
};
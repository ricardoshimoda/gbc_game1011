#pragma once
/*
 * Implements the base class for all the functions in this program
 */
class BaseFunction 
{
private:
	bool ValidInput(char userInput);
public:
	virtual void InputData() = 0;
	virtual void PrintResult() = 0;
	char Menu();
};
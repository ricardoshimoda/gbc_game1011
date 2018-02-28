#include "stdafx.h"

#include <iostream>
#include <string>
#include "BaseFunction.h"
#include "FunctionFour.h"

using namespace std;

void FunctionFour::InputData()
{
	cout << endl << "Please, inform the final number for the multiplication table " << endl;
	while (!(cin >> finalNumber) || finalNumber <= 0)
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid number - value must be positive and greater than 0 - can you please try it again? " << endl;
	}
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void FunctionFour::PrintBlanks(int spaces) 
{
	for (int blankie = 0; blankie < spaces; blankie++)
	{
		cout << " ";
	}

}

void FunctionFour::PrintResult()
{
	/* calculating column size */
	int *columnSize = new int[finalNumber];
	PrintBlanks(5);
	for (int multiplier = 1; multiplier <= finalNumber; multiplier++)
	{
		string madeToMeasure = to_string(multiplier * finalNumber);
		columnSize[multiplier - 1] = madeToMeasure.length() + 1;
		string multiplierTitle = to_string(multiplier);
		int titleBlanks = columnSize[multiplier - 1] - multiplierTitle.length();
		PrintBlanks(titleBlanks);
		cout << multiplierTitle;
	}
	cout << endl;
	for (int multiplicant = 1; multiplicant <= finalNumber; multiplicant++)
	{
		string rowTitle = to_string(multiplicant);
		int rowBlanks = 4 - rowTitle.length();
		cout << rowTitle;
		PrintBlanks(rowBlanks);
		cout << "|";
		for (int multiplier = 1; multiplier <= finalNumber; multiplier++)
		{
			string cellContent = to_string(multiplier * multiplicant);
			rowBlanks = columnSize[multiplier - 1] - cellContent.length();
			PrintBlanks(rowBlanks);
			cout << cellContent;
		}
		cout << endl;
	}
}

string FunctionFour::GetDescription()
{
	return "Shows the multiplication table for all the numbers between 1 and a given positive number";
}



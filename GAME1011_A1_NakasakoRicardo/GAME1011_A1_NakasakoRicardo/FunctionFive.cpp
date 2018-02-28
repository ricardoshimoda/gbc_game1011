#include "stdafx.h"

#include <iostream>
#include <string>

#include "BaseFunction.h"
#include "FunctionFive.h"

using namespace std;

void FunctionFive::InputData()
{
	cout << endl << "Please, inform the final number to be squared in our table " << endl;
	while (!(cin >> finalSquare) || finalSquare <= 0)
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid number - value must be positive and greater than 0 - can you please try it again? " << endl;
	}
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void FunctionFive::PrintResult()
{
	cout << "********************************************" << endl;
	cout << "* Num                               Square *" << endl;
	for (int toBeSquared = 1; toBeSquared <= finalSquare; toBeSquared++)
	{
		string original = to_string(toBeSquared);
		string squared = to_string(toBeSquared * toBeSquared);

		int dotsLength = 40 - original.length() - squared.length();
		cout << "* " << original;
		for (int dots = 0; dots < dotsLength; dots++)
		{
			cout << ".";
		}
		cout << squared << " *" << endl;
	}
	cout << "********************************************" << endl;
}

string FunctionFive::GetDescription()
{
	return "Displays a table of squares, from 1 to the positive value specified by the user";
}



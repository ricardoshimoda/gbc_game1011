#include "stdafx.h"

#include <iostream>
#include <string>
#include "BaseFunction.h"
#include "FunctionThree.h"

using namespace std;

void FunctionThree::InputData()
{
	cout << endl << "Please, inform the amount of tablespoons to be converted to millilitres " << endl;
	while (!(cin >> teaspoons) || teaspoons < 0)
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid amount - can you please try it again? " << endl;
	}
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void FunctionThree::PrintResult()
{
	cout << teaspoons << " teaspoons is " << (((double)teaspoons) * 4.92) << " ml " << endl ;
}

string FunctionThree::GetDescription()
{
	return "Transforms tablespoons into millilitres";
}



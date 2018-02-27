#include "stdafx.h"

#include <iostream>
#include <string>
#include "BaseFunction.h"
#include "FunctionOne.h"

using namespace std;

void FunctionOne::InputData() 
{
	bool error = false;
	cout << "Please, inform the quantity in kilos to be converted to pounds " << endl;
	while (!(cin >> amountInKilos))
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid amount - can you please try it again? " << endl;
	}
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void FunctionOne::PrintResult() 
{
	cout << "There are " << (amountInKilos * 2.2) << " pounds in " << amountInKilos << " kilos." << endl;
}

string FunctionOne::GetDescription()
{
	return "Transforms kilos into pounds";
}



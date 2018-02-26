
#include <iostream>
#include <string>
#include "BaseFunction.h"
#include "FunctionOne.h"

using namespace std;

void FunctionOne::InputData() 
{
	cout << "Please, inform the quantity in kilos to be converted to pounds " << endl;
	cin >> amountInKilos;
}

void FunctionOne::PrintResult() 
{
	cout << "The result of the operation is: " << (amountInKilos * 2.2) << endl << endl;
}

string FunctionOne::GetDescription()
{
	return "Transforms kilos into pounds";
}
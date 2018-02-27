#include "stdafx.h"

#include <iostream>
#include <string>
#include "BaseFunction.h"
#include "FunctionTwo.h"

using namespace std;

void FunctionTwo::InputData()
{
	cout << "Please, inform the quantity in kilos to be converted to pounds " << endl;
	//cin >> ;
}

void FunctionTwo::PrintResult()
{
	//cout << "The result of the operation is: " << (amountInKilos * 2.2) << endl << endl;
}

string FunctionTwo::GetDescription()
{
	return "Transforms kilos into pounds";
}



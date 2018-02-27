#include "stdafx.h"

#include <iostream>
#include <string>
#include "BaseFunction.h"
#include "FunctionFour.h"

using namespace std;

void FunctionFour::InputData()
{
	cout << "Please, inform the quantity in kilos to be converted to pounds " << endl;
	//cin >> ;
}

void FunctionFour::PrintResult()
{
	//cout << "The result of the operation is: " << (amountInKilos * 2.2) << endl << endl;
}

string FunctionFour::GetDescription()
{
	return "Transforms kilos into pounds";
}

bool FunctionFour::ValidInput()
{
	return true;
}


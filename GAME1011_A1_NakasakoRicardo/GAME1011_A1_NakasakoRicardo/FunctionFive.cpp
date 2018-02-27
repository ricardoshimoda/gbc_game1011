#include "stdafx.h"

#include <iostream>
#include <string>
#include "BaseFunction.h"
#include "FunctionFive.h"

using namespace std;

void FunctionFive::InputData()
{
	cout << "Please, inform the quantity in kilos to be converted to pounds " << endl;
	//cin >> ;
}

void FunctionFive::PrintResult()
{
	//cout << "The result of the operation is: " << (amountInKilos * 2.2) << endl << endl;
}

string FunctionFive::GetDescription()
{
	return "Transforms kilos into pounds";
}



#include "stdafx.h"

#include <iostream>
#include <string>
#include "BaseFunction.h"
#include "FunctionThree.h"

using namespace std;

void FunctionThree::InputData()
{
	cout << "Please, inform the quantity in kilos to be converted to pounds " << endl;
	//cin >> ;
}

void FunctionThree::PrintResult()
{
	//cout << "The result of the operation is: " << (amountInKilos * 2.2) << endl << endl;
}

string FunctionThree::GetDescription()
{
	return "Transforms kilos into pounds";
}

bool FunctionThree::ValidInput()
{
	return true;
}


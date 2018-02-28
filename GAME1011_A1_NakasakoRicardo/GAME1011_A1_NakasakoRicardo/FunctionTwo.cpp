#include "stdafx.h"

#include <iostream>
#include <string>
#include "BaseFunction.h"
#include "FunctionTwo.h"

using namespace std;

void FunctionTwo::InputData()
{
	cout << endl << "Please, inform the temperature in celsius to be converted to kelvin " << endl;
	while (!(cin >> temperatureInCelsius))
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid amount - can you please try it again? " << endl;
	}
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void FunctionTwo::PrintResult()
{
	cout << "We have " << (temperatureInCelsius + 273.15) << " kelvin when it is " << temperatureInCelsius << char(248) <<" celsius" << endl ;
}

string FunctionTwo::GetDescription()
{
	return "Calculates a temperature in Kelvin, given the temperature in celsius";
}



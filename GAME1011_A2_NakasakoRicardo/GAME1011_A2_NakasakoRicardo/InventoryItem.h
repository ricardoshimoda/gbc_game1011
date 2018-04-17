#pragma once

#include <string>

using namespace std;

/*
* Implements the base class for all the functions in this program
*/
template <class Templ> class InventoryItem
{
private:
	Templ dataToBeUsed;
protected:
	string name;
	double price;
	double timesUsed;
	bool broken;
public:
	void PrintItem();

};
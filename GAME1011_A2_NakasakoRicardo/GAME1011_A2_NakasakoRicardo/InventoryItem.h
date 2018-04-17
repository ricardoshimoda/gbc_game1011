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

template <class Templ> void InventoryItem<Templ>::PrintItem() {
	cout << "This item is a " << name <<
		", it costs $" << price << " and it has been used " << timesUsed
		<< " times and it is currently " << (broken ? "broken" : "perfect") << endl;
}

#include "stdafx.h"

#include <iostream>
#include "InventoryItem.h"

using namespace std;

template <class Templ> void InventoryItem<Templ>::PrintItem(){
	cout << "This item is a " << name <<
		", it costs $" << price << " and it has been used " << timesUsed
		<< " and it is currently " << (broken ? "broken" : "perfect") << endl;
}

#include "stdafx.h"

#include <iostream>
#include "Note.h"
#include "InventoryItem.h"

using namespace std;

template <class Templ> Note<Templ>::Note(string readText) {
	text = readText;
}

template <class Templ> void Note<Templ>::PrintNote() {
	PrintItem();
	cout << text << endl;
}

/*
 * in order to populate the data in the base class I decided to use the following set methods
 */
template <class Templ> void Note<Templ>::SetInventoryData(string itemName, double itemPrice, int itemTimesUsed, bool itemBroken) {
	name = itemName;
	price = itemPrice;
	timesUsed = itemTimesUsed;
	broken = itemBroken;
}

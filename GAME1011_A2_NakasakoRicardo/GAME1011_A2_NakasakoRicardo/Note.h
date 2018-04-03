#pragma once

#include <string>
#include "InventoryItem.h";

using namespace std;

template <class Templ> class Note:public InventoryItem<Templ> {
private:
	string text;
public:
	Note(string readText);
	void PrintNote();
	void SetInventoryData(string itemName, double itemPrice, int itemTimesUsed, bool itemBroken);
};

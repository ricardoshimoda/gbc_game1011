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
	Note operator -(const Note other);
	Note operator +(const Note other);
	Note operator --();
	Note operator ++();
};

template <class Templ> Note<Templ>::Note(string readText) {
	text = readText;
}

template <class Templ> void Note<Templ>::PrintNote() {
	PrintItem();
	cout << "This note says: " << text << endl << endl;
}

/*
* in order to populate the data in the base class I decided to use the following set methods
*/
template <class Templ> void Note<Templ>::SetInventoryData(
	string itemName, double itemPrice, int itemTimesUsed, bool itemBroken) {
	name = itemName;
	price = itemPrice;
	timesUsed = itemTimesUsed;
	broken = itemBroken;
}

template <class Templ> Note<Templ> Note<Templ>::operator -(const Note<Templ> other) {
	Note result<Templ>;
	result.price = this.price - other.price;
	result.timesUsed = this.timesUsed - other.timesUsed;
	result.broken = false;
	result.text = this.text + other.text;
	return result;
}
template <class Templ> Note<Templ> Note<Templ>::operator +(const Note<Templ> other) {
	Note result<Templ>;
	result.price = this.price + other.price;
	result.timesUsed = this.timesUsed + other.timesUsed;
	result.broken = false;
	result.text = this.text + other.text;
	return result;
}
template <class Templ> Note<Templ> Note<Templ>::operator --() {
	Note result<Templ>;
	result.price = this.price / 2;
	result.timesUsed--;
	result.broken = false;
	result.text = this.text;
	return result;
}
template <class Templ> Note<Templ> Note<Templ>::operator ++() {
	Note result<Templ>;
	result.price = this.price * 2;
	result.timesUsed++;
	result.broken = false;
	result.text = this.text;
	return result;
}
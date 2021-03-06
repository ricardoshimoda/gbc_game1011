// GAME1011_A2_NakasakoRicardo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "Note.h"
#include "InventoryItem.h"

using namespace std;

int main()
{
	/*
	 * Vector of notes
	 */
	vector<Note<string>> notesFromTheGame;
	notesFromTheGame.reserve(5);

	/*
	 * Variables to read the file
	 */
	string name;
	double price;
	int usage;
	bool broken;

	/*
	 * Open File
	 */
	string fileName = "SourceFile.txt";
	/*
	 * Introducing an error
	 */
	//fileName = "opaopa.txt";
	ifstream recordFile;
	try {
		recordFile.open(fileName);
		if (recordFile.fail()) {
			throw - 1;
		}
	}
	catch (int) {
		cout << "File could not be opened! Filename is " << fileName << endl;
		return 0;
	}
	int lineCounter = 1;
	while (recordFile >> name >> price >> usage >> broken) {
		Note<string> thisNote("Just another note " + to_string(lineCounter++));
		thisNote.SetInventoryData(name, price, usage, broken);
		notesFromTheGame.push_back(thisNote);
	}
	for (int vectorPrinter = 0; vectorPrinter < notesFromTheGame.size(); vectorPrinter++) {
		notesFromTheGame[vectorPrinter].PrintNote();
	}
    return 0;
}


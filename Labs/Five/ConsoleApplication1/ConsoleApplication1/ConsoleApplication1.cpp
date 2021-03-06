// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;


/*

template <class Tu>
GetMax(Tu a, Tu b) {

return (a > b ? a : b);
}
int i = 5, j = 8, k;
double s = 9.8, h = 9.4, d;
k = GetMax(i, j);
d = GetMax(s, h);
cout << k << endl;
cout << d << endl;

template <class Type>
Type larger(Type x, Type y);

int i = 5, j = 8, k;
double s = 9.8, h = 9.4, d;

cout << "Larger between 6 and 8 = " << larger(6, 8) << endl;
cout << "Larger between A and B = " << larger('A', 'B') << endl;
cout << "Larger between 6.7 and 8.9 = " << larger(6.7, 8.9) << endl;

string Hi = "Hello";
string Happy = "Happy";

//cout << "Larger between " <<  Hi  << " and " << Happy << " = " << larger(Hi, Happy) << endl;

template <class Type>
Type larger(Type x, Type y) {
	if (x > y)
		return x;
	else
		return y;
}

template <class T>
void swapvariables(T& var1, T& var2) {
T temp;
temp = var1;
var1 = var2;
var2 = temp;
}

double d1 = 3.4, d2 = 4.5;
swapvariables(d1, d2);
cout << d1 << " " << d2 << endl;

int i = 4, j = 5;
swapvariables(i, j);
cout << i << " " << j << endl;

char char1 = 'B', char2 = 'W';
swapvariables(char1, char2);
cout << char1 << " " << char2 << endl;

string Hi = "Hello";
string Happy = "Happy";

cout << ((string)"Larger between") << Hi << " and " << Happy << endl;



template <class Type>
void printArray(Type* myArray, int count)
{
for (int i = 0; i < count; i++) {
cout << myArray[i] << " ";
}
cout << endl;
}

const int ACOUNT = 5;
const int BCOUNT = 7;
const int CCOUNT = 6;

int a[ACOUNT] = { 1,2,3,4,5 };
double b[BCOUNT] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7 };
char c[CCOUNT] = "HELLO";

cout << "Array A contains: " << endl;
printArray(a, ACOUNT);
cout << "Array B contains: " << endl;
printArray(b, BCOUNT);
cout << "Array C contains: " << endl;
printArray(c, CCOUNT);
*/

template <class T>
class Vector3
{
private:
	T data[3];
public:
	Vector3(T x, T y, T z) {
		data[0] = x;
		data[1] = y;
		data[2] = z;
	}
	void print() {
		cout << "[" << data[0] << ", " << data[1] << ", " << data[2] << "]" << endl;
	}
};

int main(){

	Vector3<double> doubleV(2.3, 7.9, 5.8);
	Vector3<int> intV(1, 2, 3);

	cout << "doubleV = "; doubleV.print(); cout << endl;
	cout << "intV = "; intV.print(); cout << endl;
	return 0;
}


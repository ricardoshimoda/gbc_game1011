// OperatorOverload_Exam.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>

using namespace std;
class complexType
{
	friend ostream& operator<<(ostream&, complexType&);
	friend istream& operator>>(istream&, complexType&);


public:
	void setComplex(double& real, double& imag);
	void getComplex(double& real, double& imag);
	complexType(double real = 0, double imag = 0);
	complexType operator+(complexType& othercomplex);
	complexType operator*(complexType& othercomplex);
	bool operator==(complexType& othercomplex);
private:
	double realPart;
	double imaginaryPart;
};
ostream& operator<<(ostream& osObject, complexType& complex)
{
	osObject << "(";
	osObject << complex.realPart;
	osObject << ", ";
	osObject << complex.imaginaryPart;
	osObject << ")";
	return osObject;
}

istream& operator>>(istream& isObject, complexType& complex)
{
	char ch;
	isObject >> ch;
	isObject >> complex.realPart;
	isObject >> ch;
	isObject >> complex.imaginaryPart;
	isObject >> ch;
	return isObject;
}

bool complexType::operator==(complexType& othercomplex)
{
	return (realPart == othercomplex.realPart && imaginaryPart == othercomplex.imaginaryPart);
}


complexType::complexType(double real, double imag)
{
	realPart = real;
	imaginaryPart = imag;
}

void complexType::setComplex(double& real, double& imag)
{
	realPart = real;
	imaginaryPart = imag;
}

void complexType::getComplex(double& real, double& imag)
{
	real = realPart;
	imag = imaginaryPart;
}

complexType complexType::operator+(complexType& othercomplex = NULL)
{
	complexType temp;
	this.rea
	temp.realPart = realPart + othercomplex.realPart;
	temp.imaginaryPart = imaginaryPart + othercomplex.imaginaryPart;
	return temp;
}

complexType complexType::operator*(complexType& othercomplex)

{
	complexType temp;
	temp.realPart = (realPart * othercomplex.realPart) - (imaginaryPart * othercomplex.imaginaryPart);
	temp.imaginaryPart = (realPart * othercomplex.imaginaryPart) + (imaginaryPart * othercomplex.realPart);
	return temp;
}




int main()
{
	complexType num1(23, 34); //Line 1
	complexType num2; //Line 2
	complexType num3; //Line 3
	cout << "Line 4: Num1 = " << num1 << endl; //Line 4
	cout << "Line 5: Num2 = " << num2 << endl; //Line 5
	cout << "Line 6: Enter the complex number "
		<< "in the form (a, b) "; //Line 6
	cin >> num2; //Line 7
	cout << endl; //Line 8
	cout << "Line 9: New value of num2 = "
		<< num2 << endl; //Line 9
	num3 = num1 + num2; //Line 10
	cout << "Line 11: Num3 = " << num3 << endl; //Line 11
	cout << "Line 12: " << num1 << " + " << num2
		<< " = " << num1 + num2 << endl; //Line 12
	cout << "Line 13: " << num1 << " * " << num2
		<< " = " << num1 * num2 << endl;


    return 0;
}


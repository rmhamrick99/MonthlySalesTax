#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;


int main() 
{
	string sMonth;
	int iYear;
	double dAmtCollected;
	double dAmtSale;
	double dCountyTax;
	double dStateTax;
	double dTotTax;

	cout << "What month are you reporting?" << endl;
	cin >> sMonth;
	cout << "What tax year are you in?" << endl;
	cin >> iYear;
	cout << "What is the total amount collected?" << endl;
	cin >> dAmtCollected;
	dAmtSale = dAmtCollected / 1.06;
	dCountyTax = dAmtSale * 0.02;
	dStateTax = dAmtSale * 0.04;
	dTotTax = dStateTax + dCountyTax;
	cout << "Month: " << sMonth << endl;
	cout << "------------------------------" << endl;
	cout << "Total Collected:    " << dAmtCollected << endl;
	cout << "Sales:  " << dAmtSale << endl;
	cout << "County Sales Tax:   " << dCountyTax << endl;
	cout << "State Sales Tax:   " << dStateTax << endl;
	cout << "Total Sales Tax:   " << dTotTax << endl;
	system("pause");
	return 0;
}


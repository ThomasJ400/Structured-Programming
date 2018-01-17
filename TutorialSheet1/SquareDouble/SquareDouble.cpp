// SquareDouble.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	double number;
	cout << "Enter number to be squared: " << endl;
	cin >> number;
	cout << number << " squared is " << number*number << endl;
    return 0;
}


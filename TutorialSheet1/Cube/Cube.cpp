// Cube.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int number = 0;
	cout << "Enter number to be cubed: " << endl;
	cin >> number;
	cout << number << " cubed is " << number*number*number << endl;
    return 0;
}


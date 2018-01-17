// Calculate.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	int diff = 0;
	int prod = 0;
	int avg = 0;
	
	cout << "Please Enter Number 1:" << endl;
	cin >> num1;
	cout << "Please Enter Number 2:" << endl;
	cin >> num2;

	sum = num1 + num2;
	diff = num1 - num2;
	prod = num1 * num2;
	avg = (num1 + num2)/2;

	cout << "Sum of " << num1 << " and " << num2 << " is " << sum << endl;
	cout << "Difference between " << num1 << " and " << num2 << " is " << diff << endl;
	cout << "Product of " << num1 << " and " << num2 << " is " << prod << endl;
	cout << "Average of " << num1 << " and " << num2 << " is " << diff << endl;
	return 0;
}


// Average.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	double num1 = 0;
	double num2 = 0;
	double num3 = 0;
	double num4 = 0;
	double num5 = 0;
	double avg = 0;

	printf("Please enter number 1: ");
	cin >> num1;
	printf("Please enter number 2: ");
	cin >> num2;
	printf("Please enter number 3: ");
	cin >> num3;
	printf("Please enter number 4: ");
	cin >> num4;
	printf("Please enter number 5: ");
	cin >> num5;

	avg = (num1 + num2 + num3 + num4 + num5) / 5;
	printf("Average of the numbers is: ");
	cout << avg << endl;
    return 0;
}


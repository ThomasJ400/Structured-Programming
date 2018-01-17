// RectangleArea.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	double rectLength = 0;
	double rectWidth = 0;
	double area = 0;

	printf("Please enter length: ");
	cin >> rectLength;
	printf("Please enter width: ");
	cin >> rectWidth;

	area = rectLength * rectWidth;
	cout << "Area of rectangle is: " << area << endl;
    return 0;
}


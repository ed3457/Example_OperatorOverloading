// Example_OperatorOverloading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Triangle.h"
using namespace std; 
int main()
{
	Triangle t1(2, 4);
	Triangle t2(2, 6);

	if (t1 == t2) // t1.==(t2) 
	{
		cout << "The Two Triangles are equal!\n";
	}
	else
	{
		cout << "The Two Triangles are not equal!\n";
	}

	Triangle result = t1 + t2;

	//result.printInfo();

	Triangle result2 = t1++;
	//result2.printInfo();

	//t1.printInfo();

	Triangle result3 = t2 + 5; 

	//result3.printInfo();

	// if (t1.getBase() == t2.getBase() && t1.getHeight() == t2.getHeight())

	Triangle res4 = t1 * 3;

	res4.printInfo();
}


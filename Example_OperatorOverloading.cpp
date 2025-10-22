// Example_OperatorOverloading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Triangle.h"
using namespace std; 
int main()
{
	Triangle t1(3, 4);

	Triangle t2(3,5);

	if (t1 == t2) // t1.operator==(t2) , t2 is the other triangle 
		cout << "Equal!\n";
	else
		cout << "Not Equal!\n";


	/*if (t1.getBase() == t2.getBase() && t1.getHeight()== t2.getHeight())
		cout << "Equal!\n";
	else
		cout << "Not Equal!\n";*/

	Triangle result = t1 + t2; 

	result.printInfo();

	cout << t1[0] << endl;// get base 


	/*Car car1; 

	car1.getWheel(0);
	car1[0]*/
}


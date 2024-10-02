#pragma once
#include <string>
using namespace std; 

class Triangle
{
private: 
	float base;
	float height;

public:
	void setBase(float b);
	float getBase();

	void setHeight(float h);
	float getHeight();

	void printInfo();

	Triangle();
	Triangle(float b, float h);

	bool operator ==(const Triangle & otherTriangle) const; 
	Triangle operator +(const Triangle& otherTriangle) ;
	Triangle operator *(int num);
	Triangle operator +(int num);
	Triangle operator ++();// pre ++obj
	Triangle operator ++(int);// post obj++
	Triangle operator -(int num);
	float operator[](int index);


};


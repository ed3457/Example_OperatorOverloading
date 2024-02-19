#include "Triangle.h"
#include <iostream>
using namespace std; 
void Triangle::setBase(float base)
{
    this->base = base;
}

float Triangle::getBase()
{
    return base;
}

void Triangle::setHeight(float h)
{
    height = h; 
}

float Triangle::getHeight()
{
    return height;
}

void Triangle::printInfo()
{
    cout << "Base:" << getBase() << endl;
    cout << "Height:" << getHeight() << endl;

}

Triangle::Triangle():Triangle(1,1)
{
    
}

Triangle::Triangle(float b, float h)
{

    setBase(b);
    setHeight(h);
}

bool Triangle::operator==(const Triangle& otherTriangle) const
{
    return (base == otherTriangle.base && height == otherTriangle.height);
}

Triangle Triangle::operator+(const Triangle& otherTriangle)
{
    return Triangle();
}

Triangle Triangle::operator++()
{
    return Triangle();
}

Triangle Triangle::operator++(int)
{
    return Triangle();
}

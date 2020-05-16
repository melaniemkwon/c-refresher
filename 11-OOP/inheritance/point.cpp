#include <iostream>
#include "point.h"

using namespace std;

Point::Point(int x)
{
    this->x = x;
    cout << "Point constructor invoked." << endl;
}

Point::~Point()
{
    cout << "Point destructor invoked." << endl;
}

void Point::setX(int x)
{
    this->x = x;
    cout << "Point setX invoked." << endl;
}

Point2D::Point2D(int x, int y) : Point(x)
{
    this->y = y;
    cout << "Point2D constructor invoked." << endl;
}

Point2D::~Point2D()
{
    cout << "Point2D destructor invoked." << endl;
}


void Point2D::setX(int x)
{
    this->x = x;
    cout << "Point2D setX invoked." << endl;
}

void Point2D::setY(int y)
{
    this->y = y;
}

void Point2D::setXY(int x, int y)
{
    setX(x);
    setY(y);
}
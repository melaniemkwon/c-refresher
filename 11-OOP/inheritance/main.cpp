#include <iostream>
#include "point.h"

using namespace std;

void operationOnPoints();

int main()
{
    operationOnPoints();

    return 0;
}

void operationOnPoints()
{
    Point p1;
    cout << p1.getX() << endl;
    cout << "---------------------" << endl;

    Point2D p2;
    cout << p2.getX() << ", " << p2.getY() << endl;

    p2.setX(22);
    p2.setY(1);
    cout << p2.getX() << ", " << p2.getY() << endl;

    p2.setXY(96,42);
    cout << p2.getX() << ", " << p2.getY() << endl;

    p2.Point::setX(111);
    cout << p2.getX() << ", " << p2.getY() << endl;

}
#include <iostream>
#include "point.h"

using namespace std;

void operationOnPoints();

template<typename T, typename T2>
T add (T var1, T2 var2)
{
    return var1 + var2;
}

typedef Point<int> PointInt;
int main()
{
    operationOnPoints();
    return 0;
}

void operationOnPoints()
{
    Point<int> a(5);
    PointInt b(10);          // with type definition
    Point<double> c(6.88);

    cout << a.getX() << endl;
    cout << b.getX() << endl;
    cout << c.getX() << endl;

    Point2D<double> d(10.5, 6);
    cout << d.getX() << ", " << d.getY() << endl;

    Point<char> e(45);      // specific template for a type
}

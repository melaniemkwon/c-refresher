#include <iostream>
#include "point.h"

using namespace std;

void operationOnPoints();

/* function templates are generalizations of functions. */
template<typename T, typename T2>
T add (T var1, T2 var2)
{
    return var1 + var2;
}

/* Can define template here, or overload '+' operator in Point class. */
// template<>
// Point2D add(Point2D var1, Point2D var2)
// {
//     Point2D tmp;
//     tmp.setXY(var1.getX() + var2.getX(), var1.getY() + var2.getY());
//     return tmp;
// }

int main()
{
    cout << add(1, 8.9) << endl;                 // 9
    cout << add<double, double>(1, 8.9) << endl; // 9.9

    operationOnPoints();

    return 0;
}

void operationOnPoints()
{
    Point2D p1(10, 67);
    Point2D p2(50, 3);

    // adding two points should be 60,70
    Point2D sum = add(p1, p2);

    cout << "#### operationOnPoints" << endl;
    cout << sum.getX() << ", " << sum.getY() <<  endl;
}

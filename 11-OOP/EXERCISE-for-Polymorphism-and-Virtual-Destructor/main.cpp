#include <iostream>
#include "Circle.h"
#include "Rectangle.h"

using namespace std;

int main()
{
    Rectangle rectangle(2,4);
    Circle circle(3);

    rectangle.introduce();
    cout << "area: " << rectangle.calculateArea() << endl;
    cout << "circumference: " << rectangle.calculateCircumference() << endl;

    circle.introduce();
    cout << "area: " << circle.calculateArea() << endl;
    cout << "circumference: " << circle.calculateCircumference() << endl;

    return 0;
}
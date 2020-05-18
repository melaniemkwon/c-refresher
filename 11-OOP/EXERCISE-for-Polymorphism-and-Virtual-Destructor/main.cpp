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

    cout << "---------------------------------------" << endl;

    // allocate the memory dynamically
    Shape* rectangle1 = new Rectangle(2,4);
    Shape* circle1 = new Circle(3);

    rectangle1->introduce();
    cout << "area: " << rectangle1->calculateArea() << endl;
    cout << "circumference: " << rectangle1->calculateCircumference() << endl;

    circle1->introduce();
    cout << "area: " << circle1->calculateArea() << endl;
    cout << "circumference: " << circle1->calculateCircumference() << endl;

    delete rectangle1;
    delete circle1;

    return 0;
}
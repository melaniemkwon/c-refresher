#include "Circle.h"


Circle::Circle(double radius)
{
    this->radius = radius;
}


Circle::~Circle()
{

}

void Circle::introduce()
{
    cout << "I am a Circle!" << endl;
}

double Circle::calculateArea()
{
    return 3.14 * (radius * radius);
}

double Circle::calculateCircumference()
{
    return 2 * 3.14 * radius;
}
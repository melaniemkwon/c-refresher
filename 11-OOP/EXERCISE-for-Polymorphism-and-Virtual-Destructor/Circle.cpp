#include "Circle.h"


Circle::Circle(double radius)
{
    this->radius = radius;
}


Circle::~Circle()
{
    std::cout << "Circle destructor !" << std::endl;
}

void Circle::introduce()
{
    std::cout << "I am a Circle!" << std::endl;
}

double Circle::calculateArea()
{
    return 3.14 * (radius * radius);
}

double Circle::calculateCircumference()
{
    return 2 * 3.14 * radius;
}
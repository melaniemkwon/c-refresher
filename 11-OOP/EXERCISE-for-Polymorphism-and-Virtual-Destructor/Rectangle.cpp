#include "Rectangle.h"


Rectangle::Rectangle(double width, double height)
{
    this->width = width;
    this->height = height;
}


Rectangle::~Rectangle()
{
    std::cout << "Rectangle destructor !" << std::endl;
}

void Rectangle::introduce()
{
    std::cout << "I am a Rectangle!" << std::endl;
}

double Rectangle::calculateArea()
{
    return width * height;
}

double Rectangle::calculateCircumference()
{
    return 2*width + 2*height;
}
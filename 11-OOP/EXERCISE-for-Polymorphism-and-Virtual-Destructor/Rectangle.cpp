#include "Rectangle.h"


Rectangle::Rectangle(double width, double height)
{
    this->width = width;
    this->height = height;
}


Rectangle::~Rectangle()
{

}

void Rectangle::introduce()
{
    cout << "I am a Rectangle!" << endl;
}

double Rectangle::calculateArea()
{
    return width * height;
}

double Rectangle::calculateCircumference()
{
    return 2*width + 2*height;
}
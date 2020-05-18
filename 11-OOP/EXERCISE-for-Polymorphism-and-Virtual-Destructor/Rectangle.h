#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

#include "Shape.h"

class Rectangle: public Shape
{
        double width;
        double height;
    public:
        Rectangle(double, double);
        ~Rectangle();
        void introduce();
        double calculateArea();
        double calculateCircumference();
};

#endif // __RECTANGLE_H__
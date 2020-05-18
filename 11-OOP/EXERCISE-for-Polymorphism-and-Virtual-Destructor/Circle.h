#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#include "Shape.h"

class Circle: public Shape
{
        double radius;
    public:
        Circle(double);
        ~Circle();
        void introduce();
        double calculateArea();
        double calculateCircumference();
};

#endif // __CIRCLE_H__
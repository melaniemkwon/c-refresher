#ifndef __SHAPE_H__
#define __SHAPE_H__

#include <iostream>
using namespace std;

class Shape
{
    public:
        virtual void introduce() = 0;
        virtual double calculateArea() = 0;
        virtual double calculateCircumference() = 0;
};

#endif // __SHAPE_H__
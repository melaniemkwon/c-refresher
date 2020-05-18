#ifndef __SHAPE_H__
#define __SHAPE_H__

#include <iostream>

class Shape
{
    public:
        ~Shape() { std::cout << "Shape destructor !" << std::endl; };
        virtual void introduce() = 0;
        virtual double calculateArea() = 0;
        virtual double calculateCircumference() = 0;
};

#endif // __SHAPE_H__
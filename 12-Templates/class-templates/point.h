#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
#include <iostream>

using namespace std;

template<typename T>
class Point
{
    protected:
        T x;
    public:
        Point(T =0);
        ~Point();
        T getX();
        void setX(T);
};

template<typename T>
Point<T>::Point(T x)
{
    this->x = x;
    cout << "The constructor from the Point class has just been invoked" << endl;
}
template<typename T>
Point<T>::~Point()
{
    cout << "The destructor from the Point class has just been invoked" << endl;
}
template<typename T>
void Point<T>::setX(T x)
{
    this->x = x;
    cout << "Im from Point" << endl;
}
template<typename T>
T Point<T>::getX()
{
    return this->x;
}
template<>                      //SPECIALIZED
double Point<double>::getX()    //FUNCTION
{
    cout <<"this function will be executed only when Point<double>" << endl;
    return this->x;
}

template<typename T>
class Point2D : public Point<T>
{
    protected:
        int y;
    public:
        Point2D(T =0, T =0);
        ~Point2D();
        int getY() { return y; }
        void setY(T);
        void setX(T);
        void setXY(T, T);
        Point2D operator+(Point2D);
};

template<typename T>
Point2D<T>::Point2D(T x, T y) : Point<T>(x)  //dont forget, you need <T> here too
{
    this->y = y;
    cout << "The constructor from the Point2D class has just been invoked" << endl;
}
template<typename T>
Point2D<T>::~Point2D()
{
    cout << "The destructor from the Point2D class has just been invoked" << endl;
}
template<typename T>
void Point2D<T>::setY(T y)
{
    this->y = y;
}
template<typename T>
void Point2D<T>::setXY(T x, T y)
{
    setX(x);
    setY(y);
}
template<typename T>
void Point2D<T>::setX(T x)
{
    this->x = x;
    cout << "Im from Point2D" << endl;
}
template<typename T>
Point2D<T> Point2D<T>::operator+(Point2D o)
{
    Point2D tmp;

    tmp.setX(this->getX() + o.getX());
    tmp.setY(this->getY() + o.getY());

    return tmp;
}

template<>
class Point<char>
{
    public:
        Point(char a=0) { cout << "this is from Point<char>" << endl; }
};

#endif // POINT_H_INCLUDED

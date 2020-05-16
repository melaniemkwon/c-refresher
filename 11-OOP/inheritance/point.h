#ifndef __POINT_H__
#define __POINT_H__

class Point  // base, parent, superclass
{
    protected:
        int x;
    public:
        Point(int=0);
        ~Point();
        int getX() { return x; };
        void setX(int);
};

class Point2D : public Point // derived, child, subclass
{
    protected:
        int y;
    public:
        Point2D(int=0, int=0);
        ~Point2D();
        int getY() { return y; };
        void setX(int); // can inherit, if not declared. or make own impl.
        void setY(int);
        void setXY(int=0, int=0);
};

class Point3D : public Point2D
{

};

/*
    class Point2D : public Point
    everything what is inside Point (excluding constructor and destructor) will be in Point2D
    private - CANNOT ACCESS
    protected - protected
    public - public

    class Point2D : protected Point
    everything what is inside Point (excluding constructor and destructor) will be in Point2D
    private - CANNOT ACCESS
    protected - protected
    public - protected


    class Point2D : private Point
    everything what is inside Point (excluding constructor and destructor) will be in Point2D
    private - CANNOT ACCESS
    protected - private
    public - private

*/

#endif // __POINT_H__
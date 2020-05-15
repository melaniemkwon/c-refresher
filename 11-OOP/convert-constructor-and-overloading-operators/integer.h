#ifndef __INTEGER_H__
#define __INTEGER_H__

class Integer
{
    int nr;
    public:
        Integer() { };
        Integer(int);
        operator int();
        int operator+=(Integer);
        int getNr() { return nr; };
};

#endif // __INTEGER_H__
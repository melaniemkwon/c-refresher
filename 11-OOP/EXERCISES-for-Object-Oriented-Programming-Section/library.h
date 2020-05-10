#ifndef LIBRARY_H_INCLUDED
#define LIBRARY_H_INCLUDED

#include "book.h"

class Library
{
    private:
        Book* books;
    public:
        Library(int);
        ~Library();
};

#endif

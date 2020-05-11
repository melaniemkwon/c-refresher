#ifndef LIBRARY_H_INCLUDED
#define LIBRARY_H_INCLUDED

#include "book.h"

class Library
{
    private:
        Book* books;
        int maxBooks;
        int countBooks;
    public:
        Library(int);
        ~Library();

        void addBook(Book);
        Book getBook(int);
        // void showBooks();
};

#endif

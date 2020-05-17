#ifndef LIBRARY_H_INCLUDED
#define LIBRARY_H_INCLUDED

#include <iostream>
#include "book.h"
#include "user.h"

class Library
{
    protected:
        Book* books;
        int maxBooks;
        int countBooks;
    public:
        Library(int);
        ~Library();

        void addBook(const Book&);
        Book& getBook(int);
        void showBooks();

        friend void Librarian::lendBook(Library&, Borrower&, int);
};

#endif

#ifndef __USER_H__
#define __USER_H__

#include <string>
#include "book.h"

class User
{
    protected:
        std::string name;
        std::string lastName;
    public:
        User(std::string, std::string);
        User();
        ~User();

        std::string getName() { return name; };
        std::string getLastName() { return lastName; };
};

class Borrower : public User
{
    protected:
        Book* books;
        int maxBooks;
        int countBooks;
    public:
        Borrower(std::string, std::string, int);
        Borrower();
        ~Borrower();

        void addBook(Book);
        void returnBook(int); //return by unique id
        void showBooks();
};

#endif // __USER_H__
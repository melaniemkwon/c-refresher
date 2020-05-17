#ifndef __USER_H__
#define __USER_H__

#include <string>
#include "book.h"
#include "library.h"

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
        friend class Librarian;
        Book* books;
        int maxBooks;
        int countBooks;
    public:
        Borrower(std::string, std::string, int);
        Borrower(const Borrower&) = delete;
        Borrower& operator=(const Borrower&) = delete;
        ~Borrower();

        void addBook(Book);
        Book& getBook(int id);
        void returnBook(Library&, int);
        void showBooks();
};

class Librarian: public Borrower
{
    public:
        Librarian(std::string, std::string, int);
        // void lendBook(Library&, Borrower&, int);
};


#endif // __USER_H__
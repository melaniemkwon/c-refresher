#ifndef BOOK_H_INCLUDED
#define BOOK_H_INCLUDED

#include <string>

class Book
{
    private:
        std::string title;
        std::string author;
        int pubYear;
    public:
        Book(std::string, std::string, int);
        Book();
        ~Book();

        std::string getTitle() const;
        std::string getAuthor() const;
        int getPublicationYear() const;
};

#endif
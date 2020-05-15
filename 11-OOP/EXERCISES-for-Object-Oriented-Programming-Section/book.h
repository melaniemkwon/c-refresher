#ifndef BOOK_H_INCLUDED
#define BOOK_H_INCLUDED

#include <string>

class Book
{
    private:
        std::string title;
        std::string author;
        int pubYear;
        int bookId;
    public:
        Book(std::string, std::string, int);
        Book(const Book &);
        Book();
        ~Book();

        static int numberOfBooks;

        std::string getTitle() const;
        std::string getAuthor() const;
        int getPublicationYear() const;
        int getBookId() const;
};

#endif
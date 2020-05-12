#include "book.h"

int Book::numberOfBooks = 0;

Book::Book(std::string title, std::string author, int pubYear) {
    this->title = title;
    this->author = author;
    this->pubYear = pubYear;
    this->bookId = Book::numberOfBooks++;
}

Book::Book() {

}

Book::~Book()
{

}

std::string Book::getTitle() const
{
    return this->title;
}
std::string Book::getAuthor() const
{
    return this->author;
}
int Book::getPublicationYear() const
{
    return this->pubYear;
}
int Book::getBookId() const
{
    return this->bookId;
}
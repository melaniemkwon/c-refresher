#include "book.h"

Book::Book(std::string title, std::string author, int pubYear) {
    this->title = title;
    this->author = author;
    this->pubYear = pubYear;
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
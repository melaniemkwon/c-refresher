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

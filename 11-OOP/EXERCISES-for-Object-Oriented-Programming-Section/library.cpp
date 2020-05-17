#include "library.h"

Library::Library(int maxBooks)
{
    this->maxBooks = maxBooks;
    this->books = new Book[maxBooks];
    this->countBooks = 0;
}

Library::~Library()
{
    delete[] books;
}

void Library::addBook(Book b)
{
    if(countBooks < maxBooks)
    {
        this->books[countBooks] = b;
        this->countBooks++;
    }
}

Book Library::getBook(int i)
{
    if (i < maxBooks)
        return this->books[i];
    else
        return this->books[0]; //if out of bounds
}

void Library::showBooks()
{
    for (int i = 0; i < countBooks; i++)
    {
        std::cout << this->books[i].getBookId() << " | ";
        std::cout << this->books[i].getTitle() << " | ";
        std::cout << this->books[i].getAuthor() << " | ";
        std::cout << this->books[i].getPublicationYear() << std::endl;
    }
}
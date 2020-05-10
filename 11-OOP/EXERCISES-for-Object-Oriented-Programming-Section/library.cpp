#include "library.h"

Library::Library(int maxAmountOfBooks)
{
    this->books = new Book[maxAmountOfBooks];
}

Library::~Library()
{
    delete[] books;
}

#include <iostream>
#include "user.h"

using namespace std;

User::User(string name, string lastName)
{
    this->name = name;
    this->lastName = lastName;
}

User::User()
{

}

User::~User()
{

}

Borrower::Borrower(string name, string lastName, int maxBooks) : User(name, lastName)
{
    this->maxBooks = maxBooks;
    this->books = new Book[maxBooks];
    this->countBooks = 0;
}

Borrower::~Borrower()
{
    delete[] books;
}

Borrower::Borrower()
{

}

void Borrower::addBook(Book b)
{
    if(countBooks < maxBooks)
    {
        this->books[countBooks] = b;
        this->countBooks++;
    }
}

void Borrower::returnBook(int)
{

}

void Borrower::showBooks()
{
    for (int i = 0; i < countBooks; i++)
    {
        cout << this->books[i].getBookId() << " | ";
        cout << this->books[i].getTitle() << " | ";
        cout << this->books[i].getAuthor() << " | ";
        cout << this->books[i].getPublicationYear() << endl;
    }
}

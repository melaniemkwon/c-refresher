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

void Borrower::addBook(Book b)
{
    if(countBooks < maxBooks)
    {
        this->books[countBooks] = b;
        this->countBooks++;
    }
}

Book& Borrower::getBook(int id)
{
    return this->books[id];
}

void Borrower::returnBook(Library& library, int position)
{
    library.addBook(books[position]);
    for(int i = 0; i < maxBooks-1; i++)
    {
        if (i >= position)
            books[i] = books[i+1];
    }
    this->countBooks--;
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

Librarian::Librarian(std::string name, std::string lastName, int maxBooks)
: Borrower(name, lastName, maxBooks)
{}

// void Librarian::lendBook(Library& library, Borrower& borrower, int position)
// {
//     borrower.books[borrower.countBooks] = library.books[position];

//     for(int i = 0; i < library.maxBooks-1; i++)
//     {
//         if (i >= position)
//             library.books[i] = library.books[i+1];
//     }

//     library.countBooks--;
//     borrower.countBooks++;
// }
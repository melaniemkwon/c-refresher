#include <iostream>
#include "book.h"
#include "library.h"
using namespace std;


int main()
{
    Book book1();
    Book book2("Poor Expectations", "Charles Chickens", 1679);

    Library library(5);
    library.addBook(book2);
    Book retrievedBook = library.getBook(0);
    cout << "retrievedBook: " << retrievedBook.getTitle() << endl;

    return 0;
}


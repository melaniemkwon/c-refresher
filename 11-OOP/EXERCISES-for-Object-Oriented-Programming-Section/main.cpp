#include <iostream>
#include "book.h"
#include "library.h"
using namespace std;


int main()
{
    const Book book1("Anne of Purple Grables", "L.M. Montgoverness", 1908);
    const Book book2("Poor Expectations", "Charles Chickens", 1679);
    const Book book3("Doon", "Francis Herb", 1966);

    Library library(5);
    library.addBook(book1);
    library.addBook(book2);
    library.addBook(book3);

    library.showBooks();

    return 0;
}


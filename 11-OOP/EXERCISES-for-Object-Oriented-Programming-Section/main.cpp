#include <iostream>
#include "book.h"
#include "library.h"
#include "user.h"
using namespace std;


int main()
{
    const Book book1("Anne of Purple Grables", "L.M. Montgoverness", 1908);
    const Book book2("Poor Expectations", "Charles Chickens", 1679);
    const Book book3("Doon", "Francis Herb", 1966);
    const Book book4 = book3;
    const Book book5 = book3;
    const Book book6 = book3;

    Library library(6);
    library.addBook(book1);
    library.addBook(book2);
    library.addBook(book3);
    library.addBook(book4);
    library.addBook(book5);
    library.addBook(book6);

    library.showBooks();

    User user1("Mary", "Doppins");

    Borrower borrower1("Gary", "Snail", 3);
    borrower1.addBook(book1);
    borrower1.addBook(book2);
    borrower1.addBook(book3);

    cout << "-----------" << endl;
    cout << borrower1.getName() + " " + borrower1.getLastName() << endl;

    borrower1.showBooks();

    return 0;
}


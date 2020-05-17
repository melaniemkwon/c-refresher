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

    Library library(10);
    library.addBook(book1);
    library.addBook(book2);
    library.addBook(book3);
    library.addBook(book4);
    library.addBook(book5);
    library.addBook(book6);

    cout << "Show books in library: " << endl;
    library.showBooks();

    User user1("Mary", "Doppins");

    Borrower borrower1("Gary", "Snail", 3);
    borrower1.addBook(book1);
    borrower1.addBook(book2);
    borrower1.addBook(book3);

    cout << "-----------" << endl;
    cout << borrower1.getName() + " " + borrower1.getLastName() << " books:" << endl;

    borrower1.showBooks();

    //retrieve a book object from borrower
    const Book borrower_book = borrower1.getBook(1);
    cout << borrower_book.getTitle() << endl;


    cout << "##### Return book to library " << endl;
    borrower1.returnBook(library, 1);

    cout << borrower1.getName() + " " + borrower1.getLastName() << " books:" << endl;
    borrower1.showBooks();

    cout << "Show books library: " << endl;
    library.showBooks();

    cout << "##### Lend a book back to borrower " << endl;
    Librarian librarian1("Patty", "Ketchup", 12);
    librarian1.lendBook(library, borrower1, 6);

    cout << borrower1.getName() + " " + borrower1.getLastName() << " books:" << endl;
    borrower1.showBooks();

    cout << "Show books library: " << endl;
    library.showBooks();

    return 0;
}


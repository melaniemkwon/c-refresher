#include <iostream>
using namespace std;

struct book
{
    string title;
    string author;
    string pubYear;
}book1;  // can be declared here.

void setBook(book&);
void showBook(book);

int main() {
    book book2, book3;

    setBook(book1);
    setBook(book2);
    setBook(book3);

    showBook(book1);
    showBook(book2);
    showBook(book3);
}

void setBook(book &b) {
    cout << "Enter book title: ";
    getline(cin, b.title);
    cout << "Enter book author: ";
    getline(cin, b.author);
    cout << "Enter book publication year: ";
    cin >> b.pubYear;
    cin.ignore();
}

void showBook(book b) {
    cout << b.title << " | " << b.author << " | " << b.pubYear << endl;
}
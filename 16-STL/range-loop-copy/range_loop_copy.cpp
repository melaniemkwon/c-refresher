#include <iostream>
#include <vector>

using namespace std;

class Book
{
     public:
     Book()
     {
         cout << "constructor is invoked" << endl;
     }

     Book(const Book &secondBook) { cout <<"some copy constructor instructions" << endl; }
     string getInfo()
     {
        return "Hey I'm book";

     }

};

int main()
{
    vector<int> wholeNumbers {20, 10, 4, -3, 25};

    /*
        Try to avoid this, b/c each time you're invoking copy constructor
        just for printing values.
    */
    for (auto nr : wholeNumbers)
    {
        nr *= 10;
        cout << nr << endl;
    }

    /*
        if you want to chnage original value,
        use reference variable
    */
    for (auto &nr : wholeNumbers)
    {
        nr *= 10;
        cout << nr << endl;
    }

    for (const auto &nr : wholeNumbers)
    {
        cout << nr << endl;
    }

    vector<Book> books {Book(), Book(), Book(), Book(), Book()};
    for (auto& book : books)
    {
        cout << book.getInfo() << endl;
    }

    return 0;
}
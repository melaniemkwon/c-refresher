#include <iostream>
#include <curses.h>
// #include <conio.h>

/* skip this b/c of library issues */

using namespace std;

int main()
{
    char test;

    cout << "MENU: " << endl;
    cout << "1. Add person." << endl;
    cout << "2. Show all people." << endl;

    // test = cin.get();
    test = getch();

    switch(test)
    {
        case '1':
            cout << "test" << endl;
            break;
        case '2':
            cout << "test2" << endl;
            break;
    }
    return 0;
}

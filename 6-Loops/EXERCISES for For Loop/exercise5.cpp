#include <iostream>
using namespace std;

main()
{
    int x;

    cout << "input a number: " << endl;
    cin >> x;

    for (int i = 1; i <= x; i++) {
        cout << "*";
        if (i % 5 == 0)
            cout << endl;
    }

}
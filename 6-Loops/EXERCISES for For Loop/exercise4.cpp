#include <iostream>
using namespace std;

main()
{
    int x, factorial_x = 1;

    cout << "input a number: " << endl;
    cin >> x;

    for (int i = 1; i <= x; i++) {
        factorial_x *= i;
    }

    cout << x << "! = " << factorial_x;
}
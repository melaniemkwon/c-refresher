#include <iostream>
using namespace std;

main()
{
    int a, b, temp;
    cout << "Input 2 integers: " << endl;
    cin >> a;
    cin >> b;
    temp = a;
    a = b;
    b = temp;
    cout << "a = " << a << ", b = " << b << endl;
}

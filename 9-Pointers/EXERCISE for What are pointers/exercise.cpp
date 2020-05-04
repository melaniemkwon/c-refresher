#include <iostream>
using namespace std;

main()
{
    int a = 99;
    int *p = &a;

    cout << a << ", " << &a << endl;
    cout << *p << ", " << p << endl;

    int ** pp = &p;
    cout << **pp << ", " << *pp << ", " << pp << endl;
}

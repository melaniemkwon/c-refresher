#include <iostream>
#include "integer.h"

using namespace std;


int main()
{
    Integer a(50);
    cout << "a " << a.getNr() << endl;

    int b = (int)a; // explicit
    b = a;          // implicit
    cout << "b " << b << endl;

    a = 100;
    cout << "a " << a.getNr() << endl;
    cout << "b " << b << endl;

    cout << "a + b = " << a + (Integer)b << endl;
    cout << "a + b = " << a + b << endl;

    a += b; //overload += operator
    cout << "a += b " << a.getNr() << endl;

    return 0;
}

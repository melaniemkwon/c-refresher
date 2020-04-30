#include <iostream>
using namespace std;

main()
{
    // Exercise 2
    char a = 'a';
    cout << a << endl;
    cout << &a << endl;

    int b = 255;
    cout << b << endl;
    cout << &b << endl;

    short c = 99;
    cout << c << endl;
    cout << &c << endl;

    float d = 1.999;
    cout << d << endl;
    cout << &d << endl;

    double e = 3.141414;
    cout << e << endl;
    cout << &e << endl;

    bool f = true;
    cout << f << endl;
    f = 0;
    cout << f << endl;
    f = 111;
    cout << f << endl;

    unsigned short int g = 3700; //0 to 65535
    cout << g << endl;

    const string CONSTANTVAR = "THIS IS A CONSTANT";
    cout << CONSTANTVAR << endl;
    // CONSTANTVAR = "CHANGE";  error
}

#include <iostream>
using namespace std;

main()
{
    // 1. inches to cm
    int inches;
    cout << "input inches to get cm: " << endl;
    cin >> inches;
    float cms = inches * 2.54;
    cout << inches << " inches is " << cms << " cms." << endl;
    cout << "-----------------" << endl;

    // 2. Fahrenheit to Celsius
    float fah, cel;
    cout << "input degrees in Fahrenheit to get Celsius: " << endl;
    cin >> fah;
    cel = (fah - 32) * (5.0/9.0);  // NOTE: careful with division truncation
    cout << fah << " F is " << cel << " C." << endl;
    cout << "-----------------" << endl;

    // 3-7. arithmetic operators
    int a, b, sum, diff, prod, quot, mod;
    cout << "input two numbers : " << endl;
    cin >> a;
    cin >> b;
    sum = a + b;
    diff = a - b;
    prod = a * b;
    quot = a / b;  // NOTE: division floor truncation
    mod = a % b;
    cout << a << " + " << b << " = " << sum << endl;
    cout << a << " - " << b << " = " << diff << endl;
    cout << a << " * " << b << " = " << prod << endl;
    cout << a << " / " << b << " = " << quot << endl;
    cout << a << " % " << b << " = " << mod << endl;
}
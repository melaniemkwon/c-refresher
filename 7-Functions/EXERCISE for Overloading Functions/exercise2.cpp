#include <iostream>
using namespace std;

void addition(double, double);
void addition(double, double, double);
void addition(double, double, double, double);
void addition(double, double, double, double, double);

main()
{
    double a, b, c, d, e;
    int option;
    cout << "How many numbers would you like to add?: ";
    cin >> option;

    switch(option) {
        case 2:
            cout << "Enter numbers: ";
            cin >> a;
            cin >> b;
            addition(a, b);
            break;
        case 3:
            cout << "Enter numbers: ";
            cin >> a;
            cin >> b;
            cin >> c;
            addition(a, b, c);
            break;
        case 4:
            cout << "Enter numbers: ";
            cin >> a;
            cin >> b;
            cin >> c;
            cin >> d;
            addition(a, b, c, d);
            break;
        case 5:
            cout << "Enter numbers: ";
            cin >> a;
            cin >> b;
            cin >> c;
            cin >> d;
            cin >> e;
            addition(a, b, c, d, e);
            break;
        default:
            cout << "invalid input." << endl;
    }
}

void addition(double a, double b) {
    cout << a + b;
}
void addition(double a, double b, double c) {
    cout << a + b + c;
}
void addition(double a, double b, double c, double d) {
    cout << a + b + c + d;
}
void addition(double a, double b, double c, double d, double e) {
    cout << a + b + c + d + e;
}

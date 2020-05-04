#include <iostream>
using namespace std;

void checkIfTheSame(int &, int &);

int main()
{
    int a = 2, b = 9, c = 2, &d = a;
    cout << a << " " << b << " " << c << " " << d << endl;

    cout << "a and b" << endl;
    checkIfTheSame(a, b);
    cout << "a and c" << endl;
    checkIfTheSame(a, c);
    cout << "a and d" << endl;
    checkIfTheSame(a, d);
}

void checkIfTheSame(int &x, int &y) {
    string msg;

    msg = (x == y) ? "values are equal" : "values are NOT equal";
    cout << msg << endl;

    msg = (x == y && &x == &y) ? "values and addresses are equal" : "values and addresses are NOT equal";
    cout << msg << endl;

    msg = (x == y && &x != &y) ? "values same but addresses are diff" : "NOT values same but addresses are diff";
    cout << msg << endl;

    msg = (x != y && &x != &y) ? "values and addresses are both different" : "NOT values and addresses are both different";
    cout << msg << endl;
}
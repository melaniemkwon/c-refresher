#include <iostream>
using namespace std;

void setValue(int &);

int main()
{
    int x = 8;
    setValue(x);
}

void setValue(int &x) {
    cout << "input a value to replace value x, " << x << ":";
    cin >> x;
    cout << "x is now " << x;
}
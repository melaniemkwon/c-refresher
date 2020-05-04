#include <iostream>
using namespace std;

int main()
{
    // Exercise 1
    char chars[27] = "abcdefghijklmnopqrstuvwxyz";
    int len = sizeof(chars)/sizeof(chars[0]);
    for (int i = 0; i < len; i++) {
        cout << chars[i];
    }

    cout << endl;

    // Exercise 2
    string s = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < s.length(); i++) {
        cout << s[i];
    }

    cout << endl;

    // Exercise 3
    int amount;
    cout << "Enter number of characters to input: ";
    cin >> amount;

    char *p = new (nothrow) char[amount];
    if (p != NULL) {
        for (int i = 0; i < amount; i++) {
            cout << "Enter char at " << i+1 << ": ";
            cin >> p[i];
        }
        for (int i = 0; i < amount; i++) {
            cout << "p[" << i << "] =  " << p[i] << ", " << *(p+i) << endl;
        }

    }
    else {
        cout << "Not enough memory " << endl;
    }

    return 0;
}

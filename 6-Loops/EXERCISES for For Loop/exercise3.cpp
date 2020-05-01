#include <iostream>
using namespace std;

main()
{
    float x, answer = 1;
    int n;

    cout << "input a number: " << endl;
    cin >> x;
    cout << "input the nth power: " << endl;
    cin >> n;

    // just for the sake of this exercise.. instead of pow function
    for (int i = 0; i < n; i++) {
        answer *= x;
    }

    cout << x << "^" << n << " = " << answer << endl;
}
#include <iostream>
using namespace std;

main()
{
    int input, sum = 0;
    cout << "input number: ";
    cin >> input;

    for (int i = 1; i <= input; i++) {
        if (i % 2 != 0)
            continue;

        cout << sum << " + " << i << " = " << (sum += i) << endl;
    }
}
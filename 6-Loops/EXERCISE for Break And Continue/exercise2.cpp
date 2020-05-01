#include <iostream>
using namespace std;

main()
{
    int sum = 0, incr = 1;

    while(true) {
        cout << "The current sum is: " << sum << "." << endl;
        cout << "Do you want to add " << incr << "? (Y/y or N/n)" << endl;

        char answer;
        cin >> answer;

        if (answer == 'Y' or answer == 'y') {
            sum += incr;
            incr++;
            continue;
        }
        else if (answer == 'N' or answer == 'n')
            sum += 1;
        else
            break;
    }
}
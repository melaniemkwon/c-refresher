#include <iostream>
using namespace std;

main()
{
    int start;

    cout << "input an integer number: " << endl;
    cin >> start;

    for (int i = start; i <= start+10; i++) {
        cout << i << ", ";
    }
}
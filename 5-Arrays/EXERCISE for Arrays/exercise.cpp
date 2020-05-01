#include <iostream>
using namespace std;

main()
{
    int array[4], sum = 0;

    cout << "input 4 integers: " << endl;
    cin >> array[0];
    cin >> array[1];
    cin >> array[2];
    cin >> array[3];

    sum = array[0] + array[1] + array[2] + array[3];

    cout << "sum: " << sum << endl;
    cout << "Address of first element: " << &array[0]  << ", " << array << endl;
    cout << "Address of last element: " << &array[3] << endl;
}
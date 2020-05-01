#include <iostream>
using namespace std;

main()
{
    int array[3][3] = {{1,2,3},{3,4,5},{5,6,7}};
    int x, y;

    cout << "input x and y coords (1-3): " << endl;
    cin >> x;
    cin >> y;

    cout << array[x-1][y-1] << endl;
}
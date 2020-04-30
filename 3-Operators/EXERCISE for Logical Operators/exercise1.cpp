#include <iostream>
using namespace std;

main()
{
    int x, y, mid;
    bool is_contained;

    cout << "Input 3 integers: " << endl;
    cin >> x;
    cin >> y;
    cin >> mid;
    is_contained = (mid >= x && mid <= y);
    cout << is_contained << endl;

}

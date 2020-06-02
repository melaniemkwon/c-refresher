#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> wholeNumbers {20, 10, 4, -3, 25};

    for(auto it = wholeNumbers.begin(); it != wholeNumbers.end(); it++)
    {
        auto nr = *it;
        cout << nr << endl;
    }

    /*
        ranged based for loop C++11
            - loops as long as there are elements within RANGE (scope) of container
    */
    for (int nr : wholeNumbers)
        cout << nr << endl;

    return 0;
}
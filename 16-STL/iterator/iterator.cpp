#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> wholeNumbers {20, 10, 4, -3, 25};
    /*
       ITERATOR - objects indicating specific ELEMENT inside a CONTAINER

       How to create ITERATOR:
       containerType::iterator iteratorName;
    */

    vector<int>::iterator it = wholeNumbers.begin();
    cout << *it << endl; // 20

    it++;
    cout << *it << endl; // 10

    it += 2;
    cout << *it << endl; // -3

    it--;
    cout << *it << endl; // 4

    cout << "#### iterate a vector (while)" << endl;
    while(it != wholeNumbers.end())  //NOTE: this will start at 4
    {
        cout << *it << endl;
        it++;
    }

    cout << "#### iterate a vector (for)" << endl;
    for(vector<int>::iterator it = wholeNumbers.begin(); it != wholeNumbers.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}


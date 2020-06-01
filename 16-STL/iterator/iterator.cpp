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

    return 0;
}


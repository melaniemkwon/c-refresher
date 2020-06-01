#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // b/c vector is template class, you need to specify what type of var
    vector<int> wholeNumbers {1, 25, -45, 350};

    // wholeNumbers.push_back(1);
    // wholeNumbers.push_back(25);
    // wholeNumbers.push_back(-45);
    // wholeNumbers.push_back(350);

    for (int i = 0; i < wholeNumbers.size(); i++)
    {
        cout << wholeNumbers[i] << endl;
    }

    wholeNumbers[2] = 500;
    cout << "wholeNumbers[2] = " << wholeNumbers[2] << endl;

    // size of array increases dynamicaly. see capacity.
    cout << "size: " << wholeNumbers.size() << endl;
    cout << "capacity: " << wholeNumbers.capacity() << endl;
    wholeNumbers.push_back(45125);
    cout << "size: " << wholeNumbers.size() << endl;
    cout << "capacity: " << wholeNumbers.capacity() << endl;

    // WARNING: these do NOT work
    // wholeNumbers.insert(3, 500); // at first param, needs ITERATOR
    // wholeNumbers.erase(5)        // again, need ITERATOR

    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> wholeNumbers {20, 10, 4, -3, 25};

    int nrOfPeople = 20;
    cout << nrOfPeople << endl;

    /*
        auto - AUTOmatically infers the type of variable
               by what is assigned to it
    */
    // for(vector<int>::iterator it = wholeNumbers.begin(); it != wholeNumbers.end(); it++)
    for(auto it = wholeNumbers.begin(); it != wholeNumbers.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}
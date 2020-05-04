
#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Input size of array: " << endl;
    cin >> size;

    int *p = new (nothrow) int[size];

    if (p != NULL)
    {
        for (int i = 0; i < size; i++)
        {
            cout << "Input " << (i+1) << " number: " << endl;
            cin >> p[i];
        }

        for (int i = 0; i < size; i++)
        {
            cout << "Number " << i+1 << ": " << p[i] << endl;
        }
    }
    else
        cout << "Not enough memory " << endl;

    delete []p;
    return 0;
}

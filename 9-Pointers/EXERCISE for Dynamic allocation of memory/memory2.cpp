#include <iostream>
using namespace std;

int main()
{
    int amount;

    cout << "How many numbers would you like to store in an array? " << endl;
    cin >> amount;

    int *p = new (nothrow) int[amount];

    if (p != NULL)
    {
        for (int i = 0; i < amount; i++)
        {
            cout << "Enter the " << (i+1) << " number: " << endl;
            cin >> p[i];
        }

        for (int i = 0; i < amount; i++)
        {
            cout << "p [ " << i << " ] =  " << p[i] << endl;
        }
    }
    else
        cout << "Not enough memory " << endl;

    delete []p; // REMEMBER TO DEALLOCATE MEMORY
    return 0;
}

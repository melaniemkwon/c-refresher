#include <iostream>
using namespace std;

/* dynamic allocation of memory

Summary:
    New operator is used for dynamic memory allocation which puts variables on heap memory.
    Remember that to use the Delete operator to deallocate. memory from heap.
    Pointer to object is NOT destroyed,
        value or memory block pointed by pointer is destroyed.
*/

int main()
{
    {
        int *p = new int;
        cout << p << endl;

        delete p;

        p = new int;
        cout << p << endl;

        delete p;
    }

    return 0;
}

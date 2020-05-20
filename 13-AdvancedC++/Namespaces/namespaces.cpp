#include <iostream>

using namespace std;

namespace A
{
    int a = 20;
    int b = 21;
}
namespace B
{
    int a = 99;
}

int a = 3;

using namespace A;
int main()
{
    int a = 1;
    cout << a << endl;
    cout << ::a << endl;
    cout << A::a << endl;
    cout << B::a << endl;

    cout << b << endl;  // from using namespace A

    return 0;
}

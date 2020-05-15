#include <iostream>
#include "test.h"

using namespace std;

int main()
{
    A objA;
    B objB;

    objA.setSecretValue(objB, 77);
    cout << objB.getSecretValue() << endl;

    return 0;
}
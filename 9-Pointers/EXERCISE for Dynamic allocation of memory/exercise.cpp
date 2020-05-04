#include <iostream>
using namespace std;

int main()
{
    int staticVar = 10;
    int *p_staticVar = &staticVar;

    int *p_dynamicVar = new int;
    *p_dynamicVar = 15;

    cout << "staticVar value: " << staticVar << ", staticVar address: " << p_staticVar << endl;
    cout << "p_dynamicVar value: " << *p_dynamicVar << ", p_dynamicVar address: " << p_dynamicVar << endl;

    delete p_dynamicVar;

    return 0;
}

#include <iostream>
#include "user.h"

using namespace std;
/*static properties and static methods */

int main()
{
    User user1;
    User user2;
    cout << user1.getID() << endl;;
    cout << user2.getID() << endl;
    cout << "counter: " << User::getCounter() << endl;

    User users[50];
    cout << "counter: " << User::getCounter() << endl;

    return 0;
}

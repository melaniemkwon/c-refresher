#include <iostream>
#include <string>
using namespace std;

/*
    Ref var must be initialized when created
    Ref var can't change associations / connections
    Ref var must be the same type as associated variable
*/
int main()
{
    string name = "Cassandra";
    string &cassie = name;
    string &cassey = name;
    string &sandra = name;

    cout << name << &name << endl;
    cout << cassie << &cassie << endl;
    cout << cassey << &cassey << endl;
    cout << sandra << &sandra << endl;
}


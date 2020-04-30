#include <iostream>
#include <string>
using namespace std;

main()
{
    int age;

    cout << "Input your age: ";
    cin >> age;

    string message = age >= 18
        ? "Adult age"
        : "Not adult age";

    cout << message << endl;

}
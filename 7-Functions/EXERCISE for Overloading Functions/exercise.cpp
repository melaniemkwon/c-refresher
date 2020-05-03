#include <iostream>
#include <string>
using namespace std;

/* overloading functions */
void variableType(int);
void variableType(double);
void variableType(string);

main()
{
    int i = 5;
    double d = 5.5;
    string s = "hello world";

    variableType(i);
    variableType(d);
    variableType(s);
}

void variableType(int i) {
    cout << i << " integer" << endl;
}
void variableType(double d) {
    cout << d << " double" << endl;
}
void variableType(string s) {
    cout << s << " string" << endl;
}
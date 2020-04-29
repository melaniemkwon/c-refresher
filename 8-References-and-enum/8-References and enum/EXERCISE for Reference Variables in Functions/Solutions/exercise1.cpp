#include <iostream>
using namespace std;
void setValue(int&);
int main() {
    int x;
    setValue(x);
    cout << "Variable x is equal to: " << x << endl;
    return 0;
}
void setValue(int &valueToSet) {
    cout << "Input a value: " << endl;
    cin >> valueToSet;
}

#include <iostream>

using namespace std;

//peeking characters without extracting
int main ()
{
    char c = cin.peek();  //instead of cin.get()

    if (c > '0' && c < '9')
    {
        int number;
        cin >> number;

        cout << "Number is: " << number << endl;
    }
    else
    {
        string txt;
        cin >> txt;

        cout << "Text is: " << txt << endl;
    }

    return 0;
}

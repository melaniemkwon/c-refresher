#include <iostream>

using namespace std;

class DivisionByZeroException
{
    public:
        void getErrorMessage() { cout << "Error: Do not divide by zero"; }
};
double division(double a, double b) throw(DivisionByZeroException)
{
    if (b == 0)
    {
        throw DivisionByZeroException();
    }
    return a / b;
}

int main()
{
    // int a = 5;
    char a = 5;

    try
    {
        a *= 10;

        if (a == 50)
            throw a;

        cout << "A is valid." << endl;
    }
    catch(int e)
    {
        cout << "A can't be " << a << endl;
    }
    catch (...)
    {
        cout << "Non-int catch " << endl;
    }

    cout << "----------------------" << endl;

    try
    {
        double result = division(5, 0);
        cout << "result is " << result << endl;
    }
    catch(DivisionByZeroException e)
    {
        e.getErrorMessage();
    }


    return 0;
}
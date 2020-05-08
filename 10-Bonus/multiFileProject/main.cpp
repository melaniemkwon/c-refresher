#include <iostream>
#include "ourfirstlibrary.h" //Rule of thumb: Only #include the header files, not the .cpp files!
using namespace std;

/* preprocessor directives and multi-file project */

#define PI 3.14

int main()
{
    cout << PI << endl;

    // cout << a << endl;
    cout << b << endl;
    showHelp();

    return 0;
}

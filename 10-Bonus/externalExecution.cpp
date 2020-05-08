#include <iostream>
#include <cstring>

using namespace std;
void showHelp();
int main(int argc, char *argv[])
{
    //arguments counter - argc
    //arguments values - argv

    for (int i = 0; i < argc; i++)
    {
        if ((strcmp(argv[i], "-h") == 0) && i == 1)
            showHelp();
    }

    char a[] = {'a', 'b', 'c', 'd', '\0'};
    char *b = "this is a test";

    char *c[] = {"blah", "test", "something else"};
    cout << c[2] << endl;

    char x[] = "xxxxxb"; //name of ARRAY is A POINTER!!!!
    char y[] = "xxxxxa";

    cout << (x == y) << endl;
    cout << (&x[0] == &y[0]) << endl;
    //0 - variables are the same,
    //1 the first string is greater,
    //-1 that the first string is lower
    cout << (strcmp(x,y)) << endl;

    return 0;
}

void showHelp() {s
    cout << "this is so helpful ;)" << endl;
}

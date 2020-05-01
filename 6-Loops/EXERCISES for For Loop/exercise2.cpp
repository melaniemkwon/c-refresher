#include <iostream>
using namespace std;

main()
{
    char char_A = 'A';

    for (int i = char_A; i < char_A+26; i++) {
        cout << (char)i << " " << (char)(i+32) << " ";
    }
}
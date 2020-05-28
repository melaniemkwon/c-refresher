#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    // put(character to put on stream)

    string txt = "thistextisconnected";
    for (int i = 0; i < txt.length(); i++)
    {
        cout.put(txt[i]).put(' ');
    }

    string filename = "/home/mkwon/c++/c++refresher/14-Fstream/io-functions/text.txt";
    fstream file;
    file.open(filename, ios::out | ios::binary);

    if (file.is_open())
    {
        char c;
        do
        {
            // Load characters from cin stream directly to file.
            c = cin.get();
            file.put(c);
        } while(c != '.');
    }
    else
        cout << "Problem opening file." << endl;

    return 0;
}

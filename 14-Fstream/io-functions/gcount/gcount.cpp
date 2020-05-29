#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string filename = "/home/mkwon/c++/c++refresher/14-Fstream/io-functions/gcount/sample.txt";
    fstream file;

    file.open(filename, ios::in | ios::binary);

    if (file.is_open())
    {
        char buffer[250];
        do
        {
            file.getline(buffer, 250);

            // how many chars were extracted in each getline?
            // gcount - counting chars from last operation
            cout << buffer << " " << file.gcount() << endl;

        } while(!file.eof());
    }
    else
        cout << "The file couldn't be opened properly" << endl;

    return 0;
}

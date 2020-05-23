#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    /*
        tellg - tell get - tell where is the reading pointer
        seekg - seek get - set reading pointer at specified position


        seekg(how_many_bytes_from_the_flag_place, flag);

        possible flags:
        ios::beg - (begin) set from the begin (default)
        ios::end - set from the end
        ios::cur - (current) set from current place
    */

    string filename = "/home/mkwon/c++/c++refresher/14-Fstream/reading-position-pointer/sample.txt";
    fstream file;

    file.open(filename, ios::in | ios::binary);

    if (file.is_open())
    {
        file.seekg(0, ios::end);    // set at end of the file.

        streampos sizeOfFile = file.tellg();
        cout << "The size of the file is " << sizeOfFile << " bytes" << endl;

        file.seekg(-5, ios::cur);
        file.seekg(0);              // set to beginning

        string buffer;
        do
        {
            file >> buffer;
            cout << buffer << endl;
        } while (!file.eof());

        if ((file.rdstate() ^ ifstream::eofbit) == 0)
        {
            file.clear();
            cout << file.tellg() << endl;
            file >> buffer;

            cout << buffer << endl;
        }

    }
    else
        cout << "The file couldn't be opened properly" << endl;

    return 0;
}

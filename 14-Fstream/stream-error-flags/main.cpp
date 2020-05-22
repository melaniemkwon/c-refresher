#include <iostream>
#include <fstream>

using namespace std;

/*
    bad() - bad bit(1), returns true if error (like writing to file that is read-only)
    fail() - fail bit(4), returns true if we try to assign to wrong type (string to int), or bad bit situation
    eof() - eof bit(2), stands for end of file. returns true if end of file reached

    1 - 001
    2 - 010
    4 - 100          XOR is only true if only one of bits is true

    good() - good bit(0), returns true if above flags are false

    rdstate() - read state
    clear() - clear/reset the state
*/

int main()
{
    string filename = "/home/mkwon/c++/c++refresher/14-Fstream/stream-error-flags/sample.txt";

    fstream file;
    file.open(filename, ios::in);

    // bad
    if (file.is_open())
    {
        file << "this is sample text.";

        if (file.bad())
        {
            cout << "file.bad() " << file.bad() << endl;
            file.clear();
        }

        string tmp;
        file >> tmp;
        cout << "tmp: " << tmp << endl;

    }

    //fail
    if (file.is_open())
    {
        int buffer;
        file >> buffer; //trying to assign string to int, results to fail
        cout << "buffer " << buffer << endl;

        if (file.fail())
        {
            cout << "file.fail() " << file.fail() << endl;
            cout << "file.good() " << file.good() << endl;
            file.clear();
            cout << "CLEAR" << endl;
            cout << "file.good() " << file.good() << endl;
        }
    }

    // multi-line reads
    if (file.is_open())
    {
        string sbuffer;
        do
        {
            file >> sbuffer;
            cout << sbuffer << endl;
        } while (!file.eof());

        cout << "file.rdstate() " << file.rdstate() << endl; // 2: eof bit
        cout << "file.good() " << file.good() << endl; // note: returns 0

        // XOR
        cout << (file.rdstate() ^ ifstream::eofbit) << endl;
        if((file.rdstate() ^ ifstream::eofbit) == 0)
            file.clear();
        cout << "file.rdstate() " << file.rdstate() << endl;
    }


    file.close();
    return 0;
}
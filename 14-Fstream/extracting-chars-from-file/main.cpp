#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    /*
        getline(where to store the extracted characters,
                how many characters should be taken until,
                seperator(delimiter))
            getline extracts the separator and deletes it.
        get(where to store the extracted characters,
            how many characters should be taken until,
            seperator(delimiter))
            get does NOT extract the separator
        ignore(how_many_characters_to_extract AND TO IGNORE THEM,
               seperator)

        get();
    */

    fstream file;
    string filename = "/home/mkwon/c++/c++refresher/14-Fstream/extracting-chars-from-file/sample.txt";
    file.open(filename, ios::in | ios::binary);

    if (file.is_open())
    {
        cout << "getline" << endl;
        char buffer[50];
        while (file.getline(buffer, 50)) //file.getline(buffer, 50, '\n')
        {
            cout << buffer << endl;
        }

        file.clear();
        file.seekg(0);

        cout << "get" << endl;
        char buffer2[50];
        while (file.get(buffer2, 50))
        {
            file.ignore(1);
            cout << buffer2 << endl;
        }

        file.clear();
        file.seekg(0);

        cout << "use 'get' to retrieve first and last initials" << endl;
        char first, second;

        do {
            first = file.get();
            file.ignore(40, ' ');

            second = file.get();
            file.ignore(40, '\n');

            cout << first << " " << second << endl;
        } while(!file.eof());

        file.clear();
        file.seekg(0);

        cout << "use 'get' to retrieve full first name and last initial" << endl;
        char buffer3[50];

        do {
            file.getline(buffer3, 50, ' ');

            second = file.get();
            file.ignore(40, '\n');

            cout << buffer3 << " " << second << "." << endl;
        } while(!file.eof());

    }
    else
        cout << "File can't be opened." << endl;

    return 0;
}
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string filename = "/home/mkwon/c++/c++refresher/14-Fstream/io-functions/write/sample.txt";
    fstream file;

    file.open(filename, ios::out | ios::binary);

    if (file.is_open())
    {
        char sample[] = "sample text";

        cout << sizeof(sample) << endl;

        file.write(sample, sizeof(sample)-1);
        // file.write(sample, 60);  //this will save garbage memory to file
    }
    else
        cout << "File could not be opened." << endl;

    return 0;
}

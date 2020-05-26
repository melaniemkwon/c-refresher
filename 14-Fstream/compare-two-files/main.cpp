#include <iostream>
#include <fstream>
#include "string.h"

using namespace std;

bool areFilesEqual(fstream *, fstream *); //fstream doesn't have copy constructor, so need pointer
int sizeOfFile(fstream *);

int main()
{
    /*
        read (where to read, how many bytes to read);
        memcmp - aka memory compare, compares byte by byte
    */

    string filename1 = "/home/mkwon/c++/c++refresher/14-Fstream/compare-two-files/sample.txt";
    string filename2 = "/home/mkwon/c++/c++refresher/14-Fstream/compare-two-files/sample2.txt";

    fstream file1, file2;

    file1.open(filename1, ios::in | ios::binary | ios::ate);
    file2.open(filename2, ios::in | ios::binary | ios::ate);

    if (file1.is_open() && file2.is_open())
    {
        if (areFilesEqual(&file1, &file2))
        {
            cout << "files are equal";
        }
        else
        {
            cout << "files are not equal";
        }

        file1.close();
        file2.close();
    }
    else
        cout << "File can't be opened." << endl;

    return 0;
}

bool areFilesEqual(fstream *a, fstream *b)
{
    int fileSize1 = sizeOfFile(a);
    int fileSize2 = sizeOfFile(b);

    if (fileSize1 == fileSize2)
    {
        int BUFFER_SIZE;

        if (fileSize1 > 1024)
        {
            BUFFER_SIZE = 1024;
        }
        else
            BUFFER_SIZE = fileSize1;

        char *file1buffer = new char[BUFFER_SIZE];
        char *file2buffer = new char[BUFFER_SIZE];

        do
        {
            a->read(file1buffer, BUFFER_SIZE);
            b->read(file2buffer, BUFFER_SIZE);

            if(memcmp(file1buffer, file2buffer, BUFFER_SIZE) != 0)
            {
                delete [] file1buffer;
                delete [] file2buffer;
                return false;
            }
        } while(a->good() && b->good());

        delete [] file1buffer;
        delete [] file2buffer;
        return true;
    }
    else
    {
        cout << "file sizes are not equal";
        return false;
    }
}

int sizeOfFile(fstream *file)
{
    file->seekg(0, ios::end);
    int sizeOfFile = file->tellg();
    file->seekg(0, ios::beg); // don't forget to reset reader to beginning

    return sizeOfFile;
}
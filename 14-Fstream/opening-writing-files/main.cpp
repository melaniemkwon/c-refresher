#include <iostream>
#include <fstream>

using namespace std;

/*
    ios::in - INPUT - READING
    ios::out - OUTPUT - WRITE TO FILE, if there is no file then create it, if there is a file then truncate it (remove content) unless it occurs with ios::in flag
    ios::trunc - TRUNCATE - remove content
    ios::ate - At The End - sets pointer at the end of file - the place of pointer can be changed in that mode, it's possible to read and write in that mode
    ios::app - Append - the content is added at the end of file (it's not possible to remove content nor adding something in other place than the end of file)
    ios::binary - opens the file as a binary file

*/

/*
    DEFAULT MODE (FLAGS)
    fstream - ios::out | ios::in
     ..fstream inherents from both
        ifstream - ios::in
        ofstream - ios::out
*/

int main()
{
    string filename = "/home/mkwon/c++/c++refresher/14-Fstream/opening-writing-files/test.txt";
    string filename2 = "/home/mkwon/c++/c++refresher/14-Fstream/opening-writing-files/sample.txt";

    fstream file;

    // default. open and overwrite.
    file.open(filename);
    if (file.is_open())
    {
        cout << "the file has opened";
        file << "this is sample text.";
        file.close();
    }
    else
    {
        cout << "file not opened";
    }

    // text appended to the end, without removing current content
    file.open(filename2, ios::out | ios::app);
    if (file.is_open())
    {
        file << "sample text\n";
        file << "sample text\n";

    }
    else
        cout << "The file hasn't been opened properly";

    return 0;
}
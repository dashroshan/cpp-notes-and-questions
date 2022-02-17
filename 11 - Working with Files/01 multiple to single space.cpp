/*
Write a program that reads a text file and creates another file that is
identical except that every sequence of consecutive blank spaces is replaced by
a single space.
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char ch, chPrev = '.';
    ifstream fIn("files/01 data.txt");
    if (!fIn)
    {
        cout << "01 data.txt file not found in the files folder!";
        return 0;
    }
    ofstream fOut("files/01 dataModified.txt");
    while ((ch = fIn.get()) != EOF)
    {
        if (!(ch == ' ' && chPrev == ' '))
        {
            fOut.put(ch);
        }
        chPrev = ch;
    }
    fIn.close();
    fOut.close();
    return 0;
}

/*
ORIGINAL FILE

Roshan  Dash
Hello World! I am  learning   C++

MODIFIED FILE

Roshan Dash
Hello World! I am learning C++
*/
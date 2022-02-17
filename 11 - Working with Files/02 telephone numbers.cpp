/*
A file contains a list of telephone numbers in the following form:

John    23456
Ahmed    9876
:
:

The names contain only one word and the names and telephone numbers are
separated by white spaces. Write a program to read the file and output the list
in two columns. The names should be left-justified and the numbers right
justified.
*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    char name[10];
    long number;
    ifstream fIn("files/02 numbers.txt");
    while (!fIn.eof())
    {
        fIn >> name;
        fIn >> number;
        cout << setw(10) << left << name << setw(10) << right << number << endl;
    }
    fIn.close();
    return 0;
}

/*
OUTPUT

Roshan        123456
Swoyam          2345
Rohan         345678
*/
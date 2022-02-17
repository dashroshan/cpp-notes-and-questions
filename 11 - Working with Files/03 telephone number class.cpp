/*
Write a program that will create a data file containing the list of telephone
numbers given in Exercise 11.2. Use a class object to store each set of data.
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>

using namespace std;

class numData
{
    char name[10];
    long num;

public:
    numData() {}
    numData(char *nameIn, long numIn)
    {
        strcpy(name, nameIn);
        num = numIn;
    }
    void print()
    {
        cout << setw(10) << left << name << setw(10) << right << num << endl;
    }
};

int main()
{
    char name[10];
    long number;
    numData numDataObj;

    ifstream fIn("files/02 numbers.txt");
    ofstream fOut("files/03 numbersOut");

    while (!fIn.eof())
    {
        fIn >> name;
        fIn >> number;
        numDataObj = numData(name, number);
        fOut.write((char *)&numDataObj, sizeof(numDataObj));
    }
    fIn.close();
    fOut.close();

    // Not asked in question
    // Displays the entries from the binary output file
    ifstream fIn2("files/03 numbersOut");
    while (fIn2.read((char *)&numDataObj, sizeof(numDataObj)))
    {
        numDataObj.print();
    }
    fIn2.close();
    return 0;
}

/*
OUTPUT

Roshan        123456
Swoyam          2345
Rohan         345678
*/
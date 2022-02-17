#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char str[30];

    ofstream fOut("test.txt");
    fOut << "Hello World!\nRoshan Dash";
    fOut.close();

    ifstream fIn("test.txt");

    if (!fIn)
    {
        cout << "File couldn't be opened!";
        return 0;
    }

    while (fIn)
    {
        fIn.getline(str, 30);
        cout << str << endl;
    }
    fIn.close();
    return 0;
}
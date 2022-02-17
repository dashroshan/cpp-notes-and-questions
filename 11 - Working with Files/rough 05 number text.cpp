#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char text[10];
    int num;
    ofstream fOut("test.txt");
    fOut << "Roshan"
         << " ";
    fOut << 10;
    fOut.close();

    ifstream fIn("test.txt");
    fIn >> text;
    fIn >> num;
    fIn.close();
    cout << text << num;
    return 0;
}
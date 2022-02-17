#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char ch;

    ofstream fOut("test", ios::app);
    fOut.put('R');
    fOut.close();

    ifstream fIn("test");
    while ((ch = fIn.get()) != EOF)
    {
        cout << ch << fIn.tellg() - 1 << endl;
    }
    fIn.close();
    return 0;
}
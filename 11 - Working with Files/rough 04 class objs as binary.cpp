#include <iostream>
#include <fstream>

using namespace std;

class nums
{
    int a;
    double b;

public:
    nums() {}
    nums(int aIn, double bIn)
    {
        a = aIn;
        b = bIn;
    }
    void print(void)
    {
        cout << "a=" << a << ", b=" << b << endl;
    }
};

int main()
{
    nums data[2], dataRead[2];
    data[0] = nums(1, 1.5);
    data[1] = nums(2, 2.5);

    ofstream fOut("test");
    fOut.write((char *)&data, sizeof(data));
    fOut.close();

    ifstream fIn("test");
    fIn.read((char *)&dataRead, sizeof(dataRead));
    fIn.close();

    dataRead[0].print();
    dataRead[1].print();
    return 0;
}
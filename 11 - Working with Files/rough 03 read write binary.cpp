#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int nums[5] = {1, 2, 3, 4, 5}, read[5] = {0};

    ofstream fOut("test");
    fOut.write((char *)&nums, sizeof(nums));
    fOut.close();

    ifstream fIn("test");
    fIn.read((char *)&read, sizeof(read));
    for (int i = 0; i < 5; i += 1)
    {
        cout << read[i] << endl;
    }
    fIn.close();
    return 0;
}
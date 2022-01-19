#include <iostream>

using namespace std;

int num = 1;

int main()
{
    int num = 2;
    cout << "Local num : " << num;
    cout << "\nGlobal num : " << ::num;
    return 0;
}
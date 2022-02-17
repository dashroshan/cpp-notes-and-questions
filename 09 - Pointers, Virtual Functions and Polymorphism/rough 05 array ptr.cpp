#include <iostream>

using namespace std;

int main()
{
    int a[10] = {0}, *aPtr;
    aPtr = a;
    cout << *(aPtr + 1);
    return 0;
}
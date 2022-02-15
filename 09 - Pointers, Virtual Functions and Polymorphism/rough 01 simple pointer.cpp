#include <iostream>

using namespace std;

int main()
{
    int num = 1, *ptrToNum, **ptrToNumPtr;
    ptrToNum = &num;
    ptrToNumPtr = &ptrToNum;
    *ptrToNum += 1;
    **ptrToNumPtr += 1;
    cout << num;
    return 0;
}
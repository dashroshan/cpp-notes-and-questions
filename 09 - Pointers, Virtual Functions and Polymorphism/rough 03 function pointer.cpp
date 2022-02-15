#include <iostream>

using namespace std;

int add(int a, int b) { return a + b; }

int main()
{
    int (*addPtr)(int, int);
    addPtr = &add;
    cout << addPtr(1, 3);
    return 0;
}
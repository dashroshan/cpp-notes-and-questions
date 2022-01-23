#include <iostream>
#define MAXOF2(x, y) ((x > y) ? x : y)
#define MAX(x, y, z) (MAXOF2(MAXOF2(x, y), z))

using namespace std;

int main()
{
    cout << MAX(4, 5, 6);
    return 0;
}

/*
OUTPUT

6
*/
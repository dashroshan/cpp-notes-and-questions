#include <iostream>

using namespace std;

inline int max(int x, int y, int z)
{
    int maxOfXY = (x >= y) ? x : y;
    return (maxOfXY >= z) ? maxOfXY : z;
}

int main()
{
    cout << max(4, 5, 6);
    return 0;
}

/*
OUTPUT

6
*/
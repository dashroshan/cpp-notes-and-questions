#include <iostream>

using namespace std;

template <typename t1, typename t2>
t1 maxT(t1 v1, t2 v2)
{
    return (v1 >= v2) ? v1 : v2;
}

int main()
{
    int a = 2;
    float b = 3.5;
    cout << maxT(b, a);
    return 0;
}
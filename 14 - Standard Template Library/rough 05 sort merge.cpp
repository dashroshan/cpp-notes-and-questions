#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
    int a[] = {1, 5, 3, 2, 4}, b[] = {7, 6, 8}, c[8];
    sort(a, a + 5);
    sort(b, b + 3, greater<int>());
    merge(a, a + 5, b, b + 3, c);
    for (int i = 0; i < 8; i += 1)
    {
        cout << c[i] << " ";
    }
    return 0;
}
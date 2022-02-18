#include <iostream>

using namespace std;

template <class tVar> // We can use "typename" inplace of "class"
tVar area(tVar x, tVar y)
{
    return x * y;
}

int main()
{
    cout << area(2, 3) << endl
         << area(2.1, 3.1);
    return 0;
}
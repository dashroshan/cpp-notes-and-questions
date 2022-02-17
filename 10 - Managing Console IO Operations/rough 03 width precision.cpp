#include <iostream>

using namespace std;

int main()
{
    double a = 1.23456, b = 654.321;
    cout.precision(4);
    cout.width(15);
    cout
        << a;
    cout.width(10);
    cout.fill('*');
    cout
        << b;
    return 0;
}
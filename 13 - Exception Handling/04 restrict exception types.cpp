/*
Write a program that demonstrates how certain exception types are not allowed to
be thrown.
*/

#include <iostream>
#include <cmath>

using namespace std;

double squareRoot(double num) throw(int, double) // Only int and double throw allowed
{
    if (num < 0)
    {
        throw "Error : negative number!";
    }
    return sqrt(num);
}

int main()
{
    try
    {
        cout << squareRoot(25) << endl;
        cout << squareRoot(-5) << endl;
    }
    catch (const char *error)
    {
        cout << error << endl;
    }
    return 0;
}

/*
OUTPUT

5
terminate called after throwing an instance of 'char const*'
*/
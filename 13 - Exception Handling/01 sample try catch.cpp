/*
Write a program containing a particular exception. Use a try block to throw it
and a catch block to handle it properly.
*/

#include <iostream>
#include <cmath>

using namespace std;

double squareRoot(double num)
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
Error : negative number!
*/
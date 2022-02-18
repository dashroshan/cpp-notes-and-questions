/*
Write a program using catch(...) handler
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
    catch (...)
    {
        cout << "Unknown error!";
    }
    return 0;
}

/*
OUTPUT

5
Unknown error!
*/
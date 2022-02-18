#include <iostream>
#include <cmath>

using namespace std;

double sqrtFn(double num)
{
    if (num < 0)
    {
        throw "Negative number!";
    }
    return sqrt(num);
}

int main()
{
    try
    {
        throw 2.5;
        cout << "Never printed!";
    }
    catch (double num)
    {
        cout << "Error with double : " << num << endl;
    }

    try
    {
        throw "This is an error string!";
        cout << "Never printed!";
    }
    catch (const char *text)
    {
        cout << "Error with text : " << text << endl;
    }

    try
    {
        sqrtFn(-0.3);
    }
    catch (const char *errorText)
    {
        cout << errorText << endl;
    }

    try
    {
        sqrtFn(-0.3);
    }
    catch (int num)
    {
        cout << num;
    }
    catch (...)
    {
        cout << "Error thrown without any appropriate catch handler!" << endl;
    }

    return 0;
}
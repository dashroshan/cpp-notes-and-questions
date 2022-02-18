/*
Write a program to demonstrate the concept of rethrowing an exception.
*/

#include <iostream>

using namespace std;

void fnA(void)
{
    throw "Error original!";
}

void fnB(void)
{
    try
    {
        fnA();
    }
    catch (...)
    {
        throw "Error rethrown!";
    }
}

int main()
{
    try
    {
        fnB();
    }
    catch (const char *error)
    {
        cout << error;
    }
    return 0;
}

/*
OUTPUT

Error rethrown!
*/
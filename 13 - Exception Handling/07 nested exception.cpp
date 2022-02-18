/*
Write a main program that calls a deeply nested function containing an
exception. Incorporate necessary exception handling mechanism.
*/

#include <iostream>

using namespace std;

void fnA(void)
{
    throw "Error thrown from fnA()";
}

void fnB(void)
{
    fnA();
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

Error thrown from fnA()
*/
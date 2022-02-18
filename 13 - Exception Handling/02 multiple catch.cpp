/*
Write a program that illustrates the use of multiple catch statements.
*/

#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter an even integer : ";
    cin >> num;
    try
    {
        if (num % 2 == 1)
        {
            throw "Error : it's an odd number!";
        }
        else if (num < 0)
        {
            throw num;
        }
        else
        {
            cout << num;
        }
    }
    catch (int number)
    {
        cout << "Error : " << number << " is a negative number!";
    }
    catch (const char *text)
    {
        cout << text;
    }
    return 0;
}

/*
OUTPUT

Enter an even integer : -3
Error : -3 is a negative number!
*/
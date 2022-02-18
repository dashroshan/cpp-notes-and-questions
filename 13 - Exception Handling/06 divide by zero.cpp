/*
Write a program with the following:

(a) A function to read two double type numbers from keyboard
(b) A function to calculate the division of these two numbers
(c) A try block to throw an exception when a wrong type of data is keyed in
(d) A try block to detect and throw an exception if the condition
"divide-by-zero" occurs
(e) Appropriate catch block to handle the exceptions thrown
*/

#include <iostream>

using namespace std;

int main()
{
    double a, b;
    cout << "Enter 2 numbers (separated by spaces) : ";
    try
    {
        cin >> a >> b;
        if (cin.fail())
        {
            throw "Error : invalid inputs!";
        }
        if (b == 0)
        {
            throw "Error : cannot divide by zero!";
        }
        cout << a / b;
    }
    catch (const char *error)
    {
        cout << error;
    }
    return 0;
}

/*
OUTPUT

(1st run)
Enter 2 numbers (separated by spaces) : 2 0
Error : cannot divide by zero!

(2nd run)
Enter 2 numbers (separated by spaces) : A 2
Error : invalid inputs!
*/
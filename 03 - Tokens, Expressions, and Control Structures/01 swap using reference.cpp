/*
Write a function using reference variable as arguments to swap the values of a
pair of integers.
*/

#include <iostream>

using namespace std;

void swap(int &a, int &b);

int main()
{
    int a = 1, b = 2;
    swap(a, b);
    cout << "a = " << a << endl
         << "b = " << b;
    return 0;
}

void swap(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

/*
OUTPUT

a = 2
b = 1
*/
/*
write a program to read the values of a,b and c and display the value of x where
x = a/b-c
Test you program for the following values:
(a) a = 250, b = 85, c = 25
(b) a = 300, b = 70, c = 70
*/

#include <iostream>

using namespace std;

int main()
{
    float a, b, c;
    cout << "Enter values of a, b, and c (separated by spaces) : ";
    cin >> a >> b >> c;
    cout << "x = " << (a / b - c);
    return 0;
}

/*
OUTPUT

Enter values of a, b, and c (separated by spaces) : 250 85 25
x = -22.0588

Enter values of a, b, and c (separated by spaces) : 300 70 70
x = -65.7143
*/
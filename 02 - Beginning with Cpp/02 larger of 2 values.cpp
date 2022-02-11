/*
Write program to read two numbers from the keyboard and display the larger value
on the screen.
*/

#include <iostream>

using namespace std;

int main()
{
    float num1, num2;
    cout << "Enter two numbers separated by space : ";
    cin >> num1 >> num2;
    cout << ((num1 > num2) ? num1 : num2) << " is the larger of the two numbers!";
    return 0;
}

/*
OUTPUT

Enter two numbers separated by space : 1 2
2 is the larger of the two numbers!
*/
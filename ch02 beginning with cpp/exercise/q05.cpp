#include <iostream>

using namespace std;

int main()
{
    float tempInF;
    cout << "Enter the temperature in Fahrenheit : ";
    cin >> tempInF;
    cout << tempInF << "F is " << ((tempInF - 32) * (5.0 / 9.0)) << "C";
    return 0;
}

/*
OUTPUT

Enter the temperature in Fahrenheit : 90
90F is 32.2222C
*/
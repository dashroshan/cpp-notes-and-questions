/*
Write a program that reads a list of countries in random order and displays them
in alphabetical order. Use comparison operators and functions.
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int total, first = 1;
    cout << "Enter total countries  : ";
    cin >> total;
    string s[total];

    for (int i = 0; i < total; i += 1)
    {
        cout << "[" << i + 1 << "] Enter country name : ";
        cin >> s[i];
    }

    cout << "Countries : ";
    sort(s, s + total);
    for (int i = 0; i < total; i += 1)
    {
        cout << s[i] << " ";
    }
    return 0;
}

/*
OUTPUT

Enter total countries  : 3
[1] Enter country name : India
[2] Enter country name : Pakistan
[3] Enter country name : Bangladesh
Countries : Bangladesh India Pakistan
*/
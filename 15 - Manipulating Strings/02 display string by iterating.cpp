#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s("Hello World!");
    int i = 0;
    while (i < s.size())
    {
        cout << s[i];
        i++;
    }
    return 0;
}

/*
OUTPUT

Hello World!
*/
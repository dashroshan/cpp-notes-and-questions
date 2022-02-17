#include <iostream>

using namespace std;

int main()
{
    char c;
    int count;
    while ((c = cin.get()) != '\n')
    {
        cout.put(c);
        count += 1;
    }
    cout << "\nTotal chracters : " << count;
    return 0;
}

/*
OUTPUT

Roshan Dash
Roshan Dash
Total chracters : 11
*/
/*
Write a program that reads several city names from the keyboard and displays
only those names beginning with characters “B” or “C”.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int total, first = 1;
    cout << "Enter total cities  : ";
    cin >> total;
    string s[total];

    for (int i = 0; i < total; i += 1)
    {
        cout << "[" << i + 1 << "] Enter city name : ";
        cin >> s[i];
    }

    cout << endl
         << "Cities starting with 'B' or 'C' : ";
    for (int i = 0; i < total; i += 1)
    {
        if (s[i].at(0) == 'B' || s[i].at(0) == 'C')
        {
            if (first == 0)
            {
                cout << ", ";
            }
            cout << s[i];
            first = 0;
        }
    }
    return 0;
}

/*
OUTPUT

Enter total cities  : 5
[1] Enter city name : Bhubaneswar
[2] Enter city name : Puri
[3] Enter city name : Cuttack
[4] Enter city name : Raipur
[5] Enter city name : Bhopal

Cities starting with 'B' or 'C' : Bhubaneswar, Cuttack, Bhopal
*/
/*
Given a string s("123456789") Write a program that displays the following:
1
2 3            2
3 4 5          4 3
4 5 6 7        6 5 4
5 6 7 8 9      8 7 6 5
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s("123456789");
    for (int i = 1; 2 * i - 1 <= s.size(); i += 1)
    {
        for (int j = i - 1; j <= (i - 1) * 2; j += 1)
        {
            cout << s[j] << " ";
        }
        for (int l = 1; l < (s.size() + 1) + 6 - i * 2; l += 1)
        {
            cout << " ";
        }
        for (int k = (i - 1) * 2 - 1; k > (i - 1) * 2 - 1 - (i - 1); k -= 1)
        {
            cout << s[k] << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
OUTPUT

1
2 3            2
3 4 5          4 3
4 5 6 7        6 5 4
5 6 7 8 9      8 7 6 5
*/
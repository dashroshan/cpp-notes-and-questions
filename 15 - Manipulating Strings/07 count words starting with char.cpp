/*
Modify the program in Exercise 15.6 to count the number of words which start
with the character 's'
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    char toCount;
    cout << "Enter text : ";
    getline(cin, s);
    cout << "Enter char to count : ";
    cin >> toCount;

    int count = 0;
    bool prevCharIsSpace = true;
    for (int i = 0; i < s.size(); i += 1)
    {
        if (s[i] == ' ')
        {
            prevCharIsSpace = true;
        }
        else if (s[i] != ' ' && prevCharIsSpace == true)
        {
            if (s[i] == toCount)
            {
                count++;
            }
            prevCharIsSpace = false;
        }
    }
    cout << count << " words start with '" << toCount << "'";
    return 0;
}

/*
OUTPUT

Enter text : sun is shinning in the sunny sky!
Enter char to count : s
4 words start with 's'
*/
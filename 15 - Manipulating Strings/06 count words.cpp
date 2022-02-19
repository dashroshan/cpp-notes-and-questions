/*
Write a program that reads the following text and counts the number of times the
word “It” appears in it : It is new. It is singular. It is simple. It must
succeed!
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s, toCount;
    cout << "Enter text : ";
    getline(cin, s);
    cout << "Enter word to count : ";
    cin >> toCount;

    int pos = s.find(toCount, 0), count = 0;
    while (pos >= 0)
    {
        count++;
        pos = s.find(toCount, pos + toCount.size());
    }
    cout << "'" << toCount << "' appears " << count << " times!";
    return 0;
}

/*
OUTPUT

Enter text : It is new. It is singular. It is simple. It must succeed!
Enter word to count : It
'It' appears 4 times!
*/